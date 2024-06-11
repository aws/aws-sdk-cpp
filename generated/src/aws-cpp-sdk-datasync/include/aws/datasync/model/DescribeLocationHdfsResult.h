﻿/**
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


    ///@{
    /**
     * <p>The ARN of the HDFS location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }
    inline DescribeLocationHdfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline DescribeLocationHdfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline DescribeLocationHdfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the HDFS location.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }
    inline DescribeLocationHdfsResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}
    inline DescribeLocationHdfsResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}
    inline DescribeLocationHdfsResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NameNode that manages the HDFS namespace. </p>
     */
    inline const Aws::Vector<HdfsNameNode>& GetNameNodes() const{ return m_nameNodes; }
    inline void SetNameNodes(const Aws::Vector<HdfsNameNode>& value) { m_nameNodes = value; }
    inline void SetNameNodes(Aws::Vector<HdfsNameNode>&& value) { m_nameNodes = std::move(value); }
    inline DescribeLocationHdfsResult& WithNameNodes(const Aws::Vector<HdfsNameNode>& value) { SetNameNodes(value); return *this;}
    inline DescribeLocationHdfsResult& WithNameNodes(Aws::Vector<HdfsNameNode>&& value) { SetNameNodes(std::move(value)); return *this;}
    inline DescribeLocationHdfsResult& AddNameNodes(const HdfsNameNode& value) { m_nameNodes.push_back(value); return *this; }
    inline DescribeLocationHdfsResult& AddNameNodes(HdfsNameNode&& value) { m_nameNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline int GetBlockSize() const{ return m_blockSize; }
    inline void SetBlockSize(int value) { m_blockSize = value; }
    inline DescribeLocationHdfsResult& WithBlockSize(int value) { SetBlockSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline int GetReplicationFactor() const{ return m_replicationFactor; }
    inline void SetReplicationFactor(int value) { m_replicationFactor = value; }
    inline DescribeLocationHdfsResult& WithReplicationFactor(int value) { SetReplicationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline const Aws::String& GetKmsKeyProviderUri() const{ return m_kmsKeyProviderUri; }
    inline void SetKmsKeyProviderUri(const Aws::String& value) { m_kmsKeyProviderUri = value; }
    inline void SetKmsKeyProviderUri(Aws::String&& value) { m_kmsKeyProviderUri = std::move(value); }
    inline void SetKmsKeyProviderUri(const char* value) { m_kmsKeyProviderUri.assign(value); }
    inline DescribeLocationHdfsResult& WithKmsKeyProviderUri(const Aws::String& value) { SetKmsKeyProviderUri(value); return *this;}
    inline DescribeLocationHdfsResult& WithKmsKeyProviderUri(Aws::String&& value) { SetKmsKeyProviderUri(std::move(value)); return *this;}
    inline DescribeLocationHdfsResult& WithKmsKeyProviderUri(const char* value) { SetKmsKeyProviderUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Quality of Protection (QOP) configuration, which specifies the Remote
     * Procedure Call (RPC) and data transfer protection settings configured on the
     * HDFS cluster. </p>
     */
    inline const QopConfiguration& GetQopConfiguration() const{ return m_qopConfiguration; }
    inline void SetQopConfiguration(const QopConfiguration& value) { m_qopConfiguration = value; }
    inline void SetQopConfiguration(QopConfiguration&& value) { m_qopConfiguration = std::move(value); }
    inline DescribeLocationHdfsResult& WithQopConfiguration(const QopConfiguration& value) { SetQopConfiguration(value); return *this;}
    inline DescribeLocationHdfsResult& WithQopConfiguration(QopConfiguration&& value) { SetQopConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline const HdfsAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline void SetAuthenticationType(const HdfsAuthenticationType& value) { m_authenticationType = value; }
    inline void SetAuthenticationType(HdfsAuthenticationType&& value) { m_authenticationType = std::move(value); }
    inline DescribeLocationHdfsResult& WithAuthenticationType(const HdfsAuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline DescribeLocationHdfsResult& WithAuthenticationType(HdfsAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline const Aws::String& GetSimpleUser() const{ return m_simpleUser; }
    inline void SetSimpleUser(const Aws::String& value) { m_simpleUser = value; }
    inline void SetSimpleUser(Aws::String&& value) { m_simpleUser = std::move(value); }
    inline void SetSimpleUser(const char* value) { m_simpleUser.assign(value); }
    inline DescribeLocationHdfsResult& WithSimpleUser(const Aws::String& value) { SetSimpleUser(value); return *this;}
    inline DescribeLocationHdfsResult& WithSimpleUser(Aws::String&& value) { SetSimpleUser(std::move(value)); return *this;}
    inline DescribeLocationHdfsResult& WithSimpleUser(const char* value) { SetSimpleUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline const Aws::String& GetKerberosPrincipal() const{ return m_kerberosPrincipal; }
    inline void SetKerberosPrincipal(const Aws::String& value) { m_kerberosPrincipal = value; }
    inline void SetKerberosPrincipal(Aws::String&& value) { m_kerberosPrincipal = std::move(value); }
    inline void SetKerberosPrincipal(const char* value) { m_kerberosPrincipal.assign(value); }
    inline DescribeLocationHdfsResult& WithKerberosPrincipal(const Aws::String& value) { SetKerberosPrincipal(value); return *this;}
    inline DescribeLocationHdfsResult& WithKerberosPrincipal(Aws::String&& value) { SetKerberosPrincipal(std::move(value)); return *this;}
    inline DescribeLocationHdfsResult& WithKerberosPrincipal(const char* value) { SetKerberosPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the DataSync agents that can connect with your HDFS cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }
    inline DescribeLocationHdfsResult& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline DescribeLocationHdfsResult& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline DescribeLocationHdfsResult& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }
    inline DescribeLocationHdfsResult& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }
    inline DescribeLocationHdfsResult& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the HDFS location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeLocationHdfsResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeLocationHdfsResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLocationHdfsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLocationHdfsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLocationHdfsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
