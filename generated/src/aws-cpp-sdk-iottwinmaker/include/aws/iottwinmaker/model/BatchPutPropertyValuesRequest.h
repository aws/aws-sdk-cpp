/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/PropertyValueEntry.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class BatchPutPropertyValuesRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API BatchPutPropertyValuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutPropertyValues"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workspace that contains the properties to set.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the properties to set.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace that contains the properties to set.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the properties to set.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the properties to set.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the properties to set.</p>
     */
    inline BatchPutPropertyValuesRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the properties to set.</p>
     */
    inline BatchPutPropertyValuesRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the properties to set.</p>
     */
    inline BatchPutPropertyValuesRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>An object that maps strings to the property value entries to set. Each string
     * in the mapping must be unique to this object.</p>
     */
    inline const Aws::Vector<PropertyValueEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>An object that maps strings to the property value entries to set. Each string
     * in the mapping must be unique to this object.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>An object that maps strings to the property value entries to set. Each string
     * in the mapping must be unique to this object.</p>
     */
    inline void SetEntries(const Aws::Vector<PropertyValueEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>An object that maps strings to the property value entries to set. Each string
     * in the mapping must be unique to this object.</p>
     */
    inline void SetEntries(Aws::Vector<PropertyValueEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>An object that maps strings to the property value entries to set. Each string
     * in the mapping must be unique to this object.</p>
     */
    inline BatchPutPropertyValuesRequest& WithEntries(const Aws::Vector<PropertyValueEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>An object that maps strings to the property value entries to set. Each string
     * in the mapping must be unique to this object.</p>
     */
    inline BatchPutPropertyValuesRequest& WithEntries(Aws::Vector<PropertyValueEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the property value entries to set. Each string
     * in the mapping must be unique to this object.</p>
     */
    inline BatchPutPropertyValuesRequest& AddEntries(const PropertyValueEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>An object that maps strings to the property value entries to set. Each string
     * in the mapping must be unique to this object.</p>
     */
    inline BatchPutPropertyValuesRequest& AddEntries(PropertyValueEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::Vector<PropertyValueEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
