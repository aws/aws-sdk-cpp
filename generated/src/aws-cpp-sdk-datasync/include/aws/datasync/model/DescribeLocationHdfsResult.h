/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/QopConfiguration.h>
#include <aws/datasync/model/HdfsAuthenticationType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/HdfsNameNode.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  class DescribeLocationHdfsResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationHdfsResult();
    AWS_DATASYNC_API DescribeLocationHdfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationHdfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the HDFS cluster location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the HDFS cluster location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the HDFS cluster location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the HDFS cluster location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the HDFS cluster location.</p>
     */
    inline DescribeLocationHdfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the HDFS cluster location.</p>
     */
    inline DescribeLocationHdfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the HDFS cluster location.</p>
     */
    inline DescribeLocationHdfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URI of the HDFS cluster location.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URI of the HDFS cluster location.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URI of the HDFS cluster location.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URI of the HDFS cluster location.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URI of the HDFS cluster location.</p>
     */
    inline DescribeLocationHdfsResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URI of the HDFS cluster location.</p>
     */
    inline DescribeLocationHdfsResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the HDFS cluster location.</p>
     */
    inline DescribeLocationHdfsResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The NameNode that manage the HDFS namespace. </p>
     */
    inline const Aws::Vector<HdfsNameNode>& GetNameNodes() const{ return m_nameNodes; }

    /**
     * <p>The NameNode that manage the HDFS namespace. </p>
     */
    inline void SetNameNodes(const Aws::Vector<HdfsNameNode>& value) { m_nameNodes = value; }

    /**
     * <p>The NameNode that manage the HDFS namespace. </p>
     */
    inline void SetNameNodes(Aws::Vector<HdfsNameNode>&& value) { m_nameNodes = std::move(value); }

    /**
     * <p>The NameNode that manage the HDFS namespace. </p>
     */
    inline DescribeLocationHdfsResult& WithNameNodes(const Aws::Vector<HdfsNameNode>& value) { SetNameNodes(value); return *this;}

    /**
     * <p>The NameNode that manage the HDFS namespace. </p>
     */
    inline DescribeLocationHdfsResult& WithNameNodes(Aws::Vector<HdfsNameNode>&& value) { SetNameNodes(std::move(value)); return *this;}

    /**
     * <p>The NameNode that manage the HDFS namespace. </p>
     */
    inline DescribeLocationHdfsResult& AddNameNodes(const HdfsNameNode& value) { m_nameNodes.push_back(value); return *this; }

    /**
     * <p>The NameNode that manage the HDFS namespace. </p>
     */
    inline DescribeLocationHdfsResult& AddNameNodes(HdfsNameNode&& value) { m_nameNodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline int GetBlockSize() const{ return m_blockSize; }

    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline void SetBlockSize(int value) { m_blockSize = value; }

    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline DescribeLocationHdfsResult& WithBlockSize(int value) { SetBlockSize(value); return *this;}


    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline int GetReplicationFactor() const{ return m_replicationFactor; }

    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline void SetReplicationFactor(int value) { m_replicationFactor = value; }

    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline DescribeLocationHdfsResult& WithReplicationFactor(int value) { SetReplicationFactor(value); return *this;}


    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline const Aws::String& GetKmsKeyProviderUri() const{ return m_kmsKeyProviderUri; }

    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline void SetKmsKeyProviderUri(const Aws::String& value) { m_kmsKeyProviderUri = value; }

    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline void SetKmsKeyProviderUri(Aws::String&& value) { m_kmsKeyProviderUri = std::move(value); }

    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline void SetKmsKeyProviderUri(const char* value) { m_kmsKeyProviderUri.assign(value); }

    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline DescribeLocationHdfsResult& WithKmsKeyProviderUri(const Aws::String& value) { SetKmsKeyProviderUri(value); return *this;}

    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline DescribeLocationHdfsResult& WithKmsKeyProviderUri(Aws::String&& value) { SetKmsKeyProviderUri(std::move(value)); return *this;}

    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline DescribeLocationHdfsResult& WithKmsKeyProviderUri(const char* value) { SetKmsKeyProviderUri(value); return *this;}


    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer protection settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline const QopConfiguration& GetQopConfiguration() const{ return m_qopConfiguration; }

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer protection settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline void SetQopConfiguration(const QopConfiguration& value) { m_qopConfiguration = value; }

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer protection settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline void SetQopConfiguration(QopConfiguration&& value) { m_qopConfiguration = std::move(value); }

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer protection settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline DescribeLocationHdfsResult& WithQopConfiguration(const QopConfiguration& value) { SetQopConfiguration(value); return *this;}

    /**
     * <p>The Quality of Protection (QOP) configuration specifies the Remote Procedure
     * Call (RPC) and data transfer protection settings configured on the Hadoop
     * Distributed File System (HDFS) cluster. </p>
     */
    inline DescribeLocationHdfsResult& WithQopConfiguration(QopConfiguration&& value) { SetQopConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline const HdfsAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline void SetAuthenticationType(const HdfsAuthenticationType& value) { m_authenticationType = value; }

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline void SetAuthenticationType(HdfsAuthenticationType&& value) { m_authenticationType = std::move(value); }

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline DescribeLocationHdfsResult& WithAuthenticationType(const HdfsAuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline DescribeLocationHdfsResult& WithAuthenticationType(HdfsAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The user name used to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline const Aws::String& GetSimpleUser() const{ return m_simpleUser; }

    /**
     * <p>The user name used to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline void SetSimpleUser(const Aws::String& value) { m_simpleUser = value; }

    /**
     * <p>The user name used to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline void SetSimpleUser(Aws::String&& value) { m_simpleUser = std::move(value); }

    /**
     * <p>The user name used to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline void SetSimpleUser(const char* value) { m_simpleUser.assign(value); }

    /**
     * <p>The user name used to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline DescribeLocationHdfsResult& WithSimpleUser(const Aws::String& value) { SetSimpleUser(value); return *this;}

    /**
     * <p>The user name used to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline DescribeLocationHdfsResult& WithSimpleUser(Aws::String&& value) { SetSimpleUser(std::move(value)); return *this;}

    /**
     * <p>The user name used to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline DescribeLocationHdfsResult& WithSimpleUser(const char* value) { SetSimpleUser(value); return *this;}


    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline const Aws::String& GetKerberosPrincipal() const{ return m_kerberosPrincipal; }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline void SetKerberosPrincipal(const Aws::String& value) { m_kerberosPrincipal = value; }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline void SetKerberosPrincipal(Aws::String&& value) { m_kerberosPrincipal = std::move(value); }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline void SetKerberosPrincipal(const char* value) { m_kerberosPrincipal.assign(value); }

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline DescribeLocationHdfsResult& WithKerberosPrincipal(const Aws::String& value) { SetKerberosPrincipal(value); return *this;}

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline DescribeLocationHdfsResult& WithKerberosPrincipal(Aws::String&& value) { SetKerberosPrincipal(std::move(value)); return *this;}

    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline DescribeLocationHdfsResult& WithKerberosPrincipal(const char* value) { SetKerberosPrincipal(value); return *this;}


    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline DescribeLocationHdfsResult& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline DescribeLocationHdfsResult& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline DescribeLocationHdfsResult& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline DescribeLocationHdfsResult& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the agents that are used to connect to the HDFS cluster. </p>
     */
    inline DescribeLocationHdfsResult& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }


    /**
     * <p>The time that the HDFS location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the HDFS location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the HDFS location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the HDFS location was created.</p>
     */
    inline DescribeLocationHdfsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the HDFS location was created.</p>
     */
    inline DescribeLocationHdfsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    Aws::Vector<HdfsNameNode> m_nameNodes;

    int m_blockSize;

    int m_replicationFactor;

    Aws::String m_kmsKeyProviderUri;

    QopConfiguration m_qopConfiguration;

    HdfsAuthenticationType m_authenticationType;

    Aws::String m_simpleUser;

    Aws::String m_kerberosPrincipal;

    Aws::Vector<Aws::String> m_agentArns;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
