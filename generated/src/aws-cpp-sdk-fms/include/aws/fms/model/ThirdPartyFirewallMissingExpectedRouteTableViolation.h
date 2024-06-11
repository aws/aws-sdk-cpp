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
   * <p>The violation details for a third-party firewall that's not associated with
   * an Firewall Manager managed route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ThirdPartyFirewallMissingExpectedRouteTableViolation">AWS
   * API Reference</a></p>
   */
  class ThirdPartyFirewallMissingExpectedRouteTableViolation
  {
  public:
    AWS_FMS_API ThirdPartyFirewallMissingExpectedRouteTableViolation();
    AWS_FMS_API ThirdPartyFirewallMissingExpectedRouteTableViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ThirdPartyFirewallMissingExpectedRouteTableViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithViolationTarget(const Aws::String& value) { SetViolationTarget(value); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithViolationTarget(Aws::String&& value) { SetViolationTarget(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithViolationTarget(const char* value) { SetViolationTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the VPC associated with a fireawll subnet that's causing
     * the violation.</p>
     */
    inline const Aws::String& GetVPC() const{ return m_vPC; }
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }
    inline void SetVPC(const Aws::String& value) { m_vPCHasBeenSet = true; m_vPC = value; }
    inline void SetVPC(Aws::String&& value) { m_vPCHasBeenSet = true; m_vPC = std::move(value); }
    inline void SetVPC(const char* value) { m_vPCHasBeenSet = true; m_vPC.assign(value); }
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithVPC(const Aws::String& value) { SetVPC(value); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithVPC(Aws::String&& value) { SetVPC(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithVPC(const char* value) { SetVPC(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the firewall subnet that's causing the
     * violation.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the current route table that's associated with the subnet,
     * if one is available.</p>
     */
    inline const Aws::String& GetCurrentRouteTable() const{ return m_currentRouteTable; }
    inline bool CurrentRouteTableHasBeenSet() const { return m_currentRouteTableHasBeenSet; }
    inline void SetCurrentRouteTable(const Aws::String& value) { m_currentRouteTableHasBeenSet = true; m_currentRouteTable = value; }
    inline void SetCurrentRouteTable(Aws::String&& value) { m_currentRouteTableHasBeenSet = true; m_currentRouteTable = std::move(value); }
    inline void SetCurrentRouteTable(const char* value) { m_currentRouteTableHasBeenSet = true; m_currentRouteTable.assign(value); }
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithCurrentRouteTable(const Aws::String& value) { SetCurrentRouteTable(value); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithCurrentRouteTable(Aws::String&& value) { SetCurrentRouteTable(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithCurrentRouteTable(const char* value) { SetCurrentRouteTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the route table that should be associated with the
     * subnet.</p>
     */
    inline const Aws::String& GetExpectedRouteTable() const{ return m_expectedRouteTable; }
    inline bool ExpectedRouteTableHasBeenSet() const { return m_expectedRouteTableHasBeenSet; }
    inline void SetExpectedRouteTable(const Aws::String& value) { m_expectedRouteTableHasBeenSet = true; m_expectedRouteTable = value; }
    inline void SetExpectedRouteTable(Aws::String&& value) { m_expectedRouteTableHasBeenSet = true; m_expectedRouteTable = std::move(value); }
    inline void SetExpectedRouteTable(const char* value) { m_expectedRouteTableHasBeenSet = true; m_expectedRouteTable.assign(value); }
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithExpectedRouteTable(const Aws::String& value) { SetExpectedRouteTable(value); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithExpectedRouteTable(Aws::String&& value) { SetExpectedRouteTable(std::move(value)); return *this;}
    inline ThirdPartyFirewallMissingExpectedRouteTableViolation& WithExpectedRouteTable(const char* value) { SetExpectedRouteTable(value); return *this;}
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
