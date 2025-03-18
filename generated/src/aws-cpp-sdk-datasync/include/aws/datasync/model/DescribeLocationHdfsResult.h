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
    AWS_DATASYNC_API DescribeLocationHdfsResult() = default;
    AWS_DATASYNC_API DescribeLocationHdfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationHdfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the HDFS location.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    DescribeLocationHdfsResult& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the HDFS location.</p>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    DescribeLocationHdfsResult& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NameNode that manages the HDFS namespace. </p>
     */
    inline const Aws::Vector<HdfsNameNode>& GetNameNodes() const { return m_nameNodes; }
    template<typename NameNodesT = Aws::Vector<HdfsNameNode>>
    void SetNameNodes(NameNodesT&& value) { m_nameNodesHasBeenSet = true; m_nameNodes = std::forward<NameNodesT>(value); }
    template<typename NameNodesT = Aws::Vector<HdfsNameNode>>
    DescribeLocationHdfsResult& WithNameNodes(NameNodesT&& value) { SetNameNodes(std::forward<NameNodesT>(value)); return *this;}
    template<typename NameNodesT = HdfsNameNode>
    DescribeLocationHdfsResult& AddNameNodes(NameNodesT&& value) { m_nameNodesHasBeenSet = true; m_nameNodes.emplace_back(std::forward<NameNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the data blocks to write into the HDFS cluster. </p>
     */
    inline int GetBlockSize() const { return m_blockSize; }
    inline void SetBlockSize(int value) { m_blockSizeHasBeenSet = true; m_blockSize = value; }
    inline DescribeLocationHdfsResult& WithBlockSize(int value) { SetBlockSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of DataNodes to replicate the data to when writing to the HDFS
     * cluster. </p>
     */
    inline int GetReplicationFactor() const { return m_replicationFactor; }
    inline void SetReplicationFactor(int value) { m_replicationFactorHasBeenSet = true; m_replicationFactor = value; }
    inline DescribeLocationHdfsResult& WithReplicationFactor(int value) { SetReplicationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URI of the HDFS cluster's Key Management Server (KMS). </p>
     */
    inline const Aws::String& GetKmsKeyProviderUri() const { return m_kmsKeyProviderUri; }
    template<typename KmsKeyProviderUriT = Aws::String>
    void SetKmsKeyProviderUri(KmsKeyProviderUriT&& value) { m_kmsKeyProviderUriHasBeenSet = true; m_kmsKeyProviderUri = std::forward<KmsKeyProviderUriT>(value); }
    template<typename KmsKeyProviderUriT = Aws::String>
    DescribeLocationHdfsResult& WithKmsKeyProviderUri(KmsKeyProviderUriT&& value) { SetKmsKeyProviderUri(std::forward<KmsKeyProviderUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Quality of Protection (QOP) configuration, which specifies the Remote
     * Procedure Call (RPC) and data transfer protection settings configured on the
     * HDFS cluster. </p>
     */
    inline const QopConfiguration& GetQopConfiguration() const { return m_qopConfiguration; }
    template<typename QopConfigurationT = QopConfiguration>
    void SetQopConfiguration(QopConfigurationT&& value) { m_qopConfigurationHasBeenSet = true; m_qopConfiguration = std::forward<QopConfigurationT>(value); }
    template<typename QopConfigurationT = QopConfiguration>
    DescribeLocationHdfsResult& WithQopConfiguration(QopConfigurationT&& value) { SetQopConfiguration(std::forward<QopConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication used to determine the identity of the user. </p>
     */
    inline HdfsAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline void SetAuthenticationType(HdfsAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline DescribeLocationHdfsResult& WithAuthenticationType(HdfsAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name to identify the client on the host operating system. This
     * parameter is used if the <code>AuthenticationType</code> is defined as
     * <code>SIMPLE</code>.</p>
     */
    inline const Aws::String& GetSimpleUser() const { return m_simpleUser; }
    template<typename SimpleUserT = Aws::String>
    void SetSimpleUser(SimpleUserT&& value) { m_simpleUserHasBeenSet = true; m_simpleUser = std::forward<SimpleUserT>(value); }
    template<typename SimpleUserT = Aws::String>
    DescribeLocationHdfsResult& WithSimpleUser(SimpleUserT&& value) { SetSimpleUser(std::forward<SimpleUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kerberos principal with access to the files and folders on the HDFS
     * cluster. This parameter is used if the <code>AuthenticationType</code> is
     * defined as <code>KERBEROS</code>.</p>
     */
    inline const Aws::String& GetKerberosPrincipal() const { return m_kerberosPrincipal; }
    template<typename KerberosPrincipalT = Aws::String>
    void SetKerberosPrincipal(KerberosPrincipalT&& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = std::forward<KerberosPrincipalT>(value); }
    template<typename KerberosPrincipalT = Aws::String>
    DescribeLocationHdfsResult& WithKerberosPrincipal(KerberosPrincipalT&& value) { SetKerberosPrincipal(std::forward<KerberosPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the DataSync agents that can connect with your HDFS cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    DescribeLocationHdfsResult& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    DescribeLocationHdfsResult& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the HDFS location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeLocationHdfsResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLocationHdfsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::Vector<HdfsNameNode> m_nameNodes;
    bool m_nameNodesHasBeenSet = false;

    int m_blockSize{0};
    bool m_blockSizeHasBeenSet = false;

    int m_replicationFactor{0};
    bool m_replicationFactorHasBeenSet = false;

    Aws::String m_kmsKeyProviderUri;
    bool m_kmsKeyProviderUriHasBeenSet = false;

    QopConfiguration m_qopConfiguration;
    bool m_qopConfigurationHasBeenSet = false;

    HdfsAuthenticationType m_authenticationType{HdfsAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_simpleUser;
    bool m_simpleUserHasBeenSet = false;

    Aws::String m_kerberosPrincipal;
    bool m_kerberosPrincipalHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
