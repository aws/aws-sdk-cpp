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
    AWS_FMS_API InvalidNetworkAclEntriesViolation() = default;
    AWS_FMS_API InvalidNetworkAclEntriesViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API InvalidNetworkAclEntriesViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VPC where the violation was found. </p>
     */
    inline const Aws::String& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = Aws::String>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = Aws::String>
    InvalidNetworkAclEntriesViolation& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet that's associated with the network ACL.</p>
     */
    inline const Aws::String& GetSubnet() const { return m_subnet; }
    inline bool SubnetHasBeenSet() const { return m_subnetHasBeenSet; }
    template<typename SubnetT = Aws::String>
    void SetSubnet(SubnetT&& value) { m_subnetHasBeenSet = true; m_subnet = std::forward<SubnetT>(value); }
    template<typename SubnetT = Aws::String>
    InvalidNetworkAclEntriesViolation& WithSubnet(SubnetT&& value) { SetSubnet(std::forward<SubnetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the network ACL is in use. </p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const { return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    template<typename SubnetAvailabilityZoneT = Aws::String>
    void SetSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::forward<SubnetAvailabilityZoneT>(value); }
    template<typename SubnetAvailabilityZoneT = Aws::String>
    InvalidNetworkAclEntriesViolation& WithSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { SetSubnetAvailabilityZone(std::forward<SubnetAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network ACL containing the entry violations. </p>
     */
    inline const Aws::String& GetCurrentAssociatedNetworkAcl() const { return m_currentAssociatedNetworkAcl; }
    inline bool CurrentAssociatedNetworkAclHasBeenSet() const { return m_currentAssociatedNetworkAclHasBeenSet; }
    template<typename CurrentAssociatedNetworkAclT = Aws::String>
    void SetCurrentAssociatedNetworkAcl(CurrentAssociatedNetworkAclT&& value) { m_currentAssociatedNetworkAclHasBeenSet = true; m_currentAssociatedNetworkAcl = std::forward<CurrentAssociatedNetworkAclT>(value); }
    template<typename CurrentAssociatedNetworkAclT = Aws::String>
    InvalidNetworkAclEntriesViolation& WithCurrentAssociatedNetworkAcl(CurrentAssociatedNetworkAclT&& value) { SetCurrentAssociatedNetworkAcl(std::forward<CurrentAssociatedNetworkAclT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the entry violations in the network ACL. </p>
     */
    inline const Aws::Vector<EntryViolation>& GetEntryViolations() const { return m_entryViolations; }
    inline bool EntryViolationsHasBeenSet() const { return m_entryViolationsHasBeenSet; }
    template<typename EntryViolationsT = Aws::Vector<EntryViolation>>
    void SetEntryViolations(EntryViolationsT&& value) { m_entryViolationsHasBeenSet = true; m_entryViolations = std::forward<EntryViolationsT>(value); }
    template<typename EntryViolationsT = Aws::Vector<EntryViolation>>
    InvalidNetworkAclEntriesViolation& WithEntryViolations(EntryViolationsT&& value) { SetEntryViolations(std::forward<EntryViolationsT>(value)); return *this;}
    template<typename EntryViolationsT = EntryViolation>
    InvalidNetworkAclEntriesViolation& AddEntryViolations(EntryViolationsT&& value) { m_entryViolationsHasBeenSet = true; m_entryViolations.emplace_back(std::forward<EntryViolationsT>(value)); return *this; }
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
