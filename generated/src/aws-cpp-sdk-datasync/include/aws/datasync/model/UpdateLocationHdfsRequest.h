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


    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline UpdateLocationHdfsRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline UpdateLocationHdfsRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source HDFS cluster location.</p>
     */
    inline UpdateLocationHdfsRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline UpdateLocationHdfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline UpdateLocationHdfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>A subdirectory in the HDFS cluster. This subdirectory is used to read data
     * from or write data to the HDFS cluster.</p>
     */
    inline UpdateLocationHdfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline const Aws::Vector<HdfsNameNode>& GetNameNodes() const{ return m_nameNodes; }

    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline bool NameNodesHasBeenSet() const { return m_nameNodesHasBeenSet; }

    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline void SetNameNodes(const Aws::Vector<HdfsNameNode>& value) { m_nameNodesHasBeenSet = true; m_nameNodes = value; }

    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline void SetNameNodes(Aws::Vector<HdfsNameNode>&& value) { m_nameNodesHasBeenSet = true; m_nameNodes = std::move(value); }

    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline UpdateLocationHdfsRequest& WithNameNodes(const Aws::Vector<HdfsNameNode>& value) { SetNameNodes(value); return *this;}

    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline UpdateLocationHdfsRequest& WithNameNodes(Aws::Vector<HdfsNameNode>&& value) { SetNameNodes(std::move(value)); return *this;}

    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline UpdateLocationHdfsRequest& AddNameNodes(const HdfsNameNode& value) { m_nameNodesHasBeenSet = true; m_nameNodes.push_back(value); return *this; }

    /**
     * <p>The NameNode that manages the HDFS namespace. The NameNode performs
     * operations such as opening, closing, and renaming files and directories. The
     * NameNode contains the information to map blocks of data to the DataNodes. You
     * can use only one NameNode.</p>
     */
    inline UpdateLocationHdfsRequest& AddNameNodes(HdfsNameNode&& value) { m_nameNodesHasBeenSet = true; m_nameNodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline int GetBlockSize() const{ return m_blockSize; }

    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline bool BlockSizeHasBeenSet() const { return m_blockSizeHasBeenSet; }

    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline void SetBlockSize(int value) { m_blockSizeHasBeenSet = true; m_blockSize = value; }

    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithBlockSize(int value) { SetBlockSize(value); return *this;}


    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline int GetReplicationFactor() const{ return m_replicationFactor; }

    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline bool ReplicationFactorHasBeenSet() const { return m_replicationFactorHasBeenSet; }

    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline void SetReplicationFactor(int value) { m_replicationFactorHasBeenSet = true; m_replicationFactor = value; }

    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithReplicationFactor(int value) { SetReplicationFactor(value); return *this;}


    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline const Aws::String& GetKmsKeyProviderUri() const{ return m_kmsKeyProviderUri; }

    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline bool KmsKeyProviderUriHasBeenSet() const { return m_kmsKeyProviderUriHasBeenSet; }

    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline void SetKmsKeyProviderUri(const Aws::String& value) { m_kmsKeyProviderUriHasBeenSet = true; m_kmsKeyProviderUri = value; }

    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline void SetKmsKeyProviderUri(Aws::String&& value) { m_kmsKeyProviderUriHasBeenSet = true; m_kmsKeyProviderUri = std::move(value); }

    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline void SetKmsKeyProviderUri(const char* value) { m_kmsKeyProviderUriHasBeenSet = true; m_kmsKeyProviderUri.assign(value); }

    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline UpdateLocationHdfsRequest& WithKmsKeyProviderUri(const Aws::String& value) { SetKmsKeyProviderUri(value); return *this;}

    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline UpdateLocationHdfsRequest& WithKmsKeyProviderUri(Aws::String&& value) { SetKmsKeyProviderUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline UpdateLocationHdfsRequest& WithKmsKeyProviderUri(const char* value) { SetKmsKeyProviderUri(value); return *this;}


    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer privacy settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline const QopConfiguration& GetQopConfiguration() const{ return m_qopConfiguration; }

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer privacy settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline bool QopConfigurationHasBeenSet() const { return m_qopConfigurationHasBeenSet; }

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer privacy settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline void SetQopConfiguration(const QopConfiguration& value) { m_qopConfigurationHasBeenSet = true; m_qopConfiguration = value; }

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer privacy settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline void SetQopConfiguration(QopConfiguration&& value) { m_qopConfigurationHasBeenSet = true; m_qopConfiguration = std::move(value); }

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer privacy settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithQopConfiguration(const QopConfiguration& value) { SetQopConfiguration(value); return *this;}

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer privacy settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithQopConfiguration(QopConfiguration&& value) { SetQopConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline const HdfsAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline void SetAuthenticationType(const HdfsAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline void SetAuthenticationType(HdfsAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline UpdateLocationHdfsRequest& WithAuthenticationType(const HdfsAuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline UpdateLocationHdfsRequest& WithAuthenticationType(HdfsAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline const Aws::String& GetSimpleUser() const{ return m_simpleUser; }

    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline bool SimpleUserHasBeenSet() const { return m_simpleUserHasBeenSet; }

    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline void SetSimpleUser(const Aws::String& value) { m_simpleUserHasBeenSet = true; m_simpleUser = value; }

    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline void SetSimpleUser(Aws::String&& value) { m_simpleUserHasBeenSet = true; m_simpleUser = std::move(value); }

    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline void SetSimpleUser(const char* value) { m_simpleUserHasBeenSet = true; m_simpleUser.assign(value); }

    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline UpdateLocationHdfsRequest& WithSimpleUser(const Aws::String& value) { SetSimpleUser(value); return *this;}

    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline UpdateLocationHdfsRequest& WithSimpleUser(Aws::String&& value) { SetSimpleUser(std::move(value)); return *this;}

    /**
     * <p>The user name used to identify the client on the host operating system.</p>
     */
    inline UpdateLocationHdfsRequest& WithSimpleUser(const char* value) { SetSimpleUser(value); return *this;}


    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline const Aws::String& GetKerberosPrincipal() const{ return m_kerberosPrincipal; }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline bool KerberosPrincipalHasBeenSet() const { return m_kerberosPrincipalHasBeenSet; }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline void SetKerberosPrincipal(const Aws::String& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = value; }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline void SetKerberosPrincipal(Aws::String&& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = std::move(value); }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline void SetKerberosPrincipal(const char* value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal.assign(value); }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithKerberosPrincipal(const Aws::String& value) { SetKerberosPrincipal(value); return *this;}

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithKerberosPrincipal(Aws::String&& value) { SetKerberosPrincipal(std::move(value)); return *this;}

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithKerberosPrincipal(const char* value) { SetKerberosPrincipal(value); return *this;}


    /**
     * <p>The Kerberos key table (keytab) that contains mappings between the defined
     * Kerberos principal and the encrypted keys. You can load the keytab from a file
     * by providing the file's address. If you use the CLI, it performs base64 encoding
     * for you. Otherwise, provide the base64-encoded text.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKeytab() const{ return m_kerberosKeytab; }

    /**
     * <p>The Kerberos key table (keytab) that contains mappings between the defined
     * Kerberos principal and the encrypted keys. You can load the keytab from a file
     * by providing the file's address. If you use the CLI, it performs base64 encoding
     * for you. Otherwise, provide the base64-encoded text.</p>
     */
    inline bool KerberosKeytabHasBeenSet() const { return m_kerberosKeytabHasBeenSet; }

    /**
     * <p>The Kerberos key table (keytab) that contains mappings between the defined
     * Kerberos principal and the encrypted keys. You can load the keytab from a file
     * by providing the file's address. If you use the CLI, it performs base64 encoding
     * for you. Otherwise, provide the base64-encoded text.</p>
     */
    inline void SetKerberosKeytab(const Aws::Utils::ByteBuffer& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = value; }

    /**
     * <p>The Kerberos key table (keytab) that contains mappings between the defined
     * Kerberos principal and the encrypted keys. You can load the keytab from a file
     * by providing the file's address. If you use the CLI, it performs base64 encoding
     * for you. Otherwise, provide the base64-encoded text.</p>
     */
    inline void SetKerberosKeytab(Aws::Utils::ByteBuffer&& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = std::move(value); }

    /**
     * <p>The Kerberos key table (keytab) that contains mappings between the defined
     * Kerberos principal and the encrypted keys. You can load the keytab from a file
     * by providing the file's address. If you use the CLI, it performs base64 encoding
     * for you. Otherwise, provide the base64-encoded text.</p>
     */
    inline UpdateLocationHdfsRequest& WithKerberosKeytab(const Aws::Utils::ByteBuffer& value) { SetKerberosKeytab(value); return *this;}

    /**
     * <p>The Kerberos key table (keytab) that contains mappings between the defined
     * Kerberos principal and the encrypted keys. You can load the keytab from a file
     * by providing the file's address. If you use the CLI, it performs base64 encoding
     * for you. Otherwise, provide the base64-encoded text.</p>
     */
    inline UpdateLocationHdfsRequest& WithKerberosKeytab(Aws::Utils::ByteBuffer&& value) { SetKerberosKeytab(std::move(value)); return *this;}


    /**
     * <p>The <code>krb5.conf</code> file that contains the Kerberos configuration
     * information. You can load the <code>krb5.conf</code> file by providing the
     * file's address. If you're using the CLI, it performs the base64 encoding for
     * you. Otherwise, provide the base64-encoded text.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKrb5Conf() const{ return m_kerberosKrb5Conf; }

    /**
     * <p>The <code>krb5.conf</code> file that contains the Kerberos configuration
     * information. You can load the <code>krb5.conf</code> file by providing the
     * file's address. If you're using the CLI, it performs the base64 encoding for
     * you. Otherwise, provide the base64-encoded text.</p>
     */
    inline bool KerberosKrb5ConfHasBeenSet() const { return m_kerberosKrb5ConfHasBeenSet; }

    /**
     * <p>The <code>krb5.conf</code> file that contains the Kerberos configuration
     * information. You can load the <code>krb5.conf</code> file by providing the
     * file's address. If you're using the CLI, it performs the base64 encoding for
     * you. Otherwise, provide the base64-encoded text.</p>
     */
    inline void SetKerberosKrb5Conf(const Aws::Utils::ByteBuffer& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = value; }

    /**
     * <p>The <code>krb5.conf</code> file that contains the Kerberos configuration
     * information. You can load the <code>krb5.conf</code> file by providing the
     * file's address. If you're using the CLI, it performs the base64 encoding for
     * you. Otherwise, provide the base64-encoded text.</p>
     */
    inline void SetKerberosKrb5Conf(Aws::Utils::ByteBuffer&& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = std::move(value); }

    /**
     * <p>The <code>krb5.conf</code> file that contains the Kerberos configuration
     * information. You can load the <code>krb5.conf</code> file by providing the
     * file's address. If you're using the CLI, it performs the base64 encoding for
     * you. Otherwise, provide the base64-encoded text.</p>
     */
    inline UpdateLocationHdfsRequest& WithKerberosKrb5Conf(const Aws::Utils::ByteBuffer& value) { SetKerberosKrb5Conf(value); return *this;}

    /**
     * <p>The <code>krb5.conf</code> file that contains the Kerberos configuration
     * information. You can load the <code>krb5.conf</code> file by providing the
     * file's address. If you're using the CLI, it performs the base64 encoding for
     * you. Otherwise, provide the base64-encoded text.</p>
     */
    inline UpdateLocationHdfsRequest& WithKerberosKrb5Conf(Aws::Utils::ByteBuffer&& value) { SetKerberosKrb5Conf(std::move(value)); return *this;}


    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline UpdateLocationHdfsRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline UpdateLocationHdfsRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline UpdateLocationHdfsRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline UpdateLocationHdfsRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

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
