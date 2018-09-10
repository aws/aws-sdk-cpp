/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/FleetExcessCapacityTerminationPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TargetCapacitySpecificationRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyFleetRequest : public EC2Request
  {
  public:
    ModifyFleetRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyFleet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifyFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline const FleetExcessCapacityTerminationPolicy& GetExcessCapacityTerminationPolicy() const{ return m_excessCapacityTerminationPolicy; }

    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(const FleetExcessCapacityTerminationPolicy& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }

    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy&& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = std::move(value); }

    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline ModifyFleetRequest& WithExcessCapacityTerminationPolicy(const FleetExcessCapacityTerminationPolicy& value) { SetExcessCapacityTerminationPolicy(value); return *this;}

    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline ModifyFleetRequest& WithExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy&& value) { SetExcessCapacityTerminationPolicy(std::move(value)); return *this;}


    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline ModifyFleetRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline ModifyFleetRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline ModifyFleetRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The size of the EC2 Fleet.</p>
     */
    inline const TargetCapacitySpecificationRequest& GetTargetCapacitySpecification() const{ return m_targetCapacitySpecification; }

    /**
     * <p>The size of the EC2 Fleet.</p>
     */
    inline void SetTargetCapacitySpecification(const TargetCapacitySpecificationRequest& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = value; }

    /**
     * <p>The size of the EC2 Fleet.</p>
     */
    inline void SetTargetCapacitySpecification(TargetCapacitySpecificationRequest&& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = std::move(value); }

    /**
     * <p>The size of the EC2 Fleet.</p>
     */
    inline ModifyFleetRequest& WithTargetCapacitySpecification(const TargetCapacitySpecificationRequest& value) { SetTargetCapacitySpecification(value); return *this;}

    /**
     * <p>The size of the EC2 Fleet.</p>
     */
    inline ModifyFleetRequest& WithTargetCapacitySpecification(TargetCapacitySpecificationRequest&& value) { SetTargetCapacitySpecification(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    TargetCapacitySpecificationRequest m_targetCapacitySpecification;
    bool m_targetCapacitySpecificationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
