/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/aiops/model/EncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/aiops/model/CrossAccountConfiguration.h>
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
namespace AIOps
{
namespace Model
{
  class GetInvestigationGroupResult
  {
  public:
    AWS_AIOPS_API GetInvestigationGroupResult() = default;
    AWS_AIOPS_API GetInvestigationGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AIOPS_API GetInvestigationGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the user who created the investigation group.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetInvestigationGroupResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the investigation group was created.</p>
     */
    inline long long GetCreatedAt() const { return m_createdAt; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline GetInvestigationGroupResult& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user who created the investigation group.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    GetInvestigationGroupResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the investigation group was most recently
     * modified.</p>
     */
    inline long long GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline void SetLastModifiedAt(long long value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }
    inline GetInvestigationGroupResult& WithLastModifiedAt(long long value) { SetLastModifiedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the investigation group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetInvestigationGroupResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the investigation group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetInvestigationGroupResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that the investigation group uses for permissions to
     * gather data.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetInvestigationGroupResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the customer managed KMS key that the investigation group uses to
     * encrypt data, if there is one. If not, the investigation group uses an Amazon
     * Web Services key to encrypt the data.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    GetInvestigationGroupResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how long that investigation data is kept.</p>
     */
    inline long long GetRetentionInDays() const { return m_retentionInDays; }
    inline void SetRetentionInDays(long long value) { m_retentionInDaysHasBeenSet = true; m_retentionInDays = value; }
    inline GetInvestigationGroupResult& WithRetentionInDays(long long value) { SetRetentionInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure is a string array. The first string is the ARN of a Amazon SNS
     * topic. The array of strings display the ARNs of chat applications configurations
     * that are associated with that topic. For more information about these
     * configuration ARNs, see <a
     * href="https://docs.aws.amazon.com/chatbot/latest/adminguide/getting-started.html">Getting
     * started with Amazon Q in chat applications</a> and <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awschatbot.html#awschatbot-resources-for-iam-policies">Resource
     * type defined by Amazon Web Services Chatbot</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetChatbotNotificationChannel() const { return m_chatbotNotificationChannel; }
    template<typename ChatbotNotificationChannelT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetChatbotNotificationChannel(ChatbotNotificationChannelT&& value) { m_chatbotNotificationChannelHasBeenSet = true; m_chatbotNotificationChannel = std::forward<ChatbotNotificationChannelT>(value); }
    template<typename ChatbotNotificationChannelT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    GetInvestigationGroupResult& WithChatbotNotificationChannel(ChatbotNotificationChannelT&& value) { SetChatbotNotificationChannel(std::forward<ChatbotNotificationChannelT>(value)); return *this;}
    template<typename ChatbotNotificationChannelKeyT = Aws::String, typename ChatbotNotificationChannelValueT = Aws::Vector<Aws::String>>
    GetInvestigationGroupResult& AddChatbotNotificationChannel(ChatbotNotificationChannelKeyT&& key, ChatbotNotificationChannelValueT&& value) {
      m_chatbotNotificationChannelHasBeenSet = true; m_chatbotNotificationChannel.emplace(std::forward<ChatbotNotificationChannelKeyT>(key), std::forward<ChatbotNotificationChannelValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Displays the custom tag keys for custom applications in your system that you
     * have specified in the investigation group. Resource tags help CloudWatch
     * investigations narrow the search space when it is unable to discover definite
     * relationships between resources. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyBoundaries() const { return m_tagKeyBoundaries; }
    template<typename TagKeyBoundariesT = Aws::Vector<Aws::String>>
    void SetTagKeyBoundaries(TagKeyBoundariesT&& value) { m_tagKeyBoundariesHasBeenSet = true; m_tagKeyBoundaries = std::forward<TagKeyBoundariesT>(value); }
    template<typename TagKeyBoundariesT = Aws::Vector<Aws::String>>
    GetInvestigationGroupResult& WithTagKeyBoundaries(TagKeyBoundariesT&& value) { SetTagKeyBoundaries(std::forward<TagKeyBoundariesT>(value)); return *this;}
    template<typename TagKeyBoundariesT = Aws::String>
    GetInvestigationGroupResult& AddTagKeyBoundaries(TagKeyBoundariesT&& value) { m_tagKeyBoundariesHasBeenSet = true; m_tagKeyBoundaries.emplace_back(std::forward<TagKeyBoundariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether CloudWatch investigationshas access to change events that
     * are recorded by CloudTrail.</p>
     */
    inline bool GetIsCloudTrailEventHistoryEnabled() const { return m_isCloudTrailEventHistoryEnabled; }
    inline void SetIsCloudTrailEventHistoryEnabled(bool value) { m_isCloudTrailEventHistoryEnabledHasBeenSet = true; m_isCloudTrailEventHistoryEnabled = value; }
    inline GetInvestigationGroupResult& WithIsCloudTrailEventHistoryEnabled(bool value) { SetIsCloudTrailEventHistoryEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the <code>AWSAccountId</code> of the accounts configured for
     * cross-account access and the results of the last scan performed on each
     * account.</p>
     */
    inline const Aws::Vector<CrossAccountConfiguration>& GetCrossAccountConfigurations() const { return m_crossAccountConfigurations; }
    template<typename CrossAccountConfigurationsT = Aws::Vector<CrossAccountConfiguration>>
    void SetCrossAccountConfigurations(CrossAccountConfigurationsT&& value) { m_crossAccountConfigurationsHasBeenSet = true; m_crossAccountConfigurations = std::forward<CrossAccountConfigurationsT>(value); }
    template<typename CrossAccountConfigurationsT = Aws::Vector<CrossAccountConfiguration>>
    GetInvestigationGroupResult& WithCrossAccountConfigurations(CrossAccountConfigurationsT&& value) { SetCrossAccountConfigurations(std::forward<CrossAccountConfigurationsT>(value)); return *this;}
    template<typename CrossAccountConfigurationsT = CrossAccountConfiguration>
    GetInvestigationGroupResult& AddCrossAccountConfigurations(CrossAccountConfigurationsT&& value) { m_crossAccountConfigurationsHasBeenSet = true; m_crossAccountConfigurations.emplace_back(std::forward<CrossAccountConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInvestigationGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    long long m_createdAt{0};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    long long m_lastModifiedAt{0};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    long long m_retentionInDays{0};
    bool m_retentionInDaysHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_chatbotNotificationChannel;
    bool m_chatbotNotificationChannelHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyBoundaries;
    bool m_tagKeyBoundariesHasBeenSet = false;

    bool m_isCloudTrailEventHistoryEnabled{false};
    bool m_isCloudTrailEventHistoryEnabledHasBeenSet = false;

    Aws::Vector<CrossAccountConfiguration> m_crossAccountConfigurations;
    bool m_crossAccountConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AIOps
} // namespace Aws
