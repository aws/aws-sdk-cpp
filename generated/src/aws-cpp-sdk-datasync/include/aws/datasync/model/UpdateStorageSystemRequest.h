/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryServerConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/Credentials.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateStorageSystemRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateStorageSystemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStorageSystem"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const { return m_storageSystemArn; }
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }
    template<typename StorageSystemArnT = Aws::String>
    void SetStorageSystemArn(StorageSystemArnT&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::forward<StorageSystemArnT>(value); }
    template<typename StorageSystemArnT = Aws::String>
    UpdateStorageSystemRequest& WithStorageSystemArn(StorageSystemArnT&& value) { SetStorageSystemArn(std::forward<StorageSystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the server name and network port required to connect with your
     * on-premises storage system's management interface.</p>
     */
    inline const DiscoveryServerConfiguration& GetServerConfiguration() const { return m_serverConfiguration; }
    inline bool ServerConfigurationHasBeenSet() const { return m_serverConfigurationHasBeenSet; }
    template<typename ServerConfigurationT = DiscoveryServerConfiguration>
    void SetServerConfiguration(ServerConfigurationT&& value) { m_serverConfigurationHasBeenSet = true; m_serverConfiguration = std::forward<ServerConfigurationT>(value); }
    template<typename ServerConfigurationT = DiscoveryServerConfiguration>
    UpdateStorageSystemRequest& WithServerConfiguration(ServerConfigurationT&& value) { SetServerConfiguration(std::forward<ServerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    UpdateStorageSystemRequest& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    UpdateStorageSystemRequest& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateStorageSystemRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const { return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    void SetCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::forward<CloudWatchLogGroupArnT>(value); }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    UpdateStorageSystemRequest& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the user name and password for accessing your on-premises storage
     * system's management interface.</p>
     */
    inline const Credentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = Credentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Credentials>
    UpdateStorageSystemRequest& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;

    DiscoveryServerConfiguration m_serverConfiguration;
    bool m_serverConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
