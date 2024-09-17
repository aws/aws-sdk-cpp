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
   * <p>The violation details for a third-party firewall for an Availability Zone
   * that's missing the Firewall Manager managed subnet.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ThirdPartyFirewallMissingSubnetViolation">AWS
   * API Reference</a></p>
   */
  class ThirdPartyFirewallMissingSubnetViolation
  {
  public:
    AWS_FMS_API ThirdPartyFirewallMissingSubnetViolation();
    AWS_FMS_API ThirdPartyFirewallMissingSubnetViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ThirdPartyFirewallMissingSubnetViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the third-party firewall or VPC resource that's causing the
     * violation.</p>
     */
    inline const Aws::String& GetViolationTarget() const{ return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    inline void SetViolationTarget(const Aws::String& value) { m_violationTargetHasBeenSet = true; m_violationTarget = value; }
    inline void SetViolationTarget(Aws::String&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::move(value); }
    inline void SetViolationTarget(const char* value) { m_violationTargetHasBeenSet = true; m_violationTarget.assign(value); }
    inline ThirdPartyFirewallMissingSubnetViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}
    inline ThirdPartyFirewallMissingSubnetViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingSubnetViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the VPC associated with a subnet that's causing the
     * violation.</p>
     */
    inline const Aws::String& GetVPC() const{ return m_vPC; }
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }
    inline void SetVPC(const Aws::String& value) { m_vPCHasBeenSet = true; m_vPC = value; }
    inline void SetVPC(Aws::String&& value) { m_vPCHasBeenSet = true; m_vPC = std::move(value); }
    inline void SetVPC(const char* value) { m_vPCHasBeenSet = true; m_vPC.assign(value); }
    inline ThirdPartyFirewallMissingSubnetViolation& WithVPC(const Aws::String& value) { SetVPC(value); return *this;}
    inline ThirdPartyFirewallMissingSubnetViolation& WithVPC(Aws::String&& value) { SetVPC(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingSubnetViolation& WithVPC(const char* value) { SetVPC(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of a subnet that's causing the violation.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ThirdPartyFirewallMissingSubnetViolation& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ThirdPartyFirewallMissingSubnetViolation& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingSubnetViolation& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the resource is causing the violation, if a reason is
     * available.</p>
     */
    inline const Aws::String& GetTargetViolationReason() const{ return m_targetViolationReason; }
    inline bool TargetViolationReasonHasBeenSet() const { return m_targetViolationReasonHasBeenSet; }
    inline void SetTargetViolationReason(const Aws::String& value) { m_targetViolationReasonHasBeenSet = true; m_targetViolationReason = value; }
    inline void SetTargetViolationReason(Aws::String&& value) { m_targetViolationReasonHasBeenSet = true; m_targetViolationReason = std::move(value); }
    inline void SetTargetViolationReason(const char* value) { m_targetViolationReasonHasBeenSet = true; m_targetViolationReason.assign(value); }
    inline ThirdPartyFirewallMissingSubnetViolation& WithTargetViolationReason(const Aws::String& value) { SetTargetViolationReason(value); return *this;}
    inline ThirdPartyFirewallMissingSubnetViolation& WithTargetViolationReason(Aws::String&& value) { SetTargetViolationReason(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingSubnetViolation& WithTargetViolationReason(const char* value) { SetTargetViolationReason(value); return *this;}
    ///@}
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
