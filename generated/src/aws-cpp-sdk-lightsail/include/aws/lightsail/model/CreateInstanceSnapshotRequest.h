/**
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
    AWS_LIGHTSAIL_API CreateInstanceSnapshotRequest() = default;

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
    inline const Aws::String& GetInstanceSnapshotName() const { return m_instanceSnapshotName; }
    inline bool InstanceSnapshotNameHasBeenSet() const { return m_instanceSnapshotNameHasBeenSet; }
    template<typename InstanceSnapshotNameT = Aws::String>
    void SetInstanceSnapshotName(InstanceSnapshotNameT&& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = std::forward<InstanceSnapshotNameT>(value); }
    template<typename InstanceSnapshotNameT = Aws::String>
    CreateInstanceSnapshotRequest& WithInstanceSnapshotName(InstanceSnapshotNameT&& value) { SetInstanceSnapshotName(std::forward<InstanceSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    CreateInstanceSnapshotRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInstanceSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInstanceSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
