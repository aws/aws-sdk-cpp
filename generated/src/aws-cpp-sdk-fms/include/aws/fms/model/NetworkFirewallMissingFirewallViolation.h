﻿/**
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
   * <p>Violation detail for Network Firewall for a subnet that doesn't have a
   * Firewall Manager managed firewall in its VPC. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallMissingFirewallViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallMissingFirewallViolation
  {
  public:
    AWS_FMS_API NetworkFirewallMissingFirewallViolation() = default;
    AWS_FMS_API NetworkFirewallMissingFirewallViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallMissingFirewallViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline const Aws::String& GetViolationTarget() const { return m_violationTarget; }
    inline bool ViolationTargetHasBeenSet() const { return m_violationTargetHasBeenSet; }
    template<typename ViolationTargetT = Aws::String>
    void SetViolationTarget(ViolationTargetT&& value) { m_violationTargetHasBeenSet = true; m_violationTarget = std::forward<ViolationTargetT>(value); }
    template<typename ViolationTargetT = Aws::String>
    NetworkFirewallMissingFirewallViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline const Aws::String& GetVPC() const { return m_vPC; }
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }
    template<typename VPCT = Aws::String>
    void SetVPC(VPCT&& value) { m_vPCHasBeenSet = true; m_vPC = std::forward<VPCT>(value); }
    template<typename VPCT = Aws::String>
    NetworkFirewallMissingFirewallViolation& WithVPC(VPCT&& value) { SetVPC(std::forward<VPCT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    NetworkFirewallMissingFirewallViolation& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the resource has this violation, if one is available. </p>
     */
    inline const Aws::String& GetTargetViolationReason() const { return m_targetViolationReason; }
    inline bool TargetViolationReasonHasBeenSet() const { return m_targetViolationReasonHasBeenSet; }
    template<typename TargetViolationReasonT = Aws::String>
    void SetTargetViolationReason(TargetViolationReasonT&& value) { m_targetViolationReasonHasBeenSet = true; m_targetViolationReason = std::forward<TargetViolationReasonT>(value); }
    template<typename TargetViolationReasonT = Aws::String>
    NetworkFirewallMissingFirewallViolation& WithTargetViolationReason(TargetViolationReasonT&& value) { SetTargetViolationReason(std::forward<TargetViolationReasonT>(value)); return *this;}
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
