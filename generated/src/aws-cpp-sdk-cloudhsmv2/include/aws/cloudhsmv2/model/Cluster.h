/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/BackupPolicy.h>
#include <aws/cloudhsmv2/model/BackupRetentionPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsmv2/model/ClusterState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cloudhsmv2/model/NetworkType.h>
#include <aws/cloudhsmv2/model/Certificates.h>
#include <aws/cloudhsmv2/model/ClusterMode.h>
#include <aws/cloudhsmv2/model/Hsm.h>
#include <aws/cloudhsmv2/model/Tag.h>
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
   * <p>Contains information about an CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/Cluster">AWS
   * API Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_CLOUDHSMV2_API Cluster();
    AWS_CLOUDHSMV2_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster's backup policy.</p>
     */
    inline const BackupPolicy& GetBackupPolicy() const{ return m_backupPolicy; }
    inline bool BackupPolicyHasBeenSet() const { return m_backupPolicyHasBeenSet; }
    inline void SetBackupPolicy(const BackupPolicy& value) { m_backupPolicyHasBeenSet = true; m_backupPolicy = value; }
    inline void SetBackupPolicy(BackupPolicy&& value) { m_backupPolicyHasBeenSet = true; m_backupPolicy = std::move(value); }
    inline Cluster& WithBackupPolicy(const BackupPolicy& value) { SetBackupPolicy(value); return *this;}
    inline Cluster& WithBackupPolicy(BackupPolicy&& value) { SetBackupPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline const BackupRetentionPolicy& GetBackupRetentionPolicy() const{ return m_backupRetentionPolicy; }
    inline bool BackupRetentionPolicyHasBeenSet() const { return m_backupRetentionPolicyHasBeenSet; }
    inline void SetBackupRetentionPolicy(const BackupRetentionPolicy& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = value; }
    inline void SetBackupRetentionPolicy(BackupRetentionPolicy&& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = std::move(value); }
    inline Cluster& WithBackupRetentionPolicy(const BackupRetentionPolicy& value) { SetBackupRetentionPolicy(value); return *this;}
    inline Cluster& WithBackupRetentionPolicy(BackupRetentionPolicy&& value) { SetBackupRetentionPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline Cluster& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline Cluster& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline Cluster& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }
    inline Cluster& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}
    inline Cluster& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline const Aws::Vector<Hsm>& GetHsms() const{ return m_hsms; }
    inline bool HsmsHasBeenSet() const { return m_hsmsHasBeenSet; }
    inline void SetHsms(const Aws::Vector<Hsm>& value) { m_hsmsHasBeenSet = true; m_hsms = value; }
    inline void SetHsms(Aws::Vector<Hsm>&& value) { m_hsmsHasBeenSet = true; m_hsms = std::move(value); }
    inline Cluster& WithHsms(const Aws::Vector<Hsm>& value) { SetHsms(value); return *this;}
    inline Cluster& WithHsms(Aws::Vector<Hsm>&& value) { SetHsms(std::move(value)); return *this;}
    inline Cluster& AddHsms(const Hsm& value) { m_hsmsHasBeenSet = true; m_hsms.push_back(value); return *this; }
    inline Cluster& AddHsms(Hsm&& value) { m_hsmsHasBeenSet = true; m_hsms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline const Aws::String& GetHsmType() const{ return m_hsmType; }
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }
    inline void SetHsmType(const Aws::String& value) { m_hsmTypeHasBeenSet = true; m_hsmType = value; }
    inline void SetHsmType(Aws::String&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::move(value); }
    inline void SetHsmType(const char* value) { m_hsmTypeHasBeenSet = true; m_hsmType.assign(value); }
    inline Cluster& WithHsmType(const Aws::String& value) { SetHsmType(value); return *this;}
    inline Cluster& WithHsmType(Aws::String&& value) { SetHsmType(std::move(value)); return *this;}
    inline Cluster& WithHsmType(const char* value) { SetHsmType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp until when the cluster can be rolled back to its original HSM
     * type.</p>
     */
    inline const Aws::Utils::DateTime& GetHsmTypeRollbackExpiration() const{ return m_hsmTypeRollbackExpiration; }
    inline bool HsmTypeRollbackExpirationHasBeenSet() const { return m_hsmTypeRollbackExpirationHasBeenSet; }
    inline void SetHsmTypeRollbackExpiration(const Aws::Utils::DateTime& value) { m_hsmTypeRollbackExpirationHasBeenSet = true; m_hsmTypeRollbackExpiration = value; }
    inline void SetHsmTypeRollbackExpiration(Aws::Utils::DateTime&& value) { m_hsmTypeRollbackExpirationHasBeenSet = true; m_hsmTypeRollbackExpiration = std::move(value); }
    inline Cluster& WithHsmTypeRollbackExpiration(const Aws::Utils::DateTime& value) { SetHsmTypeRollbackExpiration(value); return *this;}
    inline Cluster& WithHsmTypeRollbackExpiration(Aws::Utils::DateTime&& value) { SetHsmTypeRollbackExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline const Aws::String& GetPreCoPassword() const{ return m_preCoPassword; }
    inline bool PreCoPasswordHasBeenSet() const { return m_preCoPasswordHasBeenSet; }
    inline void SetPreCoPassword(const Aws::String& value) { m_preCoPasswordHasBeenSet = true; m_preCoPassword = value; }
    inline void SetPreCoPassword(Aws::String&& value) { m_preCoPasswordHasBeenSet = true; m_preCoPassword = std::move(value); }
    inline void SetPreCoPassword(const char* value) { m_preCoPasswordHasBeenSet = true; m_preCoPassword.assign(value); }
    inline Cluster& WithPreCoPassword(const Aws::String& value) { SetPreCoPassword(value); return *this;}
    inline Cluster& WithPreCoPassword(Aws::String&& value) { SetPreCoPassword(std::move(value)); return *this;}
    inline Cluster& WithPreCoPassword(const char* value) { SetPreCoPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline const Aws::String& GetSecurityGroup() const{ return m_securityGroup; }
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }
    inline void SetSecurityGroup(const Aws::String& value) { m_securityGroupHasBeenSet = true; m_securityGroup = value; }
    inline void SetSecurityGroup(Aws::String&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::move(value); }
    inline void SetSecurityGroup(const char* value) { m_securityGroupHasBeenSet = true; m_securityGroup.assign(value); }
    inline Cluster& WithSecurityGroup(const Aws::String& value) { SetSecurityGroup(value); return *this;}
    inline Cluster& WithSecurityGroup(Aws::String&& value) { SetSecurityGroup(std::move(value)); return *this;}
    inline Cluster& WithSecurityGroup(const char* value) { SetSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline const Aws::String& GetSourceBackupId() const{ return m_sourceBackupId; }
    inline bool SourceBackupIdHasBeenSet() const { return m_sourceBackupIdHasBeenSet; }
    inline void SetSourceBackupId(const Aws::String& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = value; }
    inline void SetSourceBackupId(Aws::String&& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = std::move(value); }
    inline void SetSourceBackupId(const char* value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId.assign(value); }
    inline Cluster& WithSourceBackupId(const Aws::String& value) { SetSourceBackupId(value); return *this;}
    inline Cluster& WithSourceBackupId(Aws::String&& value) { SetSourceBackupId(std::move(value)); return *this;}
    inline Cluster& WithSourceBackupId(const char* value) { SetSourceBackupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's state.</p>
     */
    inline const ClusterState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ClusterState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ClusterState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Cluster& WithState(const ClusterState& value) { SetState(value); return *this;}
    inline Cluster& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster's state.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }
    inline Cluster& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline Cluster& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline Cluster& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map from availability zone to the cluster’s subnet in that availability
     * zone.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSubnetMapping() const{ return m_subnetMapping; }
    inline bool SubnetMappingHasBeenSet() const { return m_subnetMappingHasBeenSet; }
    inline void SetSubnetMapping(const Aws::Map<Aws::String, Aws::String>& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping = value; }
    inline void SetSubnetMapping(Aws::Map<Aws::String, Aws::String>&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping = std::move(value); }
    inline Cluster& WithSubnetMapping(const Aws::Map<Aws::String, Aws::String>& value) { SetSubnetMapping(value); return *this;}
    inline Cluster& WithSubnetMapping(Aws::Map<Aws::String, Aws::String>&& value) { SetSubnetMapping(std::move(value)); return *this;}
    inline Cluster& AddSubnetMapping(const Aws::String& key, const Aws::String& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(key, value); return *this; }
    inline Cluster& AddSubnetMapping(Aws::String&& key, const Aws::String& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(std::move(key), value); return *this; }
    inline Cluster& AddSubnetMapping(const Aws::String& key, Aws::String&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(key, std::move(value)); return *this; }
    inline Cluster& AddSubnetMapping(Aws::String&& key, Aws::String&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(std::move(key), std::move(value)); return *this; }
    inline Cluster& AddSubnetMapping(const char* key, Aws::String&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(key, std::move(value)); return *this; }
    inline Cluster& AddSubnetMapping(Aws::String&& key, const char* value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(std::move(key), value); return *this; }
    inline Cluster& AddSubnetMapping(const char* key, const char* value) { m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Cluster& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Cluster& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Cluster& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's NetworkType can be IPv4 (the default) or DUALSTACK. The IPv4
     * NetworkType restricts communication between your application and the hardware
     * security modules (HSMs) to the IPv4 protocol only. The DUALSTACK NetworkType
     * enables communication over both IPv4 and IPv6 protocols. To use DUALSTACK,
     * configure your virtual private cloud (VPC) and subnets to support both IPv4 and
     * IPv6. This configuration involves adding IPv6 Classless Inter-Domain Routing
     * (CIDR) blocks to the existing IPv4 CIDR blocks in your subnets. The NetworkType
     * you choose affects the network addressing options for your cluster. DUALSTACK
     * provides more flexibility by supporting both IPv4 and IPv6 communication.</p>
     */
    inline const NetworkType& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const NetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(NetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline Cluster& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}
    inline Cluster& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one or more certificates or a certificate signing request (CSR).</p>
     */
    inline const Certificates& GetCertificates() const{ return m_certificates; }
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }
    inline void SetCertificates(const Certificates& value) { m_certificatesHasBeenSet = true; m_certificates = value; }
    inline void SetCertificates(Certificates&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }
    inline Cluster& WithCertificates(const Certificates& value) { SetCertificates(value); return *this;}
    inline Cluster& WithCertificates(Certificates&& value) { SetCertificates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline Cluster& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline Cluster& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline Cluster& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline Cluster& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mode of the cluster.</p>
     */
    inline const ClusterMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const ClusterMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(ClusterMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline Cluster& WithMode(const ClusterMode& value) { SetMode(value); return *this;}
    inline Cluster& WithMode(ClusterMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}
  private:

    BackupPolicy m_backupPolicy;
    bool m_backupPolicyHasBeenSet = false;

    BackupRetentionPolicy m_backupRetentionPolicy;
    bool m_backupRetentionPolicyHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::Vector<Hsm> m_hsms;
    bool m_hsmsHasBeenSet = false;

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet = false;

    Aws::Utils::DateTime m_hsmTypeRollbackExpiration;
    bool m_hsmTypeRollbackExpirationHasBeenSet = false;

    Aws::String m_preCoPassword;
    bool m_preCoPasswordHasBeenSet = false;

    Aws::String m_securityGroup;
    bool m_securityGroupHasBeenSet = false;

    Aws::String m_sourceBackupId;
    bool m_sourceBackupIdHasBeenSet = false;

    ClusterState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_subnetMapping;
    bool m_subnetMappingHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    NetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;

    Certificates m_certificates;
    bool m_certificatesHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    ClusterMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
