/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/CmkSecretConfig.h>
#include <aws/datasync/model/CustomSecretConfig.h>
#include <aws/datasync/model/HdfsAuthenticationType.h>
#include <aws/datasync/model/HdfsNameNode.h>
#include <aws/datasync/model/QopConfiguration.h>
#include <aws/datasync/model/TagListEntry.h>

#include <utility>

namespace Aws {
namespace DataSync {
namespace Model {

/**
 */
class CreateLocationHdfsRequest : public DataSyncRequest {
 public:
  AWS_DATASYNC_API CreateLocationHdfsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateLocationHdfs"; }

  AWS_DATASYNC_API Aws::String SerializePayload() const override;

  AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
   * from or write data to the HDFS cluster. If the subdirectory isn't specified, it
   * will default to <code>/</code>.</p>
   */
  inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
  inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
  template <typename SubdirectoryT = Aws::String>
  void SetSubdirectory(SubdirectoryT&& value) {
    m_subdirectoryHasBeenSet = true;
    m_subdirectory = std::forward<SubdirectoryT>(value);
  }
  template <typename SubdirectoryT = Aws::String>
  CreateLocationHdfsRequest& WithSubdirectory(SubdirectoryT&& value) {
    SetSubdirectory(std::forward<SubdirectoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NameNode that manages the HDFS namespace. The NameNode performs
   * operations such as opening, closing, and renaming files and directories. The
   * NameNode contains the information to map blocks of data to the DataNodes. You
   * can use only one NameNode.</p>
   */
  inline const Aws::Vector<HdfsNameNode>& GetNameNodes() const { return m_nameNodes; }
  inline bool NameNodesHasBeenSet() const { return m_nameNodesHasBeenSet; }
  template <typename NameNodesT = Aws::Vector<HdfsNameNode>>
  void SetNameNodes(NameNodesT&& value) {
    m_nameNodesHasBeenSet = true;
    m_nameNodes = std::forward<NameNodesT>(value);
  }
  template <typename NameNodesT = Aws::Vector<HdfsNameNode>>
  CreateLocationHdfsRequest& WithNameNodes(NameNodesT&& value) {
    SetNameNodes(std::forward<NameNodesT>(value));
    return *this;
  }
  template <typename NameNodesT = HdfsNameNode>
  CreateLocationHdfsRequest& AddNameNodes(NameNodesT&& value) {
    m_nameNodesHasBeenSet = true;
    m_nameNodes.emplace_back(std::forward<NameNodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of data blocks to write into the HDFS cluster. The block size must
   * be a multiple of 512 bytes. The default block size is 128 mebibytes (MiB).</p>
   */
  inline int GetBlockSize() const { return m_blockSize; }
  inline bool BlockSizeHasBeenSet() const { return m_blockSizeHasBeenSet; }
  inline void SetBlockSize(int value) {
    m_blockSizeHasBeenSet = true;
    m_blockSize = value;
  }
  inline CreateLocationHdfsRequest& WithBlockSize(int value) {
    SetBlockSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of DataNodes to replicate the data to when writing to the HDFS
   * cluster. By default, data is replicated to three DataNodes.</p>
   */
  inline int GetReplicationFactor() const { return m_replicationFactor; }
  inline bool ReplicationFactorHasBeenSet() const { return m_replicationFactorHasBeenSet; }
  inline void SetReplicationFactor(int value) {
    m_replicationFactorHasBeenSet = true;
    m_replicationFactor = value;
  }
  inline CreateLocationHdfsRequest& WithReplicationFactor(int value) {
    SetReplicationFactor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
   */
  inline const Aws::String& GetKmsKeyProviderUri() const { return m_kmsKeyProviderUri; }
  inline bool KmsKeyProviderUriHasBeenSet() const { return m_kmsKeyProviderUriHasBeenSet; }
  template <typename KmsKeyProviderUriT = Aws::String>
  void SetKmsKeyProviderUri(KmsKeyProviderUriT&& value) {
    m_kmsKeyProviderUriHasBeenSet = true;
    m_kmsKeyProviderUri = std::forward<KmsKeyProviderUriT>(value);
  }
  template <typename KmsKeyProviderUriT = Aws::String>
  CreateLocationHdfsRequest& WithKmsKeyProviderUri(KmsKeyProviderUriT&& value) {
    SetKmsKeyProviderUri(std::forward<KmsKeyProviderUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
   * Call (RPC) and data transfer protection settings configured on the Hadoop
   * Distributed File System (HDFS) cluster. If <code>QopConfiguration</code> isn't
   * specified, <code>RpcProtection</code> and <code>DataTransferProtection</code>
   * default to <code>PRIVACY</code>. If you set <code>RpcProtection</code> or
   * <code>DataTransferProtection</code>, the other parameter assumes the same value.
   * </p>
   */
  inline const QopConfiguration& GetQopConfiguration() const { return m_qopConfiguration; }
  inline bool QopConfigurationHasBeenSet() const { return m_qopConfigurationHasBeenSet; }
  template <typename QopConfigurationT = QopConfiguration>
  void SetQopConfiguration(QopConfigurationT&& value) {
    m_qopConfigurationHasBeenSet = true;
    m_qopConfiguration = std::forward<QopConfigurationT>(value);
  }
  template <typename QopConfigurationT = QopConfiguration>
  CreateLocationHdfsRequest& WithQopConfiguration(QopConfigurationT&& value) {
    SetQopConfiguration(std::forward<QopConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of authentication used to determine the identity of the user. </p>
   */
  inline HdfsAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
  inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
  inline void SetAuthenticationType(HdfsAuthenticationType value) {
    m_authenticationTypeHasBeenSet = true;
    m_authenticationType = value;
  }
  inline CreateLocationHdfsRequest& WithAuthenticationType(HdfsAuthenticationType value) {
    SetAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user name used to identify the client on the host operating system. </p>
   *  <p>If <code>SIMPLE</code> is specified for
   * <code>AuthenticationType</code>, this parameter is required. </p>
   */
  inline const Aws::String& GetSimpleUser() const { return m_simpleUser; }
  inline bool SimpleUserHasBeenSet() const { return m_simpleUserHasBeenSet; }
  template <typename SimpleUserT = Aws::String>
  void SetSimpleUser(SimpleUserT&& value) {
    m_simpleUserHasBeenSet = true;
    m_simpleUser = std::forward<SimpleUserT>(value);
  }
  template <typename SimpleUserT = Aws::String>
  CreateLocationHdfsRequest& WithSimpleUser(SimpleUserT&& value) {
    SetSimpleUser(std::forward<SimpleUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kerberos principal with access to the files and folders on the HDFS
   * cluster. </p>  <p>If <code>KERBEROS</code> is specified for
   * <code>AuthenticationType</code>, this parameter is required.</p>
   */
  inline const Aws::String& GetKerberosPrincipal() const { return m_kerberosPrincipal; }
  inline bool KerberosPrincipalHasBeenSet() const { return m_kerberosPrincipalHasBeenSet; }
  template <typename KerberosPrincipalT = Aws::String>
  void SetKerberosPrincipal(KerberosPrincipalT&& value) {
    m_kerberosPrincipalHasBeenSet = true;
    m_kerberosPrincipal = std::forward<KerberosPrincipalT>(value);
  }
  template <typename KerberosPrincipalT = Aws::String>
  CreateLocationHdfsRequest& WithKerberosPrincipal(KerberosPrincipalT&& value) {
    SetKerberosPrincipal(std::forward<KerberosPrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kerberos key table (keytab) that contains mappings between the defined
   * Kerberos principal and the encrypted keys. You can load the keytab from a file
   * by providing the file's address.</p>  <p>If <code>KERBEROS</code> is
   * specified for <code>AuthenticationType</code>, this parameter is required. </p>
   *
   */
  inline const Aws::Utils::ByteBuffer& GetKerberosKeytab() const { return m_kerberosKeytab; }
  inline bool KerberosKeytabHasBeenSet() const { return m_kerberosKeytabHasBeenSet; }
  template <typename KerberosKeytabT = Aws::Utils::ByteBuffer>
  void SetKerberosKeytab(KerberosKeytabT&& value) {
    m_kerberosKeytabHasBeenSet = true;
    m_kerberosKeytab = std::forward<KerberosKeytabT>(value);
  }
  template <typename KerberosKeytabT = Aws::Utils::ByteBuffer>
  CreateLocationHdfsRequest& WithKerberosKeytab(KerberosKeytabT&& value) {
    SetKerberosKeytab(std::forward<KerberosKeytabT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>krb5.conf</code> file that contains the Kerberos configuration
   * information. You can load the <code>krb5.conf</code> file by providing the
   * file's address. If you're using the CLI, it performs the base64 encoding for
   * you. Otherwise, provide the base64-encoded text. </p>  <p>If
   * <code>KERBEROS</code> is specified for <code>AuthenticationType</code>, this
   * parameter is required.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetKerberosKrb5Conf() const { return m_kerberosKrb5Conf; }
  inline bool KerberosKrb5ConfHasBeenSet() const { return m_kerberosKrb5ConfHasBeenSet; }
  template <typename KerberosKrb5ConfT = Aws::Utils::ByteBuffer>
  void SetKerberosKrb5Conf(KerberosKrb5ConfT&& value) {
    m_kerberosKrb5ConfHasBeenSet = true;
    m_kerberosKrb5Conf = std::forward<KerberosKrb5ConfT>(value);
  }
  template <typename KerberosKrb5ConfT = Aws::Utils::ByteBuffer>
  CreateLocationHdfsRequest& WithKerberosKrb5Conf(KerberosKrb5ConfT&& value) {
    SetKerberosKrb5Conf(std::forward<KerberosKrb5ConfT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the DataSync agents that can connect to
   * your HDFS cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
  inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
  template <typename AgentArnsT = Aws::Vector<Aws::String>>
  void SetAgentArns(AgentArnsT&& value) {
    m_agentArnsHasBeenSet = true;
    m_agentArns = std::forward<AgentArnsT>(value);
  }
  template <typename AgentArnsT = Aws::Vector<Aws::String>>
  CreateLocationHdfsRequest& WithAgentArns(AgentArnsT&& value) {
    SetAgentArns(std::forward<AgentArnsT>(value));
    return *this;
  }
  template <typename AgentArnsT = Aws::String>
  CreateLocationHdfsRequest& AddAgentArns(AgentArnsT&& value) {
    m_agentArnsHasBeenSet = true;
    m_agentArns.emplace_back(std::forward<AgentArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key-value pair that represents the tag that you want to add to the
   * location. The value can be an empty string. We recommend using tags to name your
   * resources. </p>
   */
  inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<TagListEntry>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<TagListEntry>>
  CreateLocationHdfsRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = TagListEntry>
  CreateLocationHdfsRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies configuration information for a DataSync-managed secret, which
   * includes the Kerberos keytab that DataSync uses to access a specific Hadoop
   * Distributed File System (HDFS) storage location, with a customer-managed KMS
   * key.</p> <p>When you include this parameter as part of a
   * <code>CreateLocationHdfs</code> request, you provide only the KMS key ARN.
   * DataSync uses this KMS key together with the <code>KerberosKeytab</code> you
   * specify for to create a DataSync-managed secret to store the location access
   * credentials.</p> <p>Make sure that DataSync has permission to access the KMS key
   * that you specify. For more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/location-credentials.html#service-secret-custom-key">
   * Using a service-managed secret encrypted with a custom KMS key</a>.</p>
   * <p>You can use either <code>CmkSecretConfig</code> (with
   * <code>KerberosKeytab</code>) or <code>CustomSecretConfig</code> (without
   * <code>KerberosKeytab</code>) to provide credentials for a
   * <code>CreateLocationHdfs</code> request. Do not provide both parameters for the
   * same request.</p>
   */
  inline const CmkSecretConfig& GetCmkSecretConfig() const { return m_cmkSecretConfig; }
  inline bool CmkSecretConfigHasBeenSet() const { return m_cmkSecretConfigHasBeenSet; }
  template <typename CmkSecretConfigT = CmkSecretConfig>
  void SetCmkSecretConfig(CmkSecretConfigT&& value) {
    m_cmkSecretConfigHasBeenSet = true;
    m_cmkSecretConfig = std::forward<CmkSecretConfigT>(value);
  }
  template <typename CmkSecretConfigT = CmkSecretConfig>
  CreateLocationHdfsRequest& WithCmkSecretConfig(CmkSecretConfigT&& value) {
    SetCmkSecretConfig(std::forward<CmkSecretConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies configuration information for a customer-managed Secrets Manager
   * secret where the Kerberos keytab for the HDFS storage location is stored in
   * binary, in Secrets Manager. This configuration includes the secret ARN, and the
   * ARN for an IAM role that provides access to the secret. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/location-credentials.html#custom-secret-custom-key">
   * Using a secret that you manage</a>.</p>  <p>You can use either
   * <code>CmkSecretConfig</code> (with <code>KerberosKeytab</code>) or
   * <code>CustomSecretConfig</code> (without <code>KerberosKeytab</code>) to provide
   * credentials for a <code>CreateLocationHdfs</code> request. Do not provide both
   * parameters for the same request.</p>
   */
  inline const CustomSecretConfig& GetCustomSecretConfig() const { return m_customSecretConfig; }
  inline bool CustomSecretConfigHasBeenSet() const { return m_customSecretConfigHasBeenSet; }
  template <typename CustomSecretConfigT = CustomSecretConfig>
  void SetCustomSecretConfig(CustomSecretConfigT&& value) {
    m_customSecretConfigHasBeenSet = true;
    m_customSecretConfig = std::forward<CustomSecretConfigT>(value);
  }
  template <typename CustomSecretConfigT = CustomSecretConfig>
  CreateLocationHdfsRequest& WithCustomSecretConfig(CustomSecretConfigT&& value) {
    SetCustomSecretConfig(std::forward<CustomSecretConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subdirectory;

  Aws::Vector<HdfsNameNode> m_nameNodes;

  int m_blockSize{0};

  int m_replicationFactor{0};

  Aws::String m_kmsKeyProviderUri;

  QopConfiguration m_qopConfiguration;

  HdfsAuthenticationType m_authenticationType{HdfsAuthenticationType::NOT_SET};

  Aws::String m_simpleUser;

  Aws::String m_kerberosPrincipal;

  Aws::Utils::ByteBuffer m_kerberosKeytab{};

  Aws::Utils::ByteBuffer m_kerberosKrb5Conf{};

  Aws::Vector<Aws::String> m_agentArns;

  Aws::Vector<TagListEntry> m_tags;

  CmkSecretConfig m_cmkSecretConfig;

  CustomSecretConfig m_customSecretConfig;
  bool m_subdirectoryHasBeenSet = false;
  bool m_nameNodesHasBeenSet = false;
  bool m_blockSizeHasBeenSet = false;
  bool m_replicationFactorHasBeenSet = false;
  bool m_kmsKeyProviderUriHasBeenSet = false;
  bool m_qopConfigurationHasBeenSet = false;
  bool m_authenticationTypeHasBeenSet = false;
  bool m_simpleUserHasBeenSet = false;
  bool m_kerberosPrincipalHasBeenSet = false;
  bool m_kerberosKeytabHasBeenSet = false;
  bool m_kerberosKrb5ConfHasBeenSet = false;
  bool m_agentArnsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_cmkSecretConfigHasBeenSet = false;
  bool m_customSecretConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
