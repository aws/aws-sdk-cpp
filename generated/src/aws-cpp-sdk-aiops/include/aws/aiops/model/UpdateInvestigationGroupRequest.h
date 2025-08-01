/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/aiops/AIOpsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/aiops/model/EncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/aiops/model/CrossAccountConfiguration.h>
#include <utility>

namespace Aws
{
namespace AIOps
{
namespace Model
{

  /**
   */
  class UpdateInvestigationGroupRequest : public AIOpsRequest
  {
  public:
    AWS_AIOPS_API UpdateInvestigationGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInvestigationGroup"; }

    AWS_AIOPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specify either the name or the ARN of the investigation group that you want
     * to modify.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateInvestigationGroupRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this field if you want to change the IAM role that CloudWatch
     * investigations will use when it gathers investigation data. To do so, specify
     * the ARN of the new role.</p> <p>The permissions in this role determine which of
     * your resources that CloudWatch investigations will have access to during
     * investigations.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Investigations-Security.html#Investigations-Security-Data">How
     * to control what data CloudWatch investigations has access to during
     * investigations</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateInvestigationGroupRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure if you want to use a customer managed KMS key to encrypt
     * your investigation data. If you omit this parameter, CloudWatch investigations
     * will use an Amazon Web Services key to encrypt the data. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Investigations-Security.html#Investigations-KMS">Encryption
     * of investigation data</a>.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    UpdateInvestigationGroupRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter the existing custom tag keys for custom applications in your system.
     * Resource tags help CloudWatch investigations narrow the search space when it is
     * unable to discover definite relationships between resources. For example, to
     * discover that an Amazon ECS service depends on an Amazon RDS database,
     * CloudWatch investigations can discover this relationship using data sources such
     * as X-Ray and CloudWatch Application Signals. However, if you haven't deployed
     * these features, CloudWatch investigations will attempt to identify possible
     * relationships. Tag boundaries can be used to narrow the resources that will be
     * discovered by CloudWatch investigations in these cases.</p> <p>You don't need to
     * enter tags created by myApplications or CloudFormation, because CloudWatch
     * investigations can automatically detect those tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyBoundaries() const { return m_tagKeyBoundaries; }
    inline bool TagKeyBoundariesHasBeenSet() const { return m_tagKeyBoundariesHasBeenSet; }
    template<typename TagKeyBoundariesT = Aws::Vector<Aws::String>>
    void SetTagKeyBoundaries(TagKeyBoundariesT&& value) { m_tagKeyBoundariesHasBeenSet = true; m_tagKeyBoundaries = std::forward<TagKeyBoundariesT>(value); }
    template<typename TagKeyBoundariesT = Aws::Vector<Aws::String>>
    UpdateInvestigationGroupRequest& WithTagKeyBoundaries(TagKeyBoundariesT&& value) { SetTagKeyBoundaries(std::forward<TagKeyBoundariesT>(value)); return *this;}
    template<typename TagKeyBoundariesT = Aws::String>
    UpdateInvestigationGroupRequest& AddTagKeyBoundaries(TagKeyBoundariesT&& value) { m_tagKeyBoundariesHasBeenSet = true; m_tagKeyBoundaries.emplace_back(std::forward<TagKeyBoundariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this structure to integrate CloudWatch investigations with chat
     * applications. This structure is a string array. For the first string, specify
     * the ARN of an Amazon SNS topic. For the array of strings, specify the ARNs of
     * one or more chat applications configurations that you want to associate with
     * that topic. For more information about these configuration ARNs, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/getting-started.html">Getting
     * started with Amazon Q in chat applications</a> and <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awschatbot.html#awschatbot-resources-for-iam-policies">Resource
     * type defined by Amazon Web Services Chatbot</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetChatbotNotificationChannel() const { return m_chatbotNotificationChannel; }
    inline bool ChatbotNotificationChannelHasBeenSet() const { return m_chatbotNotificationChannelHasBeenSet; }
    template<typename ChatbotNotificationChannelT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetChatbotNotificationChannel(ChatbotNotificationChannelT&& value) { m_chatbotNotificationChannelHasBeenSet = true; m_chatbotNotificationChannel = std::forward<ChatbotNotificationChannelT>(value); }
    template<typename ChatbotNotificationChannelT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    UpdateInvestigationGroupRequest& WithChatbotNotificationChannel(ChatbotNotificationChannelT&& value) { SetChatbotNotificationChannel(std::forward<ChatbotNotificationChannelT>(value)); return *this;}
    template<typename ChatbotNotificationChannelKeyT = Aws::String, typename ChatbotNotificationChannelValueT = Aws::Vector<Aws::String>>
    UpdateInvestigationGroupRequest& AddChatbotNotificationChannel(ChatbotNotificationChannelKeyT&& key, ChatbotNotificationChannelValueT&& value) {
      m_chatbotNotificationChannelHasBeenSet = true; m_chatbotNotificationChannel.emplace(std::forward<ChatbotNotificationChannelKeyT>(key), std::forward<ChatbotNotificationChannelValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to enable CloudWatch investigations to have access
     * to change events that are recorded by CloudTrail. The default is
     * <code>true</code>.</p>
     */
    inline bool GetIsCloudTrailEventHistoryEnabled() const { return m_isCloudTrailEventHistoryEnabled; }
    inline bool IsCloudTrailEventHistoryEnabledHasBeenSet() const { return m_isCloudTrailEventHistoryEnabledHasBeenSet; }
    inline void SetIsCloudTrailEventHistoryEnabled(bool value) { m_isCloudTrailEventHistoryEnabledHasBeenSet = true; m_isCloudTrailEventHistoryEnabled = value; }
    inline UpdateInvestigationGroupRequest& WithIsCloudTrailEventHistoryEnabled(bool value) { SetIsCloudTrailEventHistoryEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to configure cross-account access for an investigation group. It allows
     * the investigation group to access resources in other accounts. </p>
     */
    inline const Aws::Vector<CrossAccountConfiguration>& GetCrossAccountConfigurations() const { return m_crossAccountConfigurations; }
    inline bool CrossAccountConfigurationsHasBeenSet() const { return m_crossAccountConfigurationsHasBeenSet; }
    template<typename CrossAccountConfigurationsT = Aws::Vector<CrossAccountConfiguration>>
    void SetCrossAccountConfigurations(CrossAccountConfigurationsT&& value) { m_crossAccountConfigurationsHasBeenSet = true; m_crossAccountConfigurations = std::forward<CrossAccountConfigurationsT>(value); }
    template<typename CrossAccountConfigurationsT = Aws::Vector<CrossAccountConfiguration>>
    UpdateInvestigationGroupRequest& WithCrossAccountConfigurations(CrossAccountConfigurationsT&& value) { SetCrossAccountConfigurations(std::forward<CrossAccountConfigurationsT>(value)); return *this;}
    template<typename CrossAccountConfigurationsT = CrossAccountConfiguration>
    UpdateInvestigationGroupRequest& AddCrossAccountConfigurations(CrossAccountConfigurationsT&& value) { m_crossAccountConfigurationsHasBeenSet = true; m_crossAccountConfigurations.emplace_back(std::forward<CrossAccountConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyBoundaries;
    bool m_tagKeyBoundariesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_chatbotNotificationChannel;
    bool m_chatbotNotificationChannelHasBeenSet = false;

    bool m_isCloudTrailEventHistoryEnabled{false};
    bool m_isCloudTrailEventHistoryEnabledHasBeenSet = false;

    Aws::Vector<CrossAccountConfiguration> m_crossAccountConfigurations;
    bool m_crossAccountConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AIOps
} // namespace Aws
