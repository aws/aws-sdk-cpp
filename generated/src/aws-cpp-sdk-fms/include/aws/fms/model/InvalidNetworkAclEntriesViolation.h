/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/EntryViolation.h>
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
   * <p>Violation detail for the entries in a network ACL resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/InvalidNetworkAclEntriesViolation">AWS
   * API Reference</a></p>
   */
  class InvalidNetworkAclEntriesViolation
  {
  public:
    AWS_FMS_API InvalidNetworkAclEntriesViolation();
    AWS_FMS_API InvalidNetworkAclEntriesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API InvalidNetworkAclEntriesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VPC where the violation was found. </p>
     */
    inline const Aws::String& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const Aws::String& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(Aws::String&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline void SetVpc(const char* value) { m_vpcHasBeenSet = true; m_vpc.assign(value); }
    inline InvalidNetworkAclEntriesViolation& WithVpc(const Aws::String& value) { SetVpc(value); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithVpc(Aws::String&& value) { SetVpc(std::move(value)); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithVpc(const char* value) { SetVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet that's associated with the network ACL.</p>
     */
    inline const Aws::String& GetSubnet() const{ return m_subnet; }
    inline bool SubnetHasBeenSet() const { return m_subnetHasBeenSet; }
    inline void SetSubnet(const Aws::String& value) { m_subnetHasBeenSet = true; m_subnet = value; }
    inline void SetSubnet(Aws::String&& value) { m_subnetHasBeenSet = true; m_subnet = std::move(value); }
    inline void SetSubnet(const char* value) { m_subnetHasBeenSet = true; m_subnet.assign(value); }
    inline InvalidNetworkAclEntriesViolation& WithSubnet(const Aws::String& value) { SetSubnet(value); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithSubnet(Aws::String&& value) { SetSubnet(std::move(value)); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithSubnet(const char* value) { SetSubnet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the network ACL is in use. </p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    inline void SetSubnetAvailabilityZone(const Aws::String& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }
    inline void SetSubnetAvailabilityZone(Aws::String&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }
    inline void SetSubnetAvailabilityZone(const char* value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone.assign(value); }
    inline InvalidNetworkAclEntriesViolation& WithSubnetAvailabilityZone(const Aws::String& value) { SetSubnetAvailabilityZone(value); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithSubnetAvailabilityZone(Aws::String&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithSubnetAvailabilityZone(const char* value) { SetSubnetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network ACL containing the entry violations. </p>
     */
    inline const Aws::String& GetCurrentAssociatedNetworkAcl() const{ return m_currentAssociatedNetworkAcl; }
    inline bool CurrentAssociatedNetworkAclHasBeenSet() const { return m_currentAssociatedNetworkAclHasBeenSet; }
    inline void SetCurrentAssociatedNetworkAcl(const Aws::String& value) { m_currentAssociatedNetworkAclHasBeenSet = true; m_currentAssociatedNetworkAcl = value; }
    inline void SetCurrentAssociatedNetworkAcl(Aws::String&& value) { m_currentAssociatedNetworkAclHasBeenSet = true; m_currentAssociatedNetworkAcl = std::move(value); }
    inline void SetCurrentAssociatedNetworkAcl(const char* value) { m_currentAssociatedNetworkAclHasBeenSet = true; m_currentAssociatedNetworkAcl.assign(value); }
    inline InvalidNetworkAclEntriesViolation& WithCurrentAssociatedNetworkAcl(const Aws::String& value) { SetCurrentAssociatedNetworkAcl(value); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithCurrentAssociatedNetworkAcl(Aws::String&& value) { SetCurrentAssociatedNetworkAcl(std::move(value)); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithCurrentAssociatedNetworkAcl(const char* value) { SetCurrentAssociatedNetworkAcl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the entry violations in the network ACL. </p>
     */
    inline const Aws::Vector<EntryViolation>& GetEntryViolations() const{ return m_entryViolations; }
    inline bool EntryViolationsHasBeenSet() const { return m_entryViolationsHasBeenSet; }
    inline void SetEntryViolations(const Aws::Vector<EntryViolation>& value) { m_entryViolationsHasBeenSet = true; m_entryViolations = value; }
    inline void SetEntryViolations(Aws::Vector<EntryViolation>&& value) { m_entryViolationsHasBeenSet = true; m_entryViolations = std::move(value); }
    inline InvalidNetworkAclEntriesViolation& WithEntryViolations(const Aws::Vector<EntryViolation>& value) { SetEntryViolations(value); return *this;}
    inline InvalidNetworkAclEntriesViolation& WithEntryViolations(Aws::Vector<EntryViolation>&& value) { SetEntryViolations(std::move(value)); return *this;}
    inline InvalidNetworkAclEntriesViolation& AddEntryViolations(const EntryViolation& value) { m_entryViolationsHasBeenSet = true; m_entryViolations.push_back(value); return *this; }
    inline InvalidNetworkAclEntriesViolation& AddEntryViolations(EntryViolation&& value) { m_entryViolationsHasBeenSet = true; m_entryViolations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_vpc;
    bool m_vpcHasBeenSet = false;

    Aws::String m_subnet;
    bool m_subnetHasBeenSet = false;

    Aws::String m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Aws::String m_currentAssociatedNetworkAcl;
    bool m_currentAssociatedNetworkAclHasBeenSet = false;

    Aws::Vector<EntryViolation> m_entryViolations;
    bool m_entryViolationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
