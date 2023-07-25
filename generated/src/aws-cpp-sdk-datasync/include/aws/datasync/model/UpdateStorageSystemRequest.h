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
    AWS_DATASYNC_API UpdateStorageSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStorageSystem"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }

    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline bool StorageSystemArnHasBeenSet() const { return m_storageSystemArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = value; }

    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn.assign(value); }

    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline UpdateStorageSystemRequest& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline UpdateStorageSystemRequest& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the on-premises storage system that you want
     * reconfigure.</p>
     */
    inline UpdateStorageSystemRequest& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}


    /**
     * <p>Specifies the server name and network port required to connect with your
     * on-premises storage system's management interface.</p>
     */
    inline const DiscoveryServerConfiguration& GetServerConfiguration() const{ return m_serverConfiguration; }

    /**
     * <p>Specifies the server name and network port required to connect with your
     * on-premises storage system's management interface.</p>
     */
    inline bool ServerConfigurationHasBeenSet() const { return m_serverConfigurationHasBeenSet; }

    /**
     * <p>Specifies the server name and network port required to connect with your
     * on-premises storage system's management interface.</p>
     */
    inline void SetServerConfiguration(const DiscoveryServerConfiguration& value) { m_serverConfigurationHasBeenSet = true; m_serverConfiguration = value; }

    /**
     * <p>Specifies the server name and network port required to connect with your
     * on-premises storage system's management interface.</p>
     */
    inline void SetServerConfiguration(DiscoveryServerConfiguration&& value) { m_serverConfigurationHasBeenSet = true; m_serverConfiguration = std::move(value); }

    /**
     * <p>Specifies the server name and network port required to connect with your
     * on-premises storage system's management interface.</p>
     */
    inline UpdateStorageSystemRequest& WithServerConfiguration(const DiscoveryServerConfiguration& value) { SetServerConfiguration(value); return *this;}

    /**
     * <p>Specifies the server name and network port required to connect with your
     * on-premises storage system's management interface.</p>
     */
    inline UpdateStorageSystemRequest& WithServerConfiguration(DiscoveryServerConfiguration&& value) { SetServerConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline UpdateStorageSystemRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline UpdateStorageSystemRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline UpdateStorageSystemRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline UpdateStorageSystemRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads your on-premises storage system. You can only specify one ARN.</p>
     */
    inline UpdateStorageSystemRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }


    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline UpdateStorageSystemRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline UpdateStorageSystemRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline UpdateStorageSystemRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }

    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline UpdateStorageSystemRequest& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline UpdateStorageSystemRequest& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline UpdateStorageSystemRequest& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}


    /**
     * <p>Specifies the user name and password for accessing your on-premises storage
     * system's management interface.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Specifies the user name and password for accessing your on-premises storage
     * system's management interface.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>Specifies the user name and password for accessing your on-premises storage
     * system's management interface.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Specifies the user name and password for accessing your on-premises storage
     * system's management interface.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>Specifies the user name and password for accessing your on-premises storage
     * system's management interface.</p>
     */
    inline UpdateStorageSystemRequest& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies the user name and password for accessing your on-premises storage
     * system's management interface.</p>
     */
    inline UpdateStorageSystemRequest& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}

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
