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
    AWS_FMS_API NetworkFirewallMissingExpectedRTViolation();
    AWS_FMS_API NetworkFirewallMissingExpectedRTViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkFirewallMissingExpectedRTViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline NetworkFirewallMissingExpectedRTViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Firewall or VPC resource that's in violation.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}


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
    inline NetworkFirewallMissingExpectedRTViolation& WithVPC(const Aws::String& value) { SetVPC(value); return *this;}

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithVPC(Aws::String&& value) { SetVPC(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the VPC associated with a violating subnet.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithVPC(const char* value) { SetVPC(value); return *this;}


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
    inline NetworkFirewallMissingExpectedRTViolation& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of a violating subnet. </p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline const Aws::String& GetCurrentRouteTable() const{ return m_currentRouteTable; }

    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline bool CurrentRouteTableHasBeenSet() const { return m_currentRouteTableHasBeenSet; }

    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline void SetCurrentRouteTable(const Aws::String& value) { m_currentRouteTableHasBeenSet = true; m_currentRouteTable = value; }

    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline void SetCurrentRouteTable(Aws::String&& value) { m_currentRouteTableHasBeenSet = true; m_currentRouteTable = std::move(value); }

    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline void SetCurrentRouteTable(const char* value) { m_currentRouteTableHasBeenSet = true; m_currentRouteTable.assign(value); }

    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithCurrentRouteTable(const Aws::String& value) { SetCurrentRouteTable(value); return *this;}

    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithCurrentRouteTable(Aws::String&& value) { SetCurrentRouteTable(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithCurrentRouteTable(const char* value) { SetCurrentRouteTable(value); return *this;}


    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline const Aws::String& GetExpectedRouteTable() const{ return m_expectedRouteTable; }

    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline bool ExpectedRouteTableHasBeenSet() const { return m_expectedRouteTableHasBeenSet; }

    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline void SetExpectedRouteTable(const Aws::String& value) { m_expectedRouteTableHasBeenSet = true; m_expectedRouteTable = value; }

    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline void SetExpectedRouteTable(Aws::String&& value) { m_expectedRouteTableHasBeenSet = true; m_expectedRouteTable = std::move(value); }

    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline void SetExpectedRouteTable(const char* value) { m_expectedRouteTableHasBeenSet = true; m_expectedRouteTable.assign(value); }

    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithExpectedRouteTable(const Aws::String& value) { SetExpectedRouteTable(value); return *this;}

    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithExpectedRouteTable(Aws::String&& value) { SetExpectedRouteTable(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline NetworkFirewallMissingExpectedRTViolation& WithExpectedRouteTable(const char* value) { SetExpectedRouteTable(value); return *this;}

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
