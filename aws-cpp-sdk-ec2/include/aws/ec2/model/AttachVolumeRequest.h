﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AttachVolume.</p>
   */
  class AWS_EC2_API AttachVolumeRequest : public EC2Request
  {
  public:
    AttachVolumeRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline AttachVolumeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the EBS volume. The volume and instance must be within the same
     * Availability Zone.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the EBS volume. The volume and instance must be within the same
     * Availability Zone.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the EBS volume. The volume and instance must be within the same
     * Availability Zone.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the EBS volume. The volume and instance must be within the same
     * Availability Zone.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the EBS volume. The volume and instance must be within the same
     * Availability Zone.</p>
     */
    inline AttachVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the EBS volume. The volume and instance must be within the same
     * Availability Zone.</p>
     */
    inline AttachVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the EBS volume. The volume and instance must be within the same
     * Availability Zone.</p>
     */
    inline AttachVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline AttachVolumeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline AttachVolumeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline AttachVolumeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The device name to expose to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }

    /**
     * <p>The device name to expose to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The device name to expose to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The device name to expose to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }

    /**
     * <p>The device name to expose to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline AttachVolumeRequest& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>The device name to expose to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline AttachVolumeRequest& WithDevice(Aws::String&& value) { SetDevice(value); return *this;}

    /**
     * <p>The device name to expose to the instance (for example, <code>/dev/sdh</code>
     * or <code>xvdh</code>).</p>
     */
    inline AttachVolumeRequest& WithDevice(const char* value) { SetDevice(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_device;
    bool m_deviceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
