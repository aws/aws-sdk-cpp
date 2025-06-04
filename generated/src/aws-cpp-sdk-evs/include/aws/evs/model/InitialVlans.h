/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/InitialVlanInfo.h>
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
   * <p>The initial VLAN subnets for the environment. You must specify a
   * non-overlapping CIDR block for each VLAN subnet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/InitialVlans">AWS
   * API Reference</a></p>
   */
  class InitialVlans
  {
  public:
    AWS_EVS_API InitialVlans() = default;
    AWS_EVS_API InitialVlans(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API InitialVlans& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The VMkernel management VLAN subnet. This VLAN subnet carries traffic for
     * managing ESXi hosts and communicating with VMware vCenter Server.</p>
     */
    inline const InitialVlanInfo& GetVmkManagement() const { return m_vmkManagement; }
    inline bool VmkManagementHasBeenSet() const { return m_vmkManagementHasBeenSet; }
    template<typename VmkManagementT = InitialVlanInfo>
    void SetVmkManagement(VmkManagementT&& value) { m_vmkManagementHasBeenSet = true; m_vmkManagement = std::forward<VmkManagementT>(value); }
    template<typename VmkManagementT = InitialVlanInfo>
    InitialVlans& WithVmkManagement(VmkManagementT&& value) { SetVmkManagement(std::forward<VmkManagementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VM management VLAN subnet. This VLAN subnet carries traffic for vSphere
     * virtual machines.</p>
     */
    inline const InitialVlanInfo& GetVmManagement() const { return m_vmManagement; }
    inline bool VmManagementHasBeenSet() const { return m_vmManagementHasBeenSet; }
    template<typename VmManagementT = InitialVlanInfo>
    void SetVmManagement(VmManagementT&& value) { m_vmManagementHasBeenSet = true; m_vmManagement = std::forward<VmManagementT>(value); }
    template<typename VmManagementT = InitialVlanInfo>
    InitialVlans& WithVmManagement(VmManagementT&& value) { SetVmManagement(std::forward<VmManagementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The vMotion VLAN subnet. This VLAN subnet carries traffic for vSphere
     * vMotion.</p>
     */
    inline const InitialVlanInfo& GetVMotion() const { return m_vMotion; }
    inline bool VMotionHasBeenSet() const { return m_vMotionHasBeenSet; }
    template<typename VMotionT = InitialVlanInfo>
    void SetVMotion(VMotionT&& value) { m_vMotionHasBeenSet = true; m_vMotion = std::forward<VMotionT>(value); }
    template<typename VMotionT = InitialVlanInfo>
    InitialVlans& WithVMotion(VMotionT&& value) { SetVMotion(std::forward<VMotionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The vSAN VLAN subnet. This VLAN subnet carries the communication between
     * ESXi hosts to implement a vSAN shared storage pool.</p>
     */
    inline const InitialVlanInfo& GetVSan() const { return m_vSan; }
    inline bool VSanHasBeenSet() const { return m_vSanHasBeenSet; }
    template<typename VSanT = InitialVlanInfo>
    void SetVSan(VSanT&& value) { m_vSanHasBeenSet = true; m_vSan = std::forward<VSanT>(value); }
    template<typename VSanT = InitialVlanInfo>
    InitialVlans& WithVSan(VSanT&& value) { SetVSan(std::forward<VSanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VTEP VLAN subnet. This VLAN subnet handles internal network traffic
     * between virtual machines within a VCF instance.</p>
     */
    inline const InitialVlanInfo& GetVTep() const { return m_vTep; }
    inline bool VTepHasBeenSet() const { return m_vTepHasBeenSet; }
    template<typename VTepT = InitialVlanInfo>
    void SetVTep(VTepT&& value) { m_vTepHasBeenSet = true; m_vTep = std::forward<VTepT>(value); }
    template<typename VTepT = InitialVlanInfo>
    InitialVlans& WithVTep(VTepT&& value) { SetVTep(std::forward<VTepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edge VTEP VLAN subnet. This VLAN subnet manages traffic flowing between
     * the internal network and external networks, including internet access and other
     * site connections.</p>
     */
    inline const InitialVlanInfo& GetEdgeVTep() const { return m_edgeVTep; }
    inline bool EdgeVTepHasBeenSet() const { return m_edgeVTepHasBeenSet; }
    template<typename EdgeVTepT = InitialVlanInfo>
    void SetEdgeVTep(EdgeVTepT&& value) { m_edgeVTepHasBeenSet = true; m_edgeVTep = std::forward<EdgeVTepT>(value); }
    template<typename EdgeVTepT = InitialVlanInfo>
    InitialVlans& WithEdgeVTep(EdgeVTepT&& value) { SetEdgeVTep(std::forward<EdgeVTepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The NSX uplink VLAN subnet. This VLAN subnet allows connectivity to the NSX
     * overlay network.</p>
     */
    inline const InitialVlanInfo& GetNsxUplink() const { return m_nsxUplink; }
    inline bool NsxUplinkHasBeenSet() const { return m_nsxUplinkHasBeenSet; }
    template<typename NsxUplinkT = InitialVlanInfo>
    void SetNsxUplink(NsxUplinkT&& value) { m_nsxUplinkHasBeenSet = true; m_nsxUplink = std::forward<NsxUplinkT>(value); }
    template<typename NsxUplinkT = InitialVlanInfo>
    InitialVlans& WithNsxUplink(NsxUplinkT&& value) { SetNsxUplink(std::forward<NsxUplinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HCX VLAN subnet. This VLAN subnet allows the HCX Interconnnect (IX) and
     * HCX Network Extension (NE) to reach their peers and enable HCX Service Mesh
     * creation.</p>
     */
    inline const InitialVlanInfo& GetHcx() const { return m_hcx; }
    inline bool HcxHasBeenSet() const { return m_hcxHasBeenSet; }
    template<typename HcxT = InitialVlanInfo>
    void SetHcx(HcxT&& value) { m_hcxHasBeenSet = true; m_hcx = std::forward<HcxT>(value); }
    template<typename HcxT = InitialVlanInfo>
    InitialVlans& WithHcx(HcxT&& value) { SetHcx(std::forward<HcxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An additional VLAN subnet that can be used to extend VCF capabilities once
     * configured. For example, you can configure an expansion VLAN subnet to use NSX
     * Federation for centralized management and synchronization of multiple NSX
     * deployments across different locations.</p>
     */
    inline const InitialVlanInfo& GetExpansionVlan1() const { return m_expansionVlan1; }
    inline bool ExpansionVlan1HasBeenSet() const { return m_expansionVlan1HasBeenSet; }
    template<typename ExpansionVlan1T = InitialVlanInfo>
    void SetExpansionVlan1(ExpansionVlan1T&& value) { m_expansionVlan1HasBeenSet = true; m_expansionVlan1 = std::forward<ExpansionVlan1T>(value); }
    template<typename ExpansionVlan1T = InitialVlanInfo>
    InitialVlans& WithExpansionVlan1(ExpansionVlan1T&& value) { SetExpansionVlan1(std::forward<ExpansionVlan1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An additional VLAN subnet that can be used to extend VCF capabilities once
     * configured. For example, you can configure an expansion VLAN subnet to use NSX
     * Federation for centralized management and synchronization of multiple NSX
     * deployments across different locations.</p>
     */
    inline const InitialVlanInfo& GetExpansionVlan2() const { return m_expansionVlan2; }
    inline bool ExpansionVlan2HasBeenSet() const { return m_expansionVlan2HasBeenSet; }
    template<typename ExpansionVlan2T = InitialVlanInfo>
    void SetExpansionVlan2(ExpansionVlan2T&& value) { m_expansionVlan2HasBeenSet = true; m_expansionVlan2 = std::forward<ExpansionVlan2T>(value); }
    template<typename ExpansionVlan2T = InitialVlanInfo>
    InitialVlans& WithExpansionVlan2(ExpansionVlan2T&& value) { SetExpansionVlan2(std::forward<ExpansionVlan2T>(value)); return *this;}
    ///@}
  private:

    InitialVlanInfo m_vmkManagement;
    bool m_vmkManagementHasBeenSet = false;

    InitialVlanInfo m_vmManagement;
    bool m_vmManagementHasBeenSet = false;

    InitialVlanInfo m_vMotion;
    bool m_vMotionHasBeenSet = false;

    InitialVlanInfo m_vSan;
    bool m_vSanHasBeenSet = false;

    InitialVlanInfo m_vTep;
    bool m_vTepHasBeenSet = false;

    InitialVlanInfo m_edgeVTep;
    bool m_edgeVTepHasBeenSet = false;

    InitialVlanInfo m_nsxUplink;
    bool m_nsxUplinkHasBeenSet = false;

    InitialVlanInfo m_hcx;
    bool m_hcxHasBeenSet = false;

    InitialVlanInfo m_expansionVlan1;
    bool m_expansionVlan1HasBeenSet = false;

    InitialVlanInfo m_expansionVlan2;
    bool m_expansionVlan2HasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
