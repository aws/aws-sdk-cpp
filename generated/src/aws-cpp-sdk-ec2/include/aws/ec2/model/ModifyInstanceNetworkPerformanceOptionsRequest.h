﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceBandwidthWeighting.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstanceNetworkPerformanceOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceNetworkPerformanceOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceNetworkPerformanceOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the instance to update.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ModifyInstanceNetworkPerformanceOptionsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ModifyInstanceNetworkPerformanceOptionsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ModifyInstanceNetworkPerformanceOptionsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the bandwidth weighting option to boost the associated type of
     * baseline bandwidth, as follows:</p> <dl> <dt>default</dt> <dd> <p>This option
     * uses the standard bandwidth configuration for your instance type.</p> </dd>
     * <dt>vpc-1</dt> <dd> <p>This option boosts your networking baseline bandwidth and
     * reduces your EBS baseline bandwidth.</p> </dd> <dt>ebs-1</dt> <dd> <p>This
     * option boosts your EBS baseline bandwidth and reduces your networking baseline
     * bandwidth.</p> </dd> </dl>
     */
    inline const InstanceBandwidthWeighting& GetBandwidthWeighting() const{ return m_bandwidthWeighting; }
    inline bool BandwidthWeightingHasBeenSet() const { return m_bandwidthWeightingHasBeenSet; }
    inline void SetBandwidthWeighting(const InstanceBandwidthWeighting& value) { m_bandwidthWeightingHasBeenSet = true; m_bandwidthWeighting = value; }
    inline void SetBandwidthWeighting(InstanceBandwidthWeighting&& value) { m_bandwidthWeightingHasBeenSet = true; m_bandwidthWeighting = std::move(value); }
    inline ModifyInstanceNetworkPerformanceOptionsRequest& WithBandwidthWeighting(const InstanceBandwidthWeighting& value) { SetBandwidthWeighting(value); return *this;}
    inline ModifyInstanceNetworkPerformanceOptionsRequest& WithBandwidthWeighting(InstanceBandwidthWeighting&& value) { SetBandwidthWeighting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyInstanceNetworkPerformanceOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceBandwidthWeighting m_bandwidthWeighting;
    bool m_bandwidthWeightingHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
