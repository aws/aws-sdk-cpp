/*
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
#include <aws/ec2/model/ExcessCapacityTerminationPolicy.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifySpotFleetRequest.</p>
   */
  class AWS_EC2_API ModifySpotFleetRequestRequest : public EC2Request
  {
  public:
    ModifySpotFleetRequestRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const{ return m_spotFleetRequestId; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const Aws::String& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(Aws::String&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const char* value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId.assign(value); }

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline ModifySpotFleetRequestRequest& WithSpotFleetRequestId(const Aws::String& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline ModifySpotFleetRequestRequest& WithSpotFleetRequestId(Aws::String&& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot fleet request.</p>
     */
    inline ModifySpotFleetRequestRequest& WithSpotFleetRequestId(const char* value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The size of the fleet.</p>
     */
    inline int GetTargetCapacity() const{ return m_targetCapacity; }

    /**
     * <p>The size of the fleet.</p>
     */
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }

    /**
     * <p>The size of the fleet.</p>
     */
    inline ModifySpotFleetRequestRequest& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}

    /**
     * <p>Indicates whether running Spot instances should be terminated if the target
     * capacity of the Spot fleet request is decreased below the current size of the
     * Spot fleet.</p>
     */
    inline const ExcessCapacityTerminationPolicy& GetExcessCapacityTerminationPolicy() const{ return m_excessCapacityTerminationPolicy; }

    /**
     * <p>Indicates whether running Spot instances should be terminated if the target
     * capacity of the Spot fleet request is decreased below the current size of the
     * Spot fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(const ExcessCapacityTerminationPolicy& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }

    /**
     * <p>Indicates whether running Spot instances should be terminated if the target
     * capacity of the Spot fleet request is decreased below the current size of the
     * Spot fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy&& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }

    /**
     * <p>Indicates whether running Spot instances should be terminated if the target
     * capacity of the Spot fleet request is decreased below the current size of the
     * Spot fleet.</p>
     */
    inline ModifySpotFleetRequestRequest& WithExcessCapacityTerminationPolicy(const ExcessCapacityTerminationPolicy& value) { SetExcessCapacityTerminationPolicy(value); return *this;}

    /**
     * <p>Indicates whether running Spot instances should be terminated if the target
     * capacity of the Spot fleet request is decreased below the current size of the
     * Spot fleet.</p>
     */
    inline ModifySpotFleetRequestRequest& WithExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy&& value) { SetExcessCapacityTerminationPolicy(value); return *this;}

  private:
    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet;
    int m_targetCapacity;
    bool m_targetCapacityHasBeenSet;
    ExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
