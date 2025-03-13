/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/RealTimeAlertRuleType.h>
#include <aws/chime-sdk-media-pipelines/model/KeywordMatchConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/SentimentConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/IssueDetectionConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Specifies the words or phrases that trigger an alert.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/RealTimeAlertRule">AWS
   * API Reference</a></p>
   */
  class RealTimeAlertRule
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertRule() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API RealTimeAlertRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of alert rule.</p>
     */
    inline RealTimeAlertRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RealTimeAlertRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RealTimeAlertRule& WithType(RealTimeAlertRuleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings for matching the keywords in a real-time alert
     * rule.</p>
     */
    inline const KeywordMatchConfiguration& GetKeywordMatchConfiguration() const { return m_keywordMatchConfiguration; }
    inline bool KeywordMatchConfigurationHasBeenSet() const { return m_keywordMatchConfigurationHasBeenSet; }
    template<typename KeywordMatchConfigurationT = KeywordMatchConfiguration>
    void SetKeywordMatchConfiguration(KeywordMatchConfigurationT&& value) { m_keywordMatchConfigurationHasBeenSet = true; m_keywordMatchConfiguration = std::forward<KeywordMatchConfigurationT>(value); }
    template<typename KeywordMatchConfigurationT = KeywordMatchConfiguration>
    RealTimeAlertRule& WithKeywordMatchConfiguration(KeywordMatchConfigurationT&& value) { SetKeywordMatchConfiguration(std::forward<KeywordMatchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings for predicting sentiment in a real-time alert
     * rule.</p>
     */
    inline const SentimentConfiguration& GetSentimentConfiguration() const { return m_sentimentConfiguration; }
    inline bool SentimentConfigurationHasBeenSet() const { return m_sentimentConfigurationHasBeenSet; }
    template<typename SentimentConfigurationT = SentimentConfiguration>
    void SetSentimentConfiguration(SentimentConfigurationT&& value) { m_sentimentConfigurationHasBeenSet = true; m_sentimentConfiguration = std::forward<SentimentConfigurationT>(value); }
    template<typename SentimentConfigurationT = SentimentConfiguration>
    RealTimeAlertRule& WithSentimentConfiguration(SentimentConfigurationT&& value) { SetSentimentConfiguration(std::forward<SentimentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the issue detection settings for a real-time alert rule.</p>
     */
    inline const IssueDetectionConfiguration& GetIssueDetectionConfiguration() const { return m_issueDetectionConfiguration; }
    inline bool IssueDetectionConfigurationHasBeenSet() const { return m_issueDetectionConfigurationHasBeenSet; }
    template<typename IssueDetectionConfigurationT = IssueDetectionConfiguration>
    void SetIssueDetectionConfiguration(IssueDetectionConfigurationT&& value) { m_issueDetectionConfigurationHasBeenSet = true; m_issueDetectionConfiguration = std::forward<IssueDetectionConfigurationT>(value); }
    template<typename IssueDetectionConfigurationT = IssueDetectionConfiguration>
    RealTimeAlertRule& WithIssueDetectionConfiguration(IssueDetectionConfigurationT&& value) { SetIssueDetectionConfiguration(std::forward<IssueDetectionConfigurationT>(value)); return *this;}
    ///@}
  private:

    RealTimeAlertRuleType m_type{RealTimeAlertRuleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    KeywordMatchConfiguration m_keywordMatchConfiguration;
    bool m_keywordMatchConfigurationHasBeenSet = false;

    SentimentConfiguration m_sentimentConfiguration;
    bool m_sentimentConfigurationHasBeenSet = false;

    IssueDetectionConfiguration m_issueDetectionConfiguration;
    bool m_issueDetectionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
