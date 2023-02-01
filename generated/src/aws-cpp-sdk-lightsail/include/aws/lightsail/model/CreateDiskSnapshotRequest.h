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
    AWS_LIGHTSAIL_API CreateDiskSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDiskSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique name of the source disk (e.g., <code>Disk-Virginia-1</code>).</p>
     *  <p>This parameter cannot be defined together with the <code>instance
     * name</code> parameter. The <code>disk name</code> and <code>instance name</code>
     * parameters are mutually exclusive.</p> 
     */
    inline const Aws::String& GetDiskName() const{ return m_diskName; }

    /**
     * <p>The unique name of the source disk (e.g., <code>Disk-Virginia-1</code>).</p>
     *  <p>This parameter cannot be defined together with the <code>instance
     * name</code> parameter. The <code>disk name</code> and <code>instance name</code>
     * parameters are mutually exclusive.</p> 
     */
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }

    /**
     * <p>The unique name of the source disk (e.g., <code>Disk-Virginia-1</code>).</p>
     *  <p>This parameter cannot be defined together with the <code>instance
     * name</code> parameter. The <code>disk name</code> and <code>instance name</code>
     * parameters are mutually exclusive.</p> 
     */
    inline void SetDiskName(const Aws::String& value) { m_diskNameHasBeenSet = true; m_diskName = value; }

    /**
     * <p>The unique name of the source disk (e.g., <code>Disk-Virginia-1</code>).</p>
     *  <p>This parameter cannot be defined together with the <code>instance
     * name</code> parameter. The <code>disk name</code> and <code>instance name</code>
     * parameters are mutually exclusive.</p> 
     */
    inline void SetDiskName(Aws::String&& value) { m_diskNameHasBeenSet = true; m_diskName = std::move(value); }

    /**
     * <p>The unique name of the source disk (e.g., <code>Disk-Virginia-1</code>).</p>
     *  <p>This parameter cannot be defined together with the <code>instance
     * name</code> parameter. The <code>disk name</code> and <code>instance name</code>
     * parameters are mutually exclusive.</p> 
     */
    inline void SetDiskName(const char* value) { m_diskNameHasBeenSet = true; m_diskName.assign(value); }

    /**
     * <p>The unique name of the source disk (e.g., <code>Disk-Virginia-1</code>).</p>
     *  <p>This parameter cannot be defined together with the <code>instance
     * name</code> parameter. The <code>disk name</code> and <code>instance name</code>
     * parameters are mutually exclusive.</p> 
     */
    inline CreateDiskSnapshotRequest& WithDiskName(const Aws::String& value) { SetDiskName(value); return *this;}

    /**
     * <p>The unique name of the source disk (e.g., <code>Disk-Virginia-1</code>).</p>
     *  <p>This parameter cannot be defined together with the <code>instance
     * name</code> parameter. The <code>disk name</code> and <code>instance name</code>
     * parameters are mutually exclusive.</p> 
     */
    inline CreateDiskSnapshotRequest& WithDiskName(Aws::String&& value) { SetDiskName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the source disk (e.g., <code>Disk-Virginia-1</code>).</p>
     *  <p>This parameter cannot be defined together with the <code>instance
     * name</code> parameter. The <code>disk name</code> and <code>instance name</code>
     * parameters are mutually exclusive.</p> 
     */
    inline CreateDiskSnapshotRequest& WithDiskName(const char* value) { SetDiskName(value); return *this;}


    /**
     * <p>The name of the destination disk snapshot (e.g.,
     * <code>my-disk-snapshot</code>) based on the source disk.</p>
     */
    inline const Aws::String& GetDiskSnapshotName() const{ return m_diskSnapshotName; }

    /**
     * <p>The name of the destination disk snapshot (e.g.,
     * <code>my-disk-snapshot</code>) based on the source disk.</p>
     */
    inline bool DiskSnapshotNameHasBeenSet() const { return m_diskSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the destination disk snapshot (e.g.,
     * <code>my-disk-snapshot</code>) based on the source disk.</p>
     */
    inline void SetDiskSnapshotName(const Aws::String& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = value; }

    /**
     * <p>The name of the destination disk snapshot (e.g.,
     * <code>my-disk-snapshot</code>) based on the source disk.</p>
     */
    inline void SetDiskSnapshotName(Aws::String&& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = std::move(value); }

    /**
     * <p>The name of the destination disk snapshot (e.g.,
     * <code>my-disk-snapshot</code>) based on the source disk.</p>
     */
    inline void SetDiskSnapshotName(const char* value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName.assign(value); }

    /**
     * <p>The name of the destination disk snapshot (e.g.,
     * <code>my-disk-snapshot</code>) based on the source disk.</p>
     */
    inline CreateDiskSnapshotRequest& WithDiskSnapshotName(const Aws::String& value) { SetDiskSnapshotName(value); return *this;}

    /**
     * <p>The name of the destination disk snapshot (e.g.,
     * <code>my-disk-snapshot</code>) based on the source disk.</p>
     */
    inline CreateDiskSnapshotRequest& WithDiskSnapshotName(Aws::String&& value) { SetDiskSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination disk snapshot (e.g.,
     * <code>my-disk-snapshot</code>) based on the source disk.</p>
     */
    inline CreateDiskSnapshotRequest& WithDiskSnapshotName(const char* value) { SetDiskSnapshotName(value); return *this;}


    /**
     * <p>The unique name of the source instance (e.g.,
     * <code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot of
     * the instance's system volume is created.</p>  <p>This parameter cannot be
     * defined together with the <code>disk name</code> parameter. The <code>instance
     * name</code> and <code>disk name</code> parameters are mutually exclusive.</p>
     * 
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The unique name of the source instance (e.g.,
     * <code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot of
     * the instance's system volume is created.</p>  <p>This parameter cannot be
     * defined together with the <code>disk name</code> parameter. The <code>instance
     * name</code> and <code>disk name</code> parameters are mutually exclusive.</p>
     * 
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The unique name of the source instance (e.g.,
     * <code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot of
     * the instance's system volume is created.</p>  <p>This parameter cannot be
     * defined together with the <code>disk name</code> parameter. The <code>instance
     * name</code> and <code>disk name</code> parameters are mutually exclusive.</p>
     * 
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The unique name of the source instance (e.g.,
     * <code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot of
     * the instance's system volume is created.</p>  <p>This parameter cannot be
     * defined together with the <code>disk name</code> parameter. The <code>instance
     * name</code> and <code>disk name</code> parameters are mutually exclusive.</p>
     * 
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The unique name of the source instance (e.g.,
     * <code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot of
     * the instance's system volume is created.</p>  <p>This parameter cannot be
     * defined together with the <code>disk name</code> parameter. The <code>instance
     * name</code> and <code>disk name</code> parameters are mutually exclusive.</p>
     * 
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The unique name of the source instance (e.g.,
     * <code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot of
     * the instance's system volume is created.</p>  <p>This parameter cannot be
     * defined together with the <code>disk name</code> parameter. The <code>instance
     * name</code> and <code>disk name</code> parameters are mutually exclusive.</p>
     * 
     */
    inline CreateDiskSnapshotRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The unique name of the source instance (e.g.,
     * <code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot of
     * the instance's system volume is created.</p>  <p>This parameter cannot be
     * defined together with the <code>disk name</code> parameter. The <code>instance
     * name</code> and <code>disk name</code> parameters are mutually exclusive.</p>
     * 
     */
    inline CreateDiskSnapshotRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the source instance (e.g.,
     * <code>Amazon_Linux-512MB-Virginia-1</code>). When this is defined, a snapshot of
     * the instance's system volume is created.</p>  <p>This parameter cannot be
     * defined together with the <code>disk name</code> parameter. The <code>instance
     * name</code> and <code>disk name</code> parameters are mutually exclusive.</p>
     * 
     */
    inline CreateDiskSnapshotRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDiskSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDiskSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDiskSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateDiskSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
