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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/BackupPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsmv2/model/ClusterState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cloudhsmv2/model/Certificates.h>
#include <aws/cloudhsmv2/model/Hsm.h>
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
namespace CloudHSMV2
{
namespace Model
{

  /**
   * <p>Contains information about an AWS CloudHSM cluster.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/Cluster">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSMV2_API Cluster
  {
  public:
    Cluster();
    Cluster(Aws::Utils::Json::JsonView jsonValue);
    Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cluster's backup policy.</p>
     */
    inline const BackupPolicy& GetBackupPolicy() const{ return m_backupPolicy; }

    /**
     * <p>The cluster's backup policy.</p>
     */
    inline bool BackupPolicyHasBeenSet() const { return m_backupPolicyHasBeenSet; }

    /**
     * <p>The cluster's backup policy.</p>
     */
    inline void SetBackupPolicy(const BackupPolicy& value) { m_backupPolicyHasBeenSet = true; m_backupPolicy = value; }

    /**
     * <p>The cluster's backup policy.</p>
     */
    inline void SetBackupPolicy(BackupPolicy&& value) { m_backupPolicyHasBeenSet = true; m_backupPolicy = std::move(value); }

    /**
     * <p>The cluster's backup policy.</p>
     */
    inline Cluster& WithBackupPolicy(const BackupPolicy& value) { SetBackupPolicy(value); return *this;}

