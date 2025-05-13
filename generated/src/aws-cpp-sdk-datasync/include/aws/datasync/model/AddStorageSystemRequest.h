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
    AWS_DATASYNC_API AddStorageSystemRequest() = default;

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
    inline const DiscoveryServerConfiguration& GetServerConfiguration() const { return m_serverConfiguration; }
    inline bool ServerConfigurationHasBeenSet() const { return m_serverConfigurationHasBeenSet; }
    template<typename ServerConfigurationT = DiscoveryServerConfiguration>
    void SetServerConfiguration(ServerConfigurationT&& value) { m_serverConfigurationHasBeenSet = true; m_serverConfiguration = std::forward<ServerConfigurationT>(value); }
    template<typename ServerConfigurationT = DiscoveryServerConfiguration>
    AddStorageSystemRequest& WithServerConfiguration(ServerConfigurationT&& value) { SetServerConfiguration(std::forward<ServerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of on-premises storage system that you want DataSync
     * Discovery to collect information about.</p>  <p>DataSync Discovery
     * currently supports NetApp Fabric-Attached Storage (FAS) and All Flash FAS (AFF)
     * systems running ONTAP 9.7 or later.</p> 
     */
    inline DiscoverySystemType GetSystemType() const { return m_systemType; }
    inline bool SystemTypeHasBeenSet() const { return m_systemTypeHasBeenSet; }
    inline void SetSystemType(DiscoverySystemType value) { m_systemTypeHasBeenSet = true; m_systemType = value; }
    inline AddStorageSystemRequest& WithSystemType(DiscoverySystemType value) { SetSystemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that connects
     * to and reads from your on-premises storage system's management interface. You
     * can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    AddStorageSystemRequest& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    AddStorageSystemRequest& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
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
    AddStorageSystemRequest& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * on-premises storage system.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    AddStorageSystemRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    AddStorageSystemRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    AddStorageSystemRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a client token to make sure requests with this API operation are
     * idempotent. If you don't specify a client token, DataSync generates one for you
     * automatically.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AddStorageSystemRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    AddStorageSystemRequest& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}
  private:

    DiscoveryServerConfiguration m_serverConfiguration;
    bool m_serverConfigurationHasBeenSet = false;

    DiscoverySystemType m_systemType{DiscoverySystemType::NOT_SET};
    bool m_systemTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Credentials m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
