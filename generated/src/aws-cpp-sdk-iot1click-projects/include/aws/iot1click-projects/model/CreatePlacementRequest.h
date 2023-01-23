/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/IoT1ClickProjectsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   */
  class CreatePlacementRequest : public IoT1ClickProjectsRequest
  {
  public:
    AWS_IOT1CLICKPROJECTS_API CreatePlacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlacement"; }

    AWS_IOT1CLICKPROJECTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the placement to be created.</p>
     */
    inline const Aws::String& GetPlacementName() const{ return m_placementName; }

    /**
     * <p>The name of the placement to be created.</p>
     */
    inline bool PlacementNameHasBeenSet() const { return m_placementNameHasBeenSet; }

    /**
     * <p>The name of the placement to be created.</p>
     */
    inline void SetPlacementName(const Aws::String& value) { m_placementNameHasBeenSet = true; m_placementName = value; }

    /**
     * <p>The name of the placement to be created.</p>
     */
    inline void SetPlacementName(Aws::String&& value) { m_placementNameHasBeenSet = true; m_placementName = std::move(value); }

    /**
     * <p>The name of the placement to be created.</p>
     */
    inline void SetPlacementName(const char* value) { m_placementNameHasBeenSet = true; m_placementName.assign(value); }

    /**
     * <p>The name of the placement to be created.</p>
     */
    inline CreatePlacementRequest& WithPlacementName(const Aws::String& value) { SetPlacementName(value); return *this;}

    /**
     * <p>The name of the placement to be created.</p>
     */
    inline CreatePlacementRequest& WithPlacementName(Aws::String&& value) { SetPlacementName(std::move(value)); return *this;}

    /**
     * <p>The name of the placement to be created.</p>
     */
    inline CreatePlacementRequest& WithPlacementName(const char* value) { SetPlacementName(value); return *this;}


    /**
     * <p>The name of the project in which to create the placement.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in which to create the placement.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project in which to create the placement.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project in which to create the placement.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project in which to create the placement.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project in which to create the placement.</p>
     */
    inline CreatePlacementRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in which to create the placement.</p>
     */
    inline CreatePlacementRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in which to create the placement.</p>
     */
    inline CreatePlacementRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Optional user-defined key/value pairs providing contextual data (such as
     * location or function) for the placement.</p>
     */
    inline CreatePlacementRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_placementName;
    bool m_placementNameHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
