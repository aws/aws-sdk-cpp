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
  class CreateDiskSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateDiskSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDiskSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique name of the source disk (<code>Disk-Virginia-1</code>).</p> 
     * <p>This parameter cannot be defined together with the <code>instance name</code>
     * parameter. The <code>disk name</code> and <code>instance name</code> parameters
     * are mutually exclusive.</p> 
     */
    inline const Aws::String& GetDiskName() const { return m_diskName; }
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }
    template<typename DiskNameT = Aws::String>
    void SetDiskName(DiskNameT&& value) { m_diskNameHasBeenSet = true; m_diskName = std::forward<DiskNameT>(value); }
    template<typename DiskNameT = Aws::String>
    CreateDiskSnapshotRequest& WithDiskName(DiskNameT&& value) { SetDiskName(std::forward<DiskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination disk snapshot (<code>my-disk-snapshot</code>)
     * based on the source disk.</p>
     */
    inline const Aws::String& GetDiskSnapshotName() const { return m_diskSnapshotName; }
    inline bool DiskSnapshotNameHasBeenSet() const { return m_diskSnapshotNameHasBeenSet; }
    template<typename DiskSnapshotNameT = Aws::String>
    void SetDiskSnapshotName(DiskSnapshotNameT&& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = std::forward<DiskSnapshotNameT>(value); }
    template<typename DiskSnapshotNameT = Aws::String>
    CreateDiskSnapshotRequest& WithDiskSnapshotName(DiskSnapshotNameT&& value) { SetDiskSnapshotName(std::forward<DiskSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the source instance
     * (<code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot
     * of the instance's system volume is created.</p>  <p>This parameter cannot
     * be defined together with the <code>disk name</code> parameter. The
     * <code>instance name</code> and <code>disk name</code> parameters are mutually
     * exclusive.</p> 
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    CreateDiskSnapshotRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
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
    CreateDiskSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDiskSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet = false;

    Aws::String m_diskSnapshotName;
    bool m_diskSnapshotNameHasBeenSet = false;

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
