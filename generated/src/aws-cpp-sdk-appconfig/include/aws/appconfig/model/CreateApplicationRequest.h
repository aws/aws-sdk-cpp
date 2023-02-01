/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>A name for the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the application.</p>
     */
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the application.</p>
     */
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the application.</p>
     */
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the application. Tags help organize and categorize your
     * AppConfig resources. Each tag consists of a key and an optional value, both of
     * which you define.</p>
     */
    inline CreateApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
