/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ConversationalAnalyticsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ConversationalAnalyticsConfiguration::ConversationalAnalyticsConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConversationalAnalyticsConfiguration& ConversationalAnalyticsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LanguageLocale")) {
    m_languageLocale = jsonValue.GetString("LanguageLocale");
    m_languageLocaleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LanguageLocales")) {
    Aws::Utils::Array<JsonView> languageLocalesJsonList = jsonValue.GetArray("LanguageLocales");
    for (unsigned languageLocalesIndex = 0; languageLocalesIndex < languageLocalesJsonList.GetLength(); ++languageLocalesIndex) {
      m_languageLocales.push_back(languageLocalesJsonList[languageLocalesIndex].AsString());
    }
    m_languageLocalesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelConfiguration")) {
    m_channelConfiguration = jsonValue.GetObject("ChannelConfiguration");
    m_channelConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RedactionConfiguration")) {
    m_redactionConfiguration = jsonValue.GetObject("RedactionConfiguration");
    m_redactionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SummaryConfiguration")) {
    m_summaryConfiguration = jsonValue.GetObject("SummaryConfiguration");
    m_summaryConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SentimentConfiguration")) {
    m_sentimentConfiguration = jsonValue.GetObject("SentimentConfiguration");
    m_sentimentConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversationalAnalyticsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_languageLocaleHasBeenSet) {
    payload.WithString("LanguageLocale", m_languageLocale);
  }

  if (m_languageLocalesHasBeenSet) {
    Aws::Utils::Array<JsonValue> languageLocalesJsonList(m_languageLocales.size());
    for (unsigned languageLocalesIndex = 0; languageLocalesIndex < languageLocalesJsonList.GetLength(); ++languageLocalesIndex) {
      languageLocalesJsonList[languageLocalesIndex].AsString(m_languageLocales[languageLocalesIndex]);
    }
    payload.WithArray("LanguageLocales", std::move(languageLocalesJsonList));
  }

  if (m_channelConfigurationHasBeenSet) {
    payload.WithObject("ChannelConfiguration", m_channelConfiguration.Jsonize());
  }

  if (m_redactionConfigurationHasBeenSet) {
    payload.WithObject("RedactionConfiguration", m_redactionConfiguration.Jsonize());
  }

  if (m_summaryConfigurationHasBeenSet) {
    payload.WithObject("SummaryConfiguration", m_summaryConfiguration.Jsonize());
  }

  if (m_sentimentConfigurationHasBeenSet) {
    payload.WithObject("SentimentConfiguration", m_sentimentConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