    /**
     * <p>The cluster's backup policy.</p>
     */
    inline Cluster& WithBackupPolicy(BackupPolicy&& value) { SetBackupPolicy(std::move(value)); return *this;}


    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline Cluster& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline Cluster& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline Cluster& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline Cluster& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline Cluster& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}


    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline const Aws::Vector<Hsm>& GetHsms() const{ return m_hsms; }

    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline bool HsmsHasBeenSet() const { return m_hsmsHasBeenSet; }

    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline void SetHsms(const Aws::Vector<Hsm>& value) { m_hsmsHasBeenSet = true; m_hsms = value; }

    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline void SetHsms(Aws::Vector<Hsm>&& value) { m_hsmsHasBeenSet = true; m_hsms = std::move(value); }

    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline Cluster& WithHsms(const Aws::Vector<Hsm>& value) { SetHsms(value); return *this;}

    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline Cluster& WithHsms(Aws::Vector<Hsm>&& value) { SetHsms(std::move(value)); return *this;}

    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline Cluster& AddHsms(const Hsm& value) { m_hsmsHasBeenSet = true; m_hsms.push_back(value); return *this; }

    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline Cluster& AddHsms(Hsm&& value) { m_hsmsHasBeenSet = true; m_hsms.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline const Aws::String& GetHsmType() const{ return m_hsmType; }

    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }

    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline void SetHsmType(const Aws::String& value) { m_hsmTypeHasBeenSet = true; m_hsmType = value; }

    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline void SetHsmType(Aws::String&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::move(value); }

    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline void SetHsmType(const char* value) { m_hsmTypeHasBeenSet = true; m_hsmType.assign(value); }

    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline Cluster& WithHsmType(const Aws::String& value) { SetHsmType(value); return *this;}

    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline Cluster& WithHsmType(Aws::String&& value) { SetHsmType(std::move(value)); return *this;}

    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline Cluster& WithHsmType(const char* value) { SetHsmType(value); return *this;}


    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline const Aws::String& GetPreCoPassword() const{ return m_preCoPassword; }

    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline bool PreCoPasswordHasBeenSet() const { return m_preCoPasswordHasBeenSet; }

    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline void SetPreCoPassword(const Aws::String& value) { m_preCoPasswordHasBeenSet = true; m_preCoPassword = value; }

    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline void SetPreCoPassword(Aws::String&& value) { m_preCoPasswordHasBeenSet = true; m_preCoPassword = std::move(value); }

    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline void SetPreCoPassword(const char* value) { m_preCoPasswordHasBeenSet = true; m_preCoPassword.assign(value); }

    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline Cluster& WithPreCoPassword(const Aws::String& value) { SetPreCoPassword(value); return *this;}

    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline Cluster& WithPreCoPassword(Aws::String&& value) { SetPreCoPassword(std::move(value)); return *this;}

    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline Cluster& WithPreCoPassword(const char* value) { SetPreCoPassword(value); return *this;}


    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline const Aws::String& GetSecurityGroup() const{ return m_securityGroup; }

    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline void SetSecurityGroup(const Aws::String& value) { m_securityGroupHasBeenSet = true; m_securityGroup = value; }

    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline void SetSecurityGroup(Aws::String&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline void SetSecurityGroup(const char* value) { m_securityGroupHasBeenSet = true; m_securityGroup.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline Cluster& WithSecurityGroup(const Aws::String& value) { SetSecurityGroup(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline Cluster& WithSecurityGroup(Aws::String&& value) { SetSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline Cluster& WithSecurityGroup(const char* value) { SetSecurityGroup(value); return *this;}


    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline const Aws::String& GetSourceBackupId() const{ return m_sourceBackupId; }

    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline bool SourceBackupIdHasBeenSet() const { return m_sourceBackupIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline void SetSourceBackupId(const Aws::String& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = value; }

    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline void SetSourceBackupId(Aws::String&& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = std::move(value); }

    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline void SetSourceBackupId(const char* value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId.assign(value); }

    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline Cluster& WithSourceBackupId(const Aws::String& value) { SetSourceBackupId(value); return *this;}

    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline Cluster& WithSourceBackupId(Aws::String&& value) { SetSourceBackupId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline Cluster& WithSourceBackupId(const char* value) { SetSourceBackupId(value); return *this;}


    /**
     * <p>The cluster's state.</p>
     */
    inline const ClusterState& GetState() const{ return m_state; }

    /**
     * <p>The cluster's state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The cluster's state.</p>
     */
    inline void SetState(const ClusterState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The cluster's state.</p>
     */
    inline void SetState(ClusterState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The cluster's state.</p>
     */
    inline Cluster& WithState(const ClusterState& value) { SetState(value); return *this;}

    /**
     * <p>The cluster's state.</p>
     */
    inline Cluster& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description of the cluster's state.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline Cluster& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline Cluster& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline Cluster& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}


    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSubnetMapping() const{ return m_subnetMapping; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline bool SubnetMappingHasBeenSet() const { return m_subnetMappingHasBeenSet; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline void SetSubnetMapping(const Aws::Map<Aws::String, Aws::String>& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping = value; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline void SetSubnetMapping(Aws::Map<Aws::String, Aws::String>&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping = std::move(value); }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& WithSubnetMapping(const Aws::Map<Aws::String, Aws::String>& value) { SetSubnetMapping(value); return *this;}

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& WithSubnetMapping(Aws::Map<Aws::String, Aws::String>&& value) { SetSubnetMapping(std::move(value)); return *this;}

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& AddSubnetMapping(const Aws::String& key, const Aws::String& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(key, value); return *this; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& AddSubnetMapping(Aws::String&& key, const Aws::String& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& AddSubnetMapping(const Aws::String& key, Aws::String&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& AddSubnetMapping(Aws::String&& key, Aws::String&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& AddSubnetMapping(const char* key, Aws::String&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& AddSubnetMapping(Aws::String&& key, const char* value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the cluster's subnets and their corresponding Availability
     * Zones.</p>
     */
    inline Cluster& AddSubnetMapping(const char* key, const char* value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(key, value); return *this; }


    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline Cluster& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline Cluster& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline Cluster& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Contains one or more certificates or a certificate signing request (CSR).</p>
     */
    inline const Certificates& GetCertificates() const{ return m_certificates; }

    /**
     * <p>Contains one or more certificates or a certificate signing request (CSR).</p>
     */
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }

    /**
     * <p>Contains one or more certificates or a certificate signing request (CSR).</p>
     */
    inline void SetCertificates(const Certificates& value) { m_certificatesHasBeenSet = true; m_certificates = value; }

    /**
     * <p>Contains one or more certificates or a certificate signing request (CSR).</p>
     */
    inline void SetCertificates(Certificates&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }

    /**
     * <p>Contains one or more certificates or a certificate signing request (CSR).</p>
     */
    inline Cluster& WithCertificates(const Certificates& value) { SetCertificates(value); return *this;}

    /**
     * <p>Contains one or more certificates or a certificate signing request (CSR).</p>
     */
    inline Cluster& WithCertificates(Certificates&& value) { SetCertificates(std::move(value)); return *this;}

  private:

    BackupPolicy m_backupPolicy;
    bool m_backupPolicyHasBeenSet;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet;

    Aws::Vector<Hsm> m_hsms;
    bool m_hsmsHasBeenSet;

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet;

    Aws::String m_preCoPassword;
    bool m_preCoPasswordHasBeenSet;

    Aws::String m_securityGroup;
    bool m_securityGroupHasBeenSet;

    Aws::String m_sourceBackupId;
    bool m_sourceBackupIdHasBeenSet;

    ClusterState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_subnetMapping;
    bool m_subnetMappingHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Certificates m_certificates;
    bool m_certificatesHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
