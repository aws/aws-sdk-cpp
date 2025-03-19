/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DomainControllerStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about the domain controllers for a specified
   * directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DomainController">AWS
   * API Reference</a></p>
   */
  class DomainController
  {
  public:
    AWS_DIRECTORYSERVICE_API DomainController() = default;
    AWS_DIRECTORYSERVICE_API DomainController(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API DomainController& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DomainController& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline const Aws::String& GetDomainControllerId() const { return m_domainControllerId; }
    inline bool DomainControllerIdHasBeenSet() const { return m_domainControllerIdHasBeenSet; }
    template<typename DomainControllerIdT = Aws::String>
    void SetDomainControllerId(DomainControllerIdT&& value) { m_domainControllerIdHasBeenSet = true; m_domainControllerId = std::forward<DomainControllerIdT>(value); }
    template<typename DomainControllerIdT = Aws::String>
    DomainController& WithDomainControllerId(DomainControllerIdT&& value) { SetDomainControllerId(std::forward<DomainControllerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline const Aws::String& GetDnsIpAddr() const { return m_dnsIpAddr; }
    inline bool DnsIpAddrHasBeenSet() const { return m_dnsIpAddrHasBeenSet; }
    template<typename DnsIpAddrT = Aws::String>
    void SetDnsIpAddr(DnsIpAddrT&& value) { m_dnsIpAddrHasBeenSet = true; m_dnsIpAddr = std::forward<DnsIpAddrT>(value); }
    template<typename DnsIpAddrT = Aws::String>
    DomainController& WithDnsIpAddr(DnsIpAddrT&& value) { SetDnsIpAddr(std::forward<DnsIpAddrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DomainController& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    DomainController& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DomainController& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain controller.</p>
     */
    inline DomainControllerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DomainControllerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DomainController& WithStatus(DomainControllerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the domain controller state.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DomainController& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies when the domain controller was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const { return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    void SetLaunchTime(LaunchTimeT&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::forward<LaunchTimeT>(value); }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    DomainController& WithLaunchTime(LaunchTimeT&& value) { SetLaunchTime(std::forward<LaunchTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusLastUpdatedDateTime() const { return m_statusLastUpdatedDateTime; }
    inline bool StatusLastUpdatedDateTimeHasBeenSet() const { return m_statusLastUpdatedDateTimeHasBeenSet; }
    template<typename StatusLastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetStatusLastUpdatedDateTime(StatusLastUpdatedDateTimeT&& value) { m_statusLastUpdatedDateTimeHasBeenSet = true; m_statusLastUpdatedDateTime = std::forward<StatusLastUpdatedDateTimeT>(value); }
    template<typename StatusLastUpdatedDateTimeT = Aws::Utils::DateTime>
    DomainController& WithStatusLastUpdatedDateTime(StatusLastUpdatedDateTimeT&& value) { SetStatusLastUpdatedDateTime(std::forward<StatusLastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_domainControllerId;
    bool m_domainControllerIdHasBeenSet = false;

    Aws::String m_dnsIpAddr;
    bool m_dnsIpAddrHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    DomainControllerStatus m_status{DomainControllerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime{};
    bool m_launchTimeHasBeenSet = false;

    Aws::Utils::DateTime m_statusLastUpdatedDateTime{};
    bool m_statusLastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
