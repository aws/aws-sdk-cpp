/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/QopConfiguration.h>
#include <aws/datasync/model/HdfsAuthenticationType.h>
#include <aws/core/utils/Array.h>
#include <aws/datasync/model/HdfsNameNode.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class CreateLocationHdfsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationHdfsRequest();

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
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline CreateLocationHdfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline CreateLocationHdfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline CreateLocationHdfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline const Aws::Vector<HdfsNameNode>& GetNameNodes() const{ return m_nameNodes; }
    inline bool NameNodesHasBeenSet() const { return m_nameNodesHasBeenSet; }
    inline void SetNameNodes(const Aws::Vector<HdfsNameNode>& value) { m_nameNodesHasBeenSet = true; m_nameNodes = value; }
    inline void SetNameNodes(Aws::Vector<HdfsNameNode>&& value) { m_nameNodesHasBeenSet = true; m_nameNodes = std::move(value); }
    inline CreateLocationHdfsRequest& WithNameNodes(const Aws::Vector<HdfsNameNode>& value) { SetNameNodes(value); return *this;}
    inline CreateLocationHdfsRequest& WithNameNodes(Aws::Vector<HdfsNameNode>&& value) { SetNameNodes(std::move(value)); return *this;}
    inline CreateLocationHdfsRequest& AddNameNodes(const HdfsNameNode& value) { m_nameNodesHasBeenSet = true; m_nameNodes.push_back(value); return *this; }
    inline CreateLocationHdfsRequest& AddNameNodes(HdfsNameNode&& value) { m_nameNodesHasBeenSet = true; m_nameNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of data blocks to write into the HDFS cluster. The block size must
     * be a multiple of 512 bytes. The default block size is 128 mebibytes (MiB).</p>
     */
    inline int GetBlockSize() const{ return m_blockSize; }
    inline bool BlockSizeHasBeenSet() const { return m_blockSizeHasBeenSet; }
    inline void SetBlockSize(int value) { m_blockSizeHasBeenSet = true; m_blockSize = value; }
    inline CreateLocationHdfsRequest& WithBlockSize(int value) { SetBlockSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. By default, data is replicated to three DataNodes.</p>
     */
    inline int GetReplicationFactor() const{ return m_replicationFactor; }
    inline bool ReplicationFactorHasBeenSet() const { return m_replicationFactorHasBeenSet; }
    inline void SetReplicationFactor(int value) { m_replicationFactorHasBeenSet = true; m_replicationFactor = value; }
    inline CreateLocationHdfsRequest& WithReplicationFactor(int value) { SetReplicationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline const Aws::String& GetKmsKeyProviderUri() const{ return m_kmsKeyProviderUri; }
    inline bool KmsKeyProviderUriHasBeenSet() const { return m_kmsKeyProviderUriHasBeenSet; }
    inline void SetKmsKeyProviderUri(const Aws::String& value) { m_kmsKeyProviderUriHasBeenSet = true; m_kmsKeyProviderUri = value; }
    inline void SetKmsKeyProviderUri(Aws::String&& value) { m_kmsKeyProviderUriHasBeenSet = true; m_kmsKeyProviderUri = std::move(value); }
    inline void SetKmsKeyProviderUri(const char* value) { m_kmsKeyProviderUriHasBeenSet = true; m_kmsKeyProviderUri.assign(value); }
    inline CreateLocationHdfsRequest& WithKmsKeyProviderUri(const Aws::String& value) { SetKmsKeyProviderUri(value); return *this;}
    inline CreateLocationHdfsRequest& WithKmsKeyProviderUri(Aws::String&& value) { SetKmsKeyProviderUri(std::move(value)); return *this;}
    inline CreateLocationHdfsRequest& WithKmsKeyProviderUri(const char* value) { SetKmsKeyProviderUri(value); return *this;}
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
    inline const QopConfiguration& GetQopConfiguration() const{ return m_qopConfiguration; }
    inline bool QopConfigurationHasBeenSet() const { return m_qopConfigurationHasBeenSet; }
    inline void SetQopConfiguration(const QopConfiguration& value) { m_qopConfigurationHasBeenSet = true; m_qopConfiguration = value; }
    inline void SetQopConfiguration(QopConfiguration&& value) { m_qopConfigurationHasBeenSet = true; m_qopConfiguration = std::move(value); }
    inline CreateLocationHdfsRequest& WithQopConfiguration(const QopConfiguration& value) { SetQopConfiguration(value); return *this;}
    inline CreateLocationHdfsRequest& WithQopConfiguration(QopConfiguration&& value) { SetQopConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline const HdfsAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const HdfsAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(HdfsAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline CreateLocationHdfsRequest& WithAuthenticationType(const HdfsAuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline CreateLocationHdfsRequest& WithAuthenticationType(HdfsAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name used to identify the client on the host operating system. </p>
     *  <p>If <code>SIMPLE</code> is specified for
     * <code>AuthenticationType</code>, this parameter is required. </p> 
     */
    inline const Aws::String& GetSimpleUser() const{ return m_simpleUser; }
    inline bool SimpleUserHasBeenSet() const { return m_simpleUserHasBeenSet; }
    inline void SetSimpleUser(const Aws::String& value) { m_simpleUserHasBeenSet = true; m_simpleUser = value; }
    inline void SetSimpleUser(Aws::String&& value) { m_simpleUserHasBeenSet = true; m_simpleUser = std::move(value); }
    inline void SetSimpleUser(const char* value) { m_simpleUserHasBeenSet = true; m_simpleUser.assign(value); }
    inline CreateLocationHdfsRequest& WithSimpleUser(const Aws::String& value) { SetSimpleUser(value); return *this;}
    inline CreateLocationHdfsRequest& WithSimpleUser(Aws::String&& value) { SetSimpleUser(std::move(value)); return *this;}
    inline CreateLocationHdfsRequest& WithSimpleUser(const char* value) { SetSimpleUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>  <p>If <code>KERBEROS</code> is specified for
     * <code>AuthenticationType</code>, this parameter is required.</p> 
     */
    inline const Aws::String& GetKerberosPrincipal() const{ return m_kerberosPrincipal; }
    inline bool KerberosPrincipalHasBeenSet() const { return m_kerberosPrincipalHasBeenSet; }
    inline void SetKerberosPrincipal(const Aws::String& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = value; }
    inline void SetKerberosPrincipal(Aws::String&& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = std::move(value); }
    inline void SetKerberosPrincipal(const char* value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal.assign(value); }
    inline CreateLocationHdfsRequest& WithKerberosPrincipal(const Aws::String& value) { SetKerberosPrincipal(value); return *this;}
    inline CreateLocationHdfsRequest& WithKerberosPrincipal(Aws::String&& value) { SetKerberosPrincipal(std::move(value)); return *this;}
    inline CreateLocationHdfsRequest& WithKerberosPrincipal(const char* value) { SetKerberosPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kerberos key table (keytab) that contains mappings between the defined
     * Kerberos principal and the encrypted keys. You can load the keytab from a file
     * by providing the file's address. If you're using the CLI, it performs base64
     * encoding for you. Otherwise, provide the base64-encoded text. </p>  <p>If
     * <code>KERBEROS</code> is specified for <code>AuthenticationType</code>, this
     * parameter is required. </p> 
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKeytab() const{ return m_kerberosKeytab; }
    inline bool KerberosKeytabHasBeenSet() const { return m_kerberosKeytabHasBeenSet; }
    inline void SetKerberosKeytab(const Aws::Utils::ByteBuffer& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = value; }
    inline void SetKerberosKeytab(Aws::Utils::ByteBuffer&& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = std::move(value); }
    inline CreateLocationHdfsRequest& WithKerberosKeytab(const Aws::Utils::ByteBuffer& value) { SetKerberosKeytab(value); return *this;}
    inline CreateLocationHdfsRequest& WithKerberosKeytab(Aws::Utils::ByteBuffer&& value) { SetKerberosKeytab(std::move(value)); return *this;}
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
    inline const Aws::Utils::ByteBuffer& GetKerberosKrb5Conf() const{ return m_kerberosKrb5Conf; }
    inline bool KerberosKrb5ConfHasBeenSet() const { return m_kerberosKrb5ConfHasBeenSet; }
    inline void SetKerberosKrb5Conf(const Aws::Utils::ByteBuffer& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = value; }
    inline void SetKerberosKrb5Conf(Aws::Utils::ByteBuffer&& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = std::move(value); }
    inline CreateLocationHdfsRequest& WithKerberosKrb5Conf(const Aws::Utils::ByteBuffer& value) { SetKerberosKrb5Conf(value); return *this;}
    inline CreateLocationHdfsRequest& WithKerberosKrb5Conf(Aws::Utils::ByteBuffer&& value) { SetKerberosKrb5Conf(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the DataSync agents that can connect to
     * your HDFS cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }
    inline CreateLocationHdfsRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline CreateLocationHdfsRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline CreateLocationHdfsRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    inline CreateLocationHdfsRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }
    inline CreateLocationHdfsRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources. </p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLocationHdfsRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}
    inline CreateLocationHdfsRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLocationHdfsRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateLocationHdfsRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::Vector<HdfsNameNode> m_nameNodes;
    bool m_nameNodesHasBeenSet = false;

    int m_blockSize;
    bool m_blockSizeHasBeenSet = false;

    int m_replicationFactor;
    bool m_replicationFactorHasBeenSet = false;

    Aws::String m_kmsKeyProviderUri;
    bool m_kmsKeyProviderUriHasBeenSet = false;

    QopConfiguration m_qopConfiguration;
    bool m_qopConfigurationHasBeenSet = false;

    HdfsAuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_simpleUser;
    bool m_simpleUserHasBeenSet = false;

    Aws::String m_kerberosPrincipal;
    bool m_kerberosPrincipalHasBeenSet = false;

    Aws::Utils::ByteBuffer m_kerberosKeytab;
    bool m_kerberosKeytabHasBeenSet = false;

    Aws::Utils::ByteBuffer m_kerberosKrb5Conf;
    bool m_kerberosKrb5ConfHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
