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
   * <p>Violation detail for Network Firewall for a subnet that's not associated to
   * the expected Firewall Manager managed route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkFirewallMissingExpectedRTViolation">AWS
   * API Reference</a></p>
   */
  class NetworkFirewallMissingExpectedRTViolation
  {
  public:
    AWS_FMS_API NetworkFirewallMissingExpectedRTViolation() = default;
    AWS_FMS_API NetworkFirewallMissingExpectedRTViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallMissingExpectedRTViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    NetworkFirewallMissingExpectedRTViolation& WithViolationTarget(ViolationTargetT&& value) { SetViolationTarget(std::forward<ViolationTargetT>(value)); return *this;}
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
    NetworkFirewallMissingExpectedRTViolation& WithVPC(VPCT&& value) { SetVPC(std::forward<VPCT>(value)); return *this;}
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
    NetworkFirewallMissingExpectedRTViolation& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline const Aws::String& GetCurrentRouteTable() const { return m_currentRouteTable; }
    inline bool CurrentRouteTableHasBeenSet() const { return m_currentRouteTableHasBeenSet; }
    template<typename CurrentRouteTableT = Aws::String>
    void SetCurrentRouteTable(CurrentRouteTableT&& value) { m_currentRouteTableHasBeenSet = true; m_currentRouteTable = std::forward<CurrentRouteTableT>(value); }
    template<typename CurrentRouteTableT = Aws::String>
    NetworkFirewallMissingExpectedRTViolation& WithCurrentRouteTable(CurrentRouteTableT&& value) { SetCurrentRouteTable(std::forward<CurrentRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline const Aws::String& GetExpectedRouteTable() const { return m_expectedRouteTable; }
    inline bool ExpectedRouteTableHasBeenSet() const { return m_expectedRouteTableHasBeenSet; }
    template<typename ExpectedRouteTableT = Aws::String>
    void SetExpectedRouteTable(ExpectedRouteTableT&& value) { m_expectedRouteTableHasBeenSet = true; m_expectedRouteTable = std::forward<ExpectedRouteTableT>(value); }
    template<typename ExpectedRouteTableT = Aws::String>
    NetworkFirewallMissingExpectedRTViolation& WithExpectedRouteTable(ExpectedRouteTableT&& value) { SetExpectedRouteTable(std::forward<ExpectedRouteTableT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_violationTarget;
    bool m_violationTargetHasBeenSet = false;

    Aws::String m_vPC;
    bool m_vPCHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_currentRouteTable;
    bool m_currentRouteTableHasBeenSet = false;

    Aws::String m_expectedRouteTable;
    bool m_expectedRouteTableHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
