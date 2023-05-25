/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DetachVolumeRequest : public EC2Request
  {
  public:
    AWS_EC2_API DetachVolumeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachVolume"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The device name.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }

    /**
     * <p>The device name.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }

    /**
     * <p>The device name.</p>
     */
    inline DetachVolumeRequest& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline DetachVolumeRequest& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline DetachVolumeRequest& WithDevice(const char* value) { SetDevice(value); return *this;}


    /**
     * <p>Forces detachment if the previous detachment attempt did not occur cleanly
     * (for example, logging into an instance, unmounting the volume, and detaching
     * normally). This option can lead to data loss or a corrupted file system. Use
     * this option only as a last resort to detach a volume from a failed instance. The
     * instance won't have an opportunity to flush file system caches or file system
     * metadata. If you use this option, you must perform file system check and repair
     * procedures.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Forces detachment if the previous detachment attempt did not occur cleanly
     * (for example, logging into an instance, unmounting the volume, and detaching
     * normally). This option can lead to data loss or a corrupted file system. Use
     * this option only as a last resort to detach a volume from a failed instance. The
     * instance won't have an opportunity to flush file system caches or file system
     * metadata. If you use this option, you must perform file system check and repair
     * procedures.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Forces detachment if the previous detachment attempt did not occur cleanly
     * (for example, logging into an instance, unmounting the volume, and detaching
     * normally). This option can lead to data loss or a corrupted file system. Use
     * this option only as a last resort to detach a volume from a failed instance. The
     * instance won't have an opportunity to flush file system caches or file system
     * metadata. If you use this option, you must perform file system check and repair
     * procedures.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Forces detachment if the previous detachment attempt did not occur cleanly
     * (for example, logging into an instance, unmounting the volume, and detaching
     * normally). This option can lead to data loss or a corrupted file system. Use
     * this option only as a last resort to detach a volume from a failed instance. The
     * instance won't have an opportunity to flush file system caches or file system
     * metadata. If you use this option, you must perform file system check and repair
     * procedures.</p>
     */
    inline DetachVolumeRequest& WithForce(bool value) { SetForce(value); return *this;}


    /**
     * <p>The ID of the instance. If you are detaching a Multi-Attach enabled volume,
     * you must specify an instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance. If you are detaching a Multi-Attach enabled volume,
     * you must specify an instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance. If you are detaching a Multi-Attach enabled volume,
     * you must specify an instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance. If you are detaching a Multi-Attach enabled volume,
     * you must specify an instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance. If you are detaching a Multi-Attach enabled volume,
     * you must specify an instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance. If you are detaching a Multi-Attach enabled volume,
     * you must specify an instance ID.</p>
     */
    inline DetachVolumeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance. If you are detaching a Multi-Attach enabled volume,
     * you must specify an instance ID.</p>
     */
    inline DetachVolumeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance. If you are detaching a Multi-Attach enabled volume,
     * you must specify an instance ID.</p>
     */
    inline DetachVolumeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume.</p>
     */
    inline DetachVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume.</p>
     */
    inline DetachVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume.</p>
     */
    inline DetachVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DetachVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
