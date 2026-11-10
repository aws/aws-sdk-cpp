/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactLensChannelConfiguration.h>
#include <aws/connect/model/ContactLensRedactionConfiguration.h>
#include <aws/connect/model/ContactLensSentimentConfiguration.h>
#include <aws/connect/model/ContactLensSummaryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The conversational analytics configuration settings for a
 * contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ConversationalAnalyticsConfiguration">AWS
 * API Reference</a></p>
 */
class ConversationalAnalyticsConfiguration {
 public:
  AWS_CONNECT_API ConversationalAnalyticsConfiguration() = default;
  AWS_CONNECT_API ConversationalAnalyticsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ConversationalAnalyticsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether conversational analytics is enabled for the contact.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline ConversationalAnalyticsConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language locale that conversational analytics uses to analyze the contact
   * (for example, <code>en-US</code>).</p>
   */
  inline const Aws::String& GetLanguageLocale() const { return m_languageLocale; }
  inline bool LanguageLocaleHasBeenSet() const { return m_languageLocaleHasBeenSet; }
  template <typename LanguageLocaleT = Aws::String>
  void SetLanguageLocale(LanguageLocaleT&& value) {
    m_languageLocaleHasBeenSet = true;
    m_languageLocale = std::forward<LanguageLocaleT>(value);
  }
  template <typename LanguageLocaleT = Aws::String>
  ConversationalAnalyticsConfiguration& WithLanguageLocale(LanguageLocaleT&& value) {
    SetLanguageLocale(std::forward<LanguageLocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language locales that conversational analytics uses to analyze the
   * contact (for example, <code>en-US</code> and <code>es-ES</code>).</p>
   */
  inline const Aws::Vector<Aws::String>& GetLanguageLocales() const { return m_languageLocales; }
  inline bool LanguageLocalesHasBeenSet() const { return m_languageLocalesHasBeenSet; }
  template <typename LanguageLocalesT = Aws::Vector<Aws::String>>
  void SetLanguageLocales(LanguageLocalesT&& value) {
    m_languageLocalesHasBeenSet = true;
    m_languageLocales = std::forward<LanguageLocalesT>(value);
  }
  template <typename LanguageLocalesT = Aws::Vector<Aws::String>>
  ConversationalAnalyticsConfiguration& WithLanguageLocales(LanguageLocalesT&& value) {
    SetLanguageLocales(std::forward<LanguageLocalesT>(value));
    return *this;
  }
  template <typename LanguageLocalesT = Aws::String>
  ConversationalAnalyticsConfiguration& AddLanguageLocales(LanguageLocalesT&& value) {
    m_languageLocalesHasBeenSet = true;
    m_languageLocales.emplace_back(std::forward<LanguageLocalesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-channel conversational analytics settings for the contact.</p>
   */
  inline const ContactLensChannelConfiguration& GetChannelConfiguration() const { return m_channelConfiguration; }
  inline bool ChannelConfigurationHasBeenSet() const { return m_channelConfigurationHasBeenSet; }
  template <typename ChannelConfigurationT = ContactLensChannelConfiguration>
  void SetChannelConfiguration(ChannelConfigurationT&& value) {
    m_channelConfigurationHasBeenSet = true;
    m_channelConfiguration = std::forward<ChannelConfigurationT>(value);
  }
  template <typename ChannelConfigurationT = ContactLensChannelConfiguration>
  ConversationalAnalyticsConfiguration& WithChannelConfiguration(ChannelConfigurationT&& value) {
    SetChannelConfiguration(std::forward<ChannelConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redaction configuration for the contact transcript.</p>
   */
  inline const ContactLensRedactionConfiguration& GetRedactionConfiguration() const { return m_redactionConfiguration; }
  inline bool RedactionConfigurationHasBeenSet() const { return m_redactionConfigurationHasBeenSet; }
  template <typename RedactionConfigurationT = ContactLensRedactionConfiguration>
  void SetRedactionConfiguration(RedactionConfigurationT&& value) {
    m_redactionConfigurationHasBeenSet = true;
    m_redactionConfiguration = std::forward<RedactionConfigurationT>(value);
  }
  template <typename RedactionConfigurationT = ContactLensRedactionConfiguration>
  ConversationalAnalyticsConfiguration& WithRedactionConfiguration(RedactionConfigurationT&& value) {
    SetRedactionConfiguration(std::forward<RedactionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary configuration for the contact.</p>
   */
  inline const ContactLensSummaryConfiguration& GetSummaryConfiguration() const { return m_summaryConfiguration; }
  inline bool SummaryConfigurationHasBeenSet() const { return m_summaryConfigurationHasBeenSet; }
  template <typename SummaryConfigurationT = ContactLensSummaryConfiguration>
  void SetSummaryConfiguration(SummaryConfigurationT&& value) {
    m_summaryConfigurationHasBeenSet = true;
    m_summaryConfiguration = std::forward<SummaryConfigurationT>(value);
  }
  template <typename SummaryConfigurationT = ContactLensSummaryConfiguration>
  ConversationalAnalyticsConfiguration& WithSummaryConfiguration(SummaryConfigurationT&& value) {
    SetSummaryConfiguration(std::forward<SummaryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sentiment analysis configuration for the contact.</p>
   */
  inline const ContactLensSentimentConfiguration& GetSentimentConfiguration() const { return m_sentimentConfiguration; }
  inline bool SentimentConfigurationHasBeenSet() const { return m_sentimentConfigurationHasBeenSet; }
  template <typename SentimentConfigurationT = ContactLensSentimentConfiguration>
  void SetSentimentConfiguration(SentimentConfigurationT&& value) {
    m_sentimentConfigurationHasBeenSet = true;
    m_sentimentConfiguration = std::forward<SentimentConfigurationT>(value);
  }
  template <typename SentimentConfigurationT = ContactLensSentimentConfiguration>
  ConversationalAnalyticsConfiguration& WithSentimentConfiguration(SentimentConfigurationT&& value) {
    SetSentimentConfiguration(std::forward<SentimentConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_languageLocale;

  Aws::Vector<Aws::String> m_languageLocales;

  ContactLensChannelConfiguration m_channelConfiguration;

  ContactLensRedactionConfiguration m_redactionConfiguration;

  ContactLensSummaryConfiguration m_summaryConfiguration;

  ContactLensSentimentConfiguration m_sentimentConfiguration;
  bool m_enabledHasBeenSet = false;
  bool m_languageLocaleHasBeenSet = false;
  bool m_languageLocalesHasBeenSet = false;
  bool m_channelConfigurationHasBeenSet = false;
  bool m_redactionConfigurationHasBeenSet = false;
  bool m_summaryConfigurationHasBeenSet = false;
  bool m_sentimentConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
