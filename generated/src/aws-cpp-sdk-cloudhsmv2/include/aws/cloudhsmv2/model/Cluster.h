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
    AWS_CLOUDHSMV2_API Cluster() = default;
    AWS_CLOUDHSMV2_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster's backup policy.</p>
     */
    inline BackupPolicy GetBackupPolicy() const { return m_backupPolicy; }
    inline bool BackupPolicyHasBeenSet() const { return m_backupPolicyHasBeenSet; }
    inline void SetBackupPolicy(BackupPolicy value) { m_backupPolicyHasBeenSet = true; m_backupPolicy = value; }
    inline Cluster& WithBackupPolicy(BackupPolicy value) { SetBackupPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline const BackupRetentionPolicy& GetBackupRetentionPolicy() const { return m_backupRetentionPolicy; }
    inline bool BackupRetentionPolicyHasBeenSet() const { return m_backupRetentionPolicyHasBeenSet; }
    template<typename BackupRetentionPolicyT = BackupRetentionPolicy>
    void SetBackupRetentionPolicy(BackupRetentionPolicyT&& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = std::forward<BackupRetentionPolicyT>(value); }
    template<typename BackupRetentionPolicyT = BackupRetentionPolicy>
    Cluster& WithBackupRetentionPolicy(BackupRetentionPolicyT&& value) { SetBackupRetentionPolicy(std::forward<BackupRetentionPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's identifier (ID).</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    Cluster& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const { return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    void SetCreateTimestamp(CreateTimestampT&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::forward<CreateTimestampT>(value); }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    Cluster& WithCreateTimestamp(CreateTimestampT&& value) { SetCreateTimestamp(std::forward<CreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the HSMs in the cluster.</p>
     */
    inline const Aws::Vector<Hsm>& GetHsms() const { return m_hsms; }
    inline bool HsmsHasBeenSet() const { return m_hsmsHasBeenSet; }
    template<typename HsmsT = Aws::Vector<Hsm>>
    void SetHsms(HsmsT&& value) { m_hsmsHasBeenSet = true; m_hsms = std::forward<HsmsT>(value); }
    template<typename HsmsT = Aws::Vector<Hsm>>
    Cluster& WithHsms(HsmsT&& value) { SetHsms(std::forward<HsmsT>(value)); return *this;}
    template<typename HsmsT = Hsm>
    Cluster& AddHsms(HsmsT&& value) { m_hsmsHasBeenSet = true; m_hsms.emplace_back(std::forward<HsmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of HSM that the cluster contains.</p>
     */
    inline const Aws::String& GetHsmType() const { return m_hsmType; }
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }
    template<typename HsmTypeT = Aws::String>
    void SetHsmType(HsmTypeT&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::forward<HsmTypeT>(value); }
    template<typename HsmTypeT = Aws::String>
    Cluster& WithHsmType(HsmTypeT&& value) { SetHsmType(std::forward<HsmTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp until when the cluster can be rolled back to its original HSM
     * type.</p>
     */
    inline const Aws::Utils::DateTime& GetHsmTypeRollbackExpiration() const { return m_hsmTypeRollbackExpiration; }
    inline bool HsmTypeRollbackExpirationHasBeenSet() const { return m_hsmTypeRollbackExpirationHasBeenSet; }
    template<typename HsmTypeRollbackExpirationT = Aws::Utils::DateTime>
    void SetHsmTypeRollbackExpiration(HsmTypeRollbackExpirationT&& value) { m_hsmTypeRollbackExpirationHasBeenSet = true; m_hsmTypeRollbackExpiration = std::forward<HsmTypeRollbackExpirationT>(value); }
    template<typename HsmTypeRollbackExpirationT = Aws::Utils::DateTime>
    Cluster& WithHsmTypeRollbackExpiration(HsmTypeRollbackExpirationT&& value) { SetHsmTypeRollbackExpiration(std::forward<HsmTypeRollbackExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default password for the cluster's Pre-Crypto Officer (PRECO) user.</p>
     */
    inline const Aws::String& GetPreCoPassword() const { return m_preCoPassword; }
    inline bool PreCoPasswordHasBeenSet() const { return m_preCoPasswordHasBeenSet; }
    template<typename PreCoPasswordT = Aws::String>
    void SetPreCoPassword(PreCoPasswordT&& value) { m_preCoPasswordHasBeenSet = true; m_preCoPassword = std::forward<PreCoPasswordT>(value); }
    template<typename PreCoPasswordT = Aws::String>
    Cluster& WithPreCoPassword(PreCoPasswordT&& value) { SetPreCoPassword(std::forward<PreCoPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the cluster's security group.</p>
     */
    inline const Aws::String& GetSecurityGroup() const { return m_securityGroup; }
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }
    template<typename SecurityGroupT = Aws::String>
    void SetSecurityGroup(SecurityGroupT&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::forward<SecurityGroupT>(value); }
    template<typename SecurityGroupT = Aws::String>
    Cluster& WithSecurityGroup(SecurityGroupT&& value) { SetSecurityGroup(std::forward<SecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the backup used to create the cluster. This value
     * exists only when the cluster was created from a backup.</p>
     */
    inline const Aws::String& GetSourceBackupId() const { return m_sourceBackupId; }
    inline bool SourceBackupIdHasBeenSet() const { return m_sourceBackupIdHasBeenSet; }
    template<typename SourceBackupIdT = Aws::String>
    void SetSourceBackupId(SourceBackupIdT&& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = std::forward<SourceBackupIdT>(value); }
    template<typename SourceBackupIdT = Aws::String>
    Cluster& WithSourceBackupId(SourceBackupIdT&& value) { SetSourceBackupId(std::forward<SourceBackupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's state.</p>
     */
    inline ClusterState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ClusterState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Cluster& WithState(ClusterState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster's state.</p>
     */
    inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    template<typename StateMessageT = Aws::String>
    void SetStateMessage(StateMessageT&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::forward<StateMessageT>(value); }
    template<typename StateMessageT = Aws::String>
    Cluster& WithStateMessage(StateMessageT&& value) { SetStateMessage(std::forward<StateMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map from availability zone to the cluster’s subnet in that availability
     * zone.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSubnetMapping() const { return m_subnetMapping; }
    inline bool SubnetMappingHasBeenSet() const { return m_subnetMappingHasBeenSet; }
    template<typename SubnetMappingT = Aws::Map<Aws::String, Aws::String>>
    void SetSubnetMapping(SubnetMappingT&& value) { m_subnetMappingHasBeenSet = true; m_subnetMapping = std::forward<SubnetMappingT>(value); }
    template<typename SubnetMappingT = Aws::Map<Aws::String, Aws::String>>
    Cluster& WithSubnetMapping(SubnetMappingT&& value) { SetSubnetMapping(std::forward<SubnetMappingT>(value)); return *this;}
    template<typename SubnetMappingKeyT = Aws::String, typename SubnetMappingValueT = Aws::String>
    Cluster& AddSubnetMapping(SubnetMappingKeyT&& key, SubnetMappingValueT&& value) {
      m_subnetMappingHasBeenSet = true; m_subnetMapping.emplace(std::forward<SubnetMappingKeyT>(key), std::forward<SubnetMappingValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the virtual private cloud (VPC) that contains the
     * cluster.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Cluster& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
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
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline Cluster& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one or more certificates or a certificate signing request (CSR).</p>
     */
    inline const Certificates& GetCertificates() const { return m_certificates; }
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }
    template<typename CertificatesT = Certificates>
    void SetCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates = std::forward<CertificatesT>(value); }
    template<typename CertificatesT = Certificates>
    Cluster& WithCertificates(CertificatesT&& value) { SetCertificates(std::forward<CertificatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    Cluster& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    Cluster& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mode of the cluster.</p>
     */
    inline ClusterMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ClusterMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline Cluster& WithMode(ClusterMode value) { SetMode(value); return *this;}
    ///@}
  private:

    BackupPolicy m_backupPolicy{BackupPolicy::NOT_SET};
    bool m_backupPolicyHasBeenSet = false;

    BackupRetentionPolicy m_backupRetentionPolicy;
    bool m_backupRetentionPolicyHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp{};
    bool m_createTimestampHasBeenSet = false;

    Aws::Vector<Hsm> m_hsms;
    bool m_hsmsHasBeenSet = false;

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet = false;

    Aws::Utils::DateTime m_hsmTypeRollbackExpiration{};
    bool m_hsmTypeRollbackExpirationHasBeenSet = false;

    Aws::String m_preCoPassword;
    bool m_preCoPasswordHasBeenSet = false;

    Aws::String m_securityGroup;
    bool m_securityGroupHasBeenSet = false;

    Aws::String m_sourceBackupId;
    bool m_sourceBackupIdHasBeenSet = false;

    ClusterState m_state{ClusterState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_subnetMapping;
    bool m_subnetMappingHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    Certificates m_certificates;
    bool m_certificatesHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    ClusterMode m_mode{ClusterMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
