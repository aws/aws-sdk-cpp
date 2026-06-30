/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/LanguageConfiguration.h>
#include <aws/connect/model/RedactionConfiguration.h>
#include <aws/connect/model/RulesConfiguration.h>
#include <aws/connect/model/SentimentConfiguration.h>
#include <aws/connect/model/SummaryConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The configuration for conversational analytics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AnalyticsConfiguration">AWS
 * API Reference</a></p>
 */
class AnalyticsConfiguration {
 public:
  AWS_CONNECT_API AnalyticsConfiguration() = default;
  AWS_CONNECT_API AnalyticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AnalyticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The language configuration for conversational analytics.</p>
   */
  inline const LanguageConfiguration& GetLanguageConfiguration() const { return m_languageConfiguration; }
  inline bool LanguageConfigurationHasBeenSet() const { return m_languageConfigurationHasBeenSet; }
  template <typename LanguageConfigurationT = LanguageConfiguration>
  void SetLanguageConfiguration(LanguageConfigurationT&& value) {
    m_languageConfigurationHasBeenSet = true;
    m_languageConfiguration = std::forward<LanguageConfigurationT>(value);
  }
  template <typename LanguageConfigurationT = LanguageConfiguration>
  AnalyticsConfiguration& WithLanguageConfiguration(LanguageConfigurationT&& value) {
    SetLanguageConfiguration(std::forward<LanguageConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redaction configuration for conversational analytics.</p>
   */
  inline const RedactionConfiguration& GetRedactionConfiguration() const { return m_redactionConfiguration; }
  inline bool RedactionConfigurationHasBeenSet() const { return m_redactionConfigurationHasBeenSet; }
  template <typename RedactionConfigurationT = RedactionConfiguration>
  void SetRedactionConfiguration(RedactionConfigurationT&& value) {
    m_redactionConfigurationHasBeenSet = true;
    m_redactionConfiguration = std::forward<RedactionConfigurationT>(value);
  }
  template <typename RedactionConfigurationT = RedactionConfiguration>
  AnalyticsConfiguration& WithRedactionConfiguration(RedactionConfigurationT&& value) {
    SetRedactionConfiguration(std::forward<RedactionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sentiment configuration for conversational analytics.</p>
   */
  inline const SentimentConfiguration& GetSentimentConfiguration() const { return m_sentimentConfiguration; }
  inline bool SentimentConfigurationHasBeenSet() const { return m_sentimentConfigurationHasBeenSet; }
  template <typename SentimentConfigurationT = SentimentConfiguration>
  void SetSentimentConfiguration(SentimentConfigurationT&& value) {
    m_sentimentConfigurationHasBeenSet = true;
    m_sentimentConfiguration = std::forward<SentimentConfigurationT>(value);
  }
  template <typename SentimentConfigurationT = SentimentConfiguration>
  AnalyticsConfiguration& WithSentimentConfiguration(SentimentConfigurationT&& value) {
    SetSentimentConfiguration(std::forward<SentimentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary configuration for conversational analytics.</p>
   */
  inline const SummaryConfiguration& GetSummaryConfiguration() const { return m_summaryConfiguration; }
  inline bool SummaryConfigurationHasBeenSet() const { return m_summaryConfigurationHasBeenSet; }
  template <typename SummaryConfigurationT = SummaryConfiguration>
  void SetSummaryConfiguration(SummaryConfigurationT&& value) {
    m_summaryConfigurationHasBeenSet = true;
    m_summaryConfiguration = std::forward<SummaryConfigurationT>(value);
  }
  template <typename SummaryConfigurationT = SummaryConfiguration>
  AnalyticsConfiguration& WithSummaryConfiguration(SummaryConfigurationT&& value) {
    SetSummaryConfiguration(std::forward<SummaryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rules configuration for conversational analytics.</p>
   */
  inline const RulesConfiguration& GetRulesConfiguration() const { return m_rulesConfiguration; }
  inline bool RulesConfigurationHasBeenSet() const { return m_rulesConfigurationHasBeenSet; }
  template <typename RulesConfigurationT = RulesConfiguration>
  void SetRulesConfiguration(RulesConfigurationT&& value) {
    m_rulesConfigurationHasBeenSet = true;
    m_rulesConfiguration = std::forward<RulesConfigurationT>(value);
  }
  template <typename RulesConfigurationT = RulesConfiguration>
  AnalyticsConfiguration& WithRulesConfiguration(RulesConfigurationT&& value) {
    SetRulesConfiguration(std::forward<RulesConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  LanguageConfiguration m_languageConfiguration;

  RedactionConfiguration m_redactionConfiguration;

  SentimentConfiguration m_sentimentConfiguration;

  SummaryConfiguration m_summaryConfiguration;

  RulesConfiguration m_rulesConfiguration;
  bool m_languageConfigurationHasBeenSet = false;
  bool m_redactionConfigurationHasBeenSet = false;
  bool m_sentimentConfigurationHasBeenSet = false;
  bool m_summaryConfigurationHasBeenSet = false;
  bool m_rulesConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
