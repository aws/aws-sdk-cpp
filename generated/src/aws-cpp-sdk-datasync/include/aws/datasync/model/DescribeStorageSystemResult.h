/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryServerConfiguration.h>
#include <aws/datasync/model/DiscoverySystemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/StorageSystemConnectivityStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribeStorageSystemResult
  {
  public:
    AWS_DATASYNC_API DescribeStorageSystemResult() = default;
    AWS_DATASYNC_API DescribeStorageSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeStorageSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the on-premises storage system that the discovery job looked
     * at.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const { return m_storageSystemArn; }
    template<typename StorageSystemArnT = Aws::String>
    void SetStorageSystemArn(StorageSystemArnT&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::forward<StorageSystemArnT>(value); }
    template<typename StorageSystemArnT = Aws::String>
    DescribeStorageSystemResult& WithStorageSystemArn(StorageSystemArnT&& value) { SetStorageSystemArn(std::forward<StorageSystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server name and network port required to connect with your on-premises
     * storage system's management interface.</p>
     */
    inline const DiscoveryServerConfiguration& GetServerConfiguration() const { return m_serverConfiguration; }
    template<typename ServerConfigurationT = DiscoveryServerConfiguration>
    void SetServerConfiguration(ServerConfigurationT&& value) { m_serverConfigurationHasBeenSet = true; m_serverConfiguration = std::forward<ServerConfigurationT>(value); }
    template<typename ServerConfigurationT = DiscoveryServerConfiguration>
    DescribeStorageSystemResult& WithServerConfiguration(ServerConfigurationT&& value) { SetServerConfiguration(std::forward<ServerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of on-premises storage system.</p>  <p>DataSync Discovery
     * currently only supports NetApp Fabric-Attached Storage (FAS) and All Flash FAS
     * (AFF) systems running ONTAP 9.7 or later. </p> 
     */
    inline DiscoverySystemType GetSystemType() const { return m_systemType; }
    inline void SetSystemType(DiscoverySystemType value) { m_systemTypeHasBeenSet = true; m_systemType = value; }
    inline DescribeStorageSystemResult& WithSystemType(DiscoverySystemType value) { SetSystemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the DataSync agent that connects to and reads from your
     * on-premises storage system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    DescribeStorageSystemResult& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    DescribeStorageSystemResult& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name that you gave your on-premises storage system when adding it to
     * DataSync Discovery.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeStorageSystemResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the connectivity error that the DataSync agent is encountering with
     * your on-premises storage system.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeStorageSystemResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether your DataSync agent can connect to your on-premises storage
     * system.</p>
     */
    inline StorageSystemConnectivityStatus GetConnectivityStatus() const { return m_connectivityStatus; }
    inline void SetConnectivityStatus(StorageSystemConnectivityStatus value) { m_connectivityStatusHasBeenSet = true; m_connectivityStatus = value; }
    inline DescribeStorageSystemResult& WithConnectivityStatus(StorageSystemConnectivityStatus value) { SetConnectivityStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon CloudWatch log group that's used to monitor and log
     * discovery job events.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const { return m_cloudWatchLogGroupArn; }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    void SetCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::forward<CloudWatchLogGroupArnT>(value); }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    DescribeStorageSystemResult& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when you added the on-premises storage system to DataSync
     * Discovery.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeStorageSystemResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the secret that stores your on-premises storage system's
     * credentials. DataSync Discovery stores these credentials in <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-configure-storage.html#discovery-add-storage">Secrets
     * Manager</a>.</p>
     */
    inline const Aws::String& GetSecretsManagerArn() const { return m_secretsManagerArn; }
    template<typename SecretsManagerArnT = Aws::String>
    void SetSecretsManagerArn(SecretsManagerArnT&& value) { m_secretsManagerArnHasBeenSet = true; m_secretsManagerArn = std::forward<SecretsManagerArnT>(value); }
    template<typename SecretsManagerArnT = Aws::String>
    DescribeStorageSystemResult& WithSecretsManagerArn(SecretsManagerArnT&& value) { SetSecretsManagerArn(std::forward<SecretsManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStorageSystemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;

    DiscoveryServerConfiguration m_serverConfiguration;
    bool m_serverConfigurationHasBeenSet = false;

    DiscoverySystemType m_systemType{DiscoverySystemType::NOT_SET};
    bool m_systemTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    StorageSystemConnectivityStatus m_connectivityStatus{StorageSystemConnectivityStatus::NOT_SET};
    bool m_connectivityStatusHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_secretsManagerArn;
    bool m_secretsManagerArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
