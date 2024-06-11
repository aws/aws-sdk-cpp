﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateInstanceSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateInstanceSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstanceSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for your new snapshot.</p>
     */
    inline const Aws::String& GetInstanceSnapshotName() const{ return m_instanceSnapshotName; }
    inline bool InstanceSnapshotNameHasBeenSet() const { return m_instanceSnapshotNameHasBeenSet; }
    inline void SetInstanceSnapshotName(const Aws::String& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = value; }
    inline void SetInstanceSnapshotName(Aws::String&& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = std::move(value); }
    inline void SetInstanceSnapshotName(const char* value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName.assign(value); }
    inline CreateInstanceSnapshotRequest& WithInstanceSnapshotName(const Aws::String& value) { SetInstanceSnapshotName(value); return *this;}
    inline CreateInstanceSnapshotRequest& WithInstanceSnapshotName(Aws::String&& value) { SetInstanceSnapshotName(std::move(value)); return *this;}
    inline CreateInstanceSnapshotRequest& WithInstanceSnapshotName(const char* value) { SetInstanceSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline CreateInstanceSnapshotRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline CreateInstanceSnapshotRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline CreateInstanceSnapshotRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInstanceSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateInstanceSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInstanceSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateInstanceSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceSnapshotName;
    bool m_instanceSnapshotNameHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
