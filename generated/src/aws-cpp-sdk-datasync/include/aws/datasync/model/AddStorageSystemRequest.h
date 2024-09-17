/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/datasync/model/DiscoveryServerConfiguration.h>
#include <aws/datasync/model/DiscoverySystemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/Credentials.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class AddStorageSystemRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API AddStorageSystemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddStorageSystem"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the server name and network port required to connect with the
     * management interface of your on-premises storage system.</p>
     */
    inline const DiscoveryServerConfiguration& GetServerConfiguration() const{ return m_serverConfiguration; }
    inline bool ServerConfigurationHasBeenSet() const { return m_serverConfigurationHasBeenSet; }
    inline void SetServerConfiguration(const DiscoveryServerConfiguration& value) { m_serverConfigurationHasBeenSet = true; m_serverConfiguration = value; }
    inline void SetServerConfiguration(DiscoveryServerConfiguration&& value) { m_serverConfigurationHasBeenSet = true; m_serverConfiguration = std::move(value); }
    inline AddStorageSystemRequest& WithServerConfiguration(const DiscoveryServerConfiguration& value) { SetServerConfiguration(value); return *this;}
    inline AddStorageSystemRequest& WithServerConfiguration(DiscoveryServerConfiguration&& value) { SetServerConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of on-premises storage system that you want DataSync
     * Discovery to collect information about.</p>  <p>DataSync Discovery
     * currently supports NetApp Fabric-Attached Storage (FAS) and All Flash FAS (AFF)
     * systems running ONTAP 9.7 or later.</p> 
     */
    inline const DiscoverySystemType& GetSystemType() const{ return m_systemType; }
    inline bool SystemTypeHasBeenSet() const { return m_systemTypeHasBeenSet; }
    inline void SetSystemType(const DiscoverySystemType& value) { m_systemTypeHasBeenSet = true; m_systemType = value; }
    inline void SetSystemType(DiscoverySystemType&& value) { m_systemTypeHasBeenSet = true; m_systemType = std::move(value); }
    inline AddStorageSystemRequest& WithSystemType(const DiscoverySystemType& value) { SetSystemType(value); return *this;}
    inline AddStorageSystemRequest& WithSystemType(DiscoverySystemType&& value) { SetSystemType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads from your on-premises storage system's management interface. You
     * can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }
    inline AddStorageSystemRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline AddStorageSystemRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline AddStorageSystemRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    inline AddStorageSystemRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }
    inline AddStorageSystemRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the Amazon CloudWatch log group for monitoring and
     * logging discovery job events.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }
    inline AddStorageSystemRequest& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}
    inline AddStorageSystemRequest& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}
    inline AddStorageSystemRequest& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * on-premises storage system.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AddStorageSystemRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}
    inline AddStorageSystemRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}
    inline AddStorageSystemRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline AddStorageSystemRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a familiar name for your on-premises storage system.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AddStorageSystemRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AddStorageSystemRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AddStorageSystemRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline AddStorageSystemRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AddStorageSystemRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AddStorageSystemRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the user name and password for accessing your on-premises storage
     * system's management interface.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const Credentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(Credentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline AddStorageSystemRequest& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}
    inline AddStorageSystemRequest& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}
    ///@}
  private:

    DiscoveryServerConfiguration m_serverConfiguration;
    bool m_serverConfigurationHasBeenSet = false;

    DiscoverySystemType m_systemType;
    bool m_systemTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
