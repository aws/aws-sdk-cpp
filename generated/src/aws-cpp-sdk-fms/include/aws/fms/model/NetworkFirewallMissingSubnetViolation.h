/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Violation detail for Network Firewall for an Availability Zone that's missing
   * the expected Firewall Manager managed subnet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallMissingSubnetViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallMissingSubnetViolation
  {
  public:
    AWS_FMS_API NetworkFirewallMissingSubnetViolation();
    AWS_FMS_API NetworkFirewallMissingSubnetViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallMissingSubnetViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline const Aws::String& GetVPC() const{ return m_vPC; }

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline void SetVPC(const Aws::String& value) { m_vPCHasBeenSet = true; m_vPC = value; }

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline void SetVPC(Aws::String&& value) { m_vPCHasBeenSet = true; m_vPC = std::move(value); }

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline void SetVPC(const char* value) { m_vPCHasBeenSet = true; m_vPC.assign(value); }

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithVPC(const Aws::String& value) { SetVPC(value); return *this;}

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithVPC(Aws::String&& value) { SetVPC(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithVPC(const char* value) { SetVPC(value); return *this;}


    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline const Aws::String& GetTargetViolationReason() const{ return m_targetViolationReason; }

    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline bool TargetViolationReasonHasBeenSet() const { return m_targetViolationReasonHasBeenSet; }

    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline void SetTargetViolationReason(const Aws::String& value) { m_targetViolationReasonHasBeenSet = true; m_targetViolationReason = value; }

    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline void SetTargetViolationReason(Aws::String&& value) { m_targetViolationReasonHasBeenSet = true; m_targetViolationReason = std::move(value); }

    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline void SetTargetViolationReason(const char* value) { m_targetViolationReasonHasBeenSet = true; m_targetViolationReason.assign(value); }

    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithTargetViolationReason(const Aws::String& value) { SetTargetViolationReason(value); return *this;}

    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithTargetViolationReason(Aws::String&& value) { SetTargetViolationReason(std::move(value)); return *this;}

    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline NetworkFirewallMissingSubnetViolation& WithTargetViolationReason(const char* value) { SetTargetViolationReason(value); return *this;}

  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::String m_vPC;
    bool m_vPCHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_targetViolationReason;
    bool m_targetViolationReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
