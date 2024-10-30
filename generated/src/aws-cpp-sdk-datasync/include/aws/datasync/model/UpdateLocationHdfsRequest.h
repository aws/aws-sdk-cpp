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
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationHdfsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationHdfsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationHdfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }
    inline UpdateLocationHdfsRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline UpdateLocationHdfsRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline UpdateLocationHdfsRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline UpdateLocationHdfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline UpdateLocationHdfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline UpdateLocationHdfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
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
    inline UpdateLocationHdfsRequest& WithNameNodes(const Aws::Vector<HdfsNameNode>& value) { SetNameNodes(value); return *this;}
    inline UpdateLocationHdfsRequest& WithNameNodes(Aws::Vector<HdfsNameNode>&& value) { SetNameNodes(std::move(value)); return *this;}
    inline UpdateLocationHdfsRequest& AddNameNodes(const HdfsNameNode& value) { m_nameNodesHasBeenSet = true; m_nameNodes.push_back(value); return *this; }
    inline UpdateLocationHdfsRequest& AddNameNodes(HdfsNameNode&& value) { m_nameNodesHasBeenSet = true; m_nameNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline int GetBlockSize() const{ return m_blockSize; }
    inline bool BlockSizeHasBeenSet() const { return m_blockSizeHasBeenSet; }
    inline void SetBlockSize(int value) { m_blockSizeHasBeenSet = true; m_blockSize = value; }
    inline UpdateLocationHdfsRequest& WithBlockSize(int value) { SetBlockSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline int GetReplicationFactor() const{ return m_replicationFactor; }
    inline bool ReplicationFactorHasBeenSet() const { return m_replicationFactorHasBeenSet; }
    inline void SetReplicationFactor(int value) { m_replicationFactorHasBeenSet = true; m_replicationFactor = value; }
    inline UpdateLocationHdfsRequest& WithReplicationFactor(int value) { SetReplicationFactor(value); return *this;}
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
    inline UpdateLocationHdfsRequest& WithKmsKeyProviderUri(const Aws::String& value) { SetKmsKeyProviderUri(value); return *this;}
    inline UpdateLocationHdfsRequest& WithKmsKeyProviderUri(Aws::String&& value) { SetKmsKeyProviderUri(std::move(value)); return *this;}
    inline UpdateLocationHdfsRequest& WithKmsKeyProviderUri(const char* value) { SetKmsKeyProviderUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer privacy settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline const QopConfiguration& GetQopConfiguration() const{ return m_qopConfiguration; }
    inline bool QopConfigurationHasBeenSet() const { return m_qopConfigurationHasBeenSet; }
    inline void SetQopConfiguration(const QopConfiguration& value) { m_qopConfigurationHasBeenSet = true; m_qopConfiguration = value; }
    inline void SetQopConfiguration(QopConfiguration&& value) { m_qopConfigurationHasBeenSet = true; m_qopConfiguration = std::move(value); }
    inline UpdateLocationHdfsRequest& WithQopConfiguration(const QopConfiguration& value) { SetQopConfiguration(value); return *this;}
    inline UpdateLocationHdfsRequest& WithQopConfiguration(QopConfiguration&& value) { SetQopConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline const HdfsAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const HdfsAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(HdfsAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline UpdateLocationHdfsRequest& WithAuthenticationType(const HdfsAuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline UpdateLocationHdfsRequest& WithAuthenticationType(HdfsAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline const Aws::String& GetSimpleUser() const{ return m_simpleUser; }
    inline bool SimpleUserHasBeenSet() const { return m_simpleUserHasBeenSet; }
    inline void SetSimpleUser(const Aws::String& value) { m_simpleUserHasBeenSet = true; m_simpleUser = value; }
    inline void SetSimpleUser(Aws::String&& value) { m_simpleUserHasBeenSet = true; m_simpleUser = std::move(value); }
    inline void SetSimpleUser(const char* value) { m_simpleUserHasBeenSet = true; m_simpleUser.assign(value); }
    inline UpdateLocationHdfsRequest& WithSimpleUser(const Aws::String& value) { SetSimpleUser(value); return *this;}
    inline UpdateLocationHdfsRequest& WithSimpleUser(Aws::String&& value) { SetSimpleUser(std::move(value)); return *this;}
    inline UpdateLocationHdfsRequest& WithSimpleUser(const char* value) { SetSimpleUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline const Aws::String& GetKerberosPrincipal() const{ return m_kerberosPrincipal; }
    inline bool KerberosPrincipalHasBeenSet() const { return m_kerberosPrincipalHasBeenSet; }
    inline void SetKerberosPrincipal(const Aws::String& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = value; }
    inline void SetKerberosPrincipal(Aws::String&& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = std::move(value); }
    inline void SetKerberosPrincipal(const char* value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal.assign(value); }
    inline UpdateLocationHdfsRequest& WithKerberosPrincipal(const Aws::String& value) { SetKerberosPrincipal(value); return *this;}
    inline UpdateLocationHdfsRequest& WithKerberosPrincipal(Aws::String&& value) { SetKerberosPrincipal(std::move(value)); return *this;}
    inline UpdateLocationHdfsRequest& WithKerberosPrincipal(const char* value) { SetKerberosPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kerberos key table (keytab) that contains mappings between the defined
     * Kerberos principal and the encrypted keys. You can load the keytab from a file
     * by providing the file's address. If you use the CLI, it performs base64 encoding
     * for you. Otherwise, provide the base64-encoded text.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKeytab() const{ return m_kerberosKeytab; }
    inline bool KerberosKeytabHasBeenSet() const { return m_kerberosKeytabHasBeenSet; }
    inline void SetKerberosKeytab(const Aws::Utils::ByteBuffer& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = value; }
    inline void SetKerberosKeytab(Aws::Utils::ByteBuffer&& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = std::move(value); }
    inline UpdateLocationHdfsRequest& WithKerberosKeytab(const Aws::Utils::ByteBuffer& value) { SetKerberosKeytab(value); return *this;}
    inline UpdateLocationHdfsRequest& WithKerberosKeytab(Aws::Utils::ByteBuffer&& value) { SetKerberosKeytab(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>krb5.conf</code> file that contains the Kerberos configuration
     * information. You can load the <code>krb5.conf</code> file by providing the
     * file's address. If you're using the CLI, it performs the base64 encoding for
     * you. Otherwise, provide the base64-encoded text.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKrb5Conf() const{ return m_kerberosKrb5Conf; }
    inline bool KerberosKrb5ConfHasBeenSet() const { return m_kerberosKrb5ConfHasBeenSet; }
    inline void SetKerberosKrb5Conf(const Aws::Utils::ByteBuffer& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = value; }
    inline void SetKerberosKrb5Conf(Aws::Utils::ByteBuffer&& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = std::move(value); }
    inline UpdateLocationHdfsRequest& WithKerberosKrb5Conf(const Aws::Utils::ByteBuffer& value) { SetKerberosKrb5Conf(value); return *this;}
    inline UpdateLocationHdfsRequest& WithKerberosKrb5Conf(Aws::Utils::ByteBuffer&& value) { SetKerberosKrb5Conf(std::move(value)); return *this;}
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
    inline UpdateLocationHdfsRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline UpdateLocationHdfsRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline UpdateLocationHdfsRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    inline UpdateLocationHdfsRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }
    inline UpdateLocationHdfsRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

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
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
