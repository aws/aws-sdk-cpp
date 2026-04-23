/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API DomainController
  {
  public:
    DomainController();
    DomainController(Aws::Utils::Json::JsonView jsonValue);
    DomainController& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline DomainController& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline DomainController& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory where the domain controller resides.</p>
     */
    inline DomainController& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline const Aws::String& GetDomainControllerId() const{ return m_domainControllerId; }

    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline bool DomainControllerIdHasBeenSet() const { return m_domainControllerIdHasBeenSet; }

    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline void SetDomainControllerId(const Aws::String& value) { m_domainControllerIdHasBeenSet = true; m_domainControllerId = value; }

    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline void SetDomainControllerId(Aws::String&& value) { m_domainControllerIdHasBeenSet = true; m_domainControllerId = std::move(value); }

    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline void SetDomainControllerId(const char* value) { m_domainControllerIdHasBeenSet = true; m_domainControllerId.assign(value); }

    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline DomainController& WithDomainControllerId(const Aws::String& value) { SetDomainControllerId(value); return *this;}

    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline DomainController& WithDomainControllerId(Aws::String&& value) { SetDomainControllerId(std::move(value)); return *this;}

    /**
     * <p>Identifies a specific domain controller in the directory.</p>
     */
    inline DomainController& WithDomainControllerId(const char* value) { SetDomainControllerId(value); return *this;}


    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline const Aws::String& GetDnsIpAddr() const{ return m_dnsIpAddr; }

    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline bool DnsIpAddrHasBeenSet() const { return m_dnsIpAddrHasBeenSet; }

    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline void SetDnsIpAddr(const Aws::String& value) { m_dnsIpAddrHasBeenSet = true; m_dnsIpAddr = value; }

    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline void SetDnsIpAddr(Aws::String&& value) { m_dnsIpAddrHasBeenSet = true; m_dnsIpAddr = std::move(value); }

    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline void SetDnsIpAddr(const char* value) { m_dnsIpAddrHasBeenSet = true; m_dnsIpAddr.assign(value); }

    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline DomainController& WithDnsIpAddr(const Aws::String& value) { SetDnsIpAddr(value); return *this;}

    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline DomainController& WithDnsIpAddr(Aws::String&& value) { SetDnsIpAddr(std::move(value)); return *this;}

    /**
     * <p>The IP address of the domain controller.</p>
     */
    inline DomainController& WithDnsIpAddr(const char* value) { SetDnsIpAddr(value); return *this;}


    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline DomainController& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline DomainController& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC that contains the domain controller.</p>
     */
    inline DomainController& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline DomainController& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline DomainController& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the subnet in the VPC that contains the domain controller.</p>
     */
    inline DomainController& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline DomainController& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline DomainController& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where the domain controller is located.</p>
     */
    inline DomainController& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The status of the domain controller.</p>
     */
    inline const DomainControllerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the domain controller.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the domain controller.</p>
     */
    inline void SetStatus(const DomainControllerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the domain controller.</p>
     */
    inline void SetStatus(DomainControllerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the domain controller.</p>
     */
    inline DomainController& WithStatus(const DomainControllerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the domain controller.</p>
     */
    inline DomainController& WithStatus(DomainControllerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the domain controller state.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A description of the domain controller state.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A description of the domain controller state.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A description of the domain controller state.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A description of the domain controller state.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A description of the domain controller state.</p>
     */
    inline DomainController& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A description of the domain controller state.</p>
     */
    inline DomainController& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A description of the domain controller state.</p>
     */
    inline DomainController& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Specifies when the domain controller was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }

    /**
     * <p>Specifies when the domain controller was created.</p>
     */
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }

    /**
     * <p>Specifies when the domain controller was created.</p>
     */
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }

    /**
     * <p>Specifies when the domain controller was created.</p>
     */
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }

    /**
     * <p>Specifies when the domain controller was created.</p>
     */
    inline DomainController& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}

    /**
     * <p>Specifies when the domain controller was created.</p>
     */
    inline DomainController& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusLastUpdatedDateTime() const{ return m_statusLastUpdatedDateTime; }

    /**
     * <p>The date and time that the status was last updated.</p>
     */
    inline bool StatusLastUpdatedDateTimeHasBeenSet() const { return m_statusLastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the status was last updated.</p>
     */
    inline void SetStatusLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_statusLastUpdatedDateTimeHasBeenSet = true; m_statusLastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the status was last updated.</p>
     */
    inline void SetStatusLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_statusLastUpdatedDateTimeHasBeenSet = true; m_statusLastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the status was last updated.</p>
     */
    inline DomainController& WithStatusLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetStatusLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the status was last updated.</p>
     */
    inline DomainController& WithStatusLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetStatusLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_domainControllerId;
    bool m_domainControllerIdHasBeenSet;

    Aws::String m_dnsIpAddr;
    bool m_dnsIpAddrHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    DomainControllerStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet;

    Aws::Utils::DateTime m_statusLastUpdatedDateTime;
    bool m_statusLastUpdatedDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
