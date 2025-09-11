/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/evs/model/VlanState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/model/EipAssociation.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>The VLANs that Amazon EVS creates during environment creation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/Vlan">AWS API
   * Reference</a></p>
   */
  class Vlan
  {
  public:
    AWS_EVS_API Vlan() = default;
    AWS_EVS_API Vlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Vlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the VLAN.</p>
     */
    inline int GetVlanId() const { return m_vlanId; }
    inline bool VlanIdHasBeenSet() const { return m_vlanIdHasBeenSet; }
    inline void SetVlanId(int value) { m_vlanIdHasBeenSet = true; m_vlanId = value; }
    inline Vlan& WithVlanId(int value) { SetVlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR block of the VLAN. Amazon EVS VLAN subnets have a minimum CIDR block
     * size of /28 and a maximum size of /24.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    Vlan& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability zone of the VLAN.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Vlan& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VMware VCF traffic type that is carried over the VLAN. For example, a
     * VLAN with a <code>functionName</code> of <code>hcx</code> is being used to carry
     * VMware HCX traffic.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    Vlan& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID of the VLAN subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    Vlan& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the VLAN was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Vlan& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the VLAN was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    Vlan& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of the VLAN.</p>
     */
    inline VlanState GetVlanState() const { return m_vlanState; }
    inline bool VlanStateHasBeenSet() const { return m_vlanStateHasBeenSet; }
    inline void SetVlanState(VlanState value) { m_vlanStateHasBeenSet = true; m_vlanState = value; }
    inline Vlan& WithVlanState(VlanState value) { SetVlanState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state details of the VLAN.</p>
     */
    inline const Aws::String& GetStateDetails() const { return m_stateDetails; }
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
    template<typename StateDetailsT = Aws::String>
    void SetStateDetails(StateDetailsT&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::forward<StateDetailsT>(value); }
    template<typename StateDetailsT = Aws::String>
    Vlan& WithStateDetails(StateDetailsT&& value) { SetStateDetails(std::forward<StateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Elastic IP address associations.</p>
     */
    inline const Aws::Vector<EipAssociation>& GetEipAssociations() const { return m_eipAssociations; }
    inline bool EipAssociationsHasBeenSet() const { return m_eipAssociationsHasBeenSet; }
    template<typename EipAssociationsT = Aws::Vector<EipAssociation>>
    void SetEipAssociations(EipAssociationsT&& value) { m_eipAssociationsHasBeenSet = true; m_eipAssociations = std::forward<EipAssociationsT>(value); }
    template<typename EipAssociationsT = Aws::Vector<EipAssociation>>
    Vlan& WithEipAssociations(EipAssociationsT&& value) { SetEipAssociations(std::forward<EipAssociationsT>(value)); return *this;}
    template<typename EipAssociationsT = EipAssociation>
    Vlan& AddEipAssociations(EipAssociationsT&& value) { m_eipAssociationsHasBeenSet = true; m_eipAssociations.emplace_back(std::forward<EipAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines if the VLAN that Amazon EVS provisions is public or private.</p>
     */
    inline bool GetIsPublic() const { return m_isPublic; }
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }
    inline Vlan& WithIsPublic(bool value) { SetIsPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID for a network access control list.</p>
     */
    inline const Aws::String& GetNetworkAclId() const { return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    template<typename NetworkAclIdT = Aws::String>
    void SetNetworkAclId(NetworkAclIdT&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::forward<NetworkAclIdT>(value); }
    template<typename NetworkAclIdT = Aws::String>
    Vlan& WithNetworkAclId(NetworkAclIdT&& value) { SetNetworkAclId(std::forward<NetworkAclIdT>(value)); return *this;}
    ///@}
  private:

    int m_vlanId{0};
    bool m_vlanIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    VlanState m_vlanState{VlanState::NOT_SET};
    bool m_vlanStateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::Vector<EipAssociation> m_eipAssociations;
    bool m_eipAssociationsHasBeenSet = false;

    bool m_isPublic{false};
    bool m_isPublicHasBeenSet = false;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
