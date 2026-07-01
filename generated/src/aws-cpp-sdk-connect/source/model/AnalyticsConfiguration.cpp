/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AnalyticsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AnalyticsConfiguration::AnalyticsConfiguration(JsonView jsonValue) { *this = jsonValue; }

AnalyticsConfiguration& AnalyticsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LanguageConfiguration")) {
    m_languageConfiguration = jsonValue.GetObject("LanguageConfiguration");
    m_languageConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RedactionConfiguration")) {
    m_redactionConfiguration = jsonValue.GetObject("RedactionConfiguration");
    m_redactionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SentimentConfiguration")) {
    m_sentimentConfiguration = jsonValue.GetObject("SentimentConfiguration");
    m_sentimentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SummaryConfiguration")) {
    m_summaryConfiguration = jsonValue.GetObject("SummaryConfiguration");
    m_summaryConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RulesConfiguration")) {
    m_rulesConfiguration = jsonValue.GetObject("RulesConfiguration");
    m_rulesConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalyticsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_languageConfigurationHasBeenSet) {
    payload.WithObject("LanguageConfiguration", m_languageConfiguration.Jsonize());
  }

  if (m_redactionConfigurationHasBeenSet) {
    payload.WithObject("RedactionConfiguration", m_redactionConfiguration.Jsonize());
  }

  if (m_sentimentConfigurationHasBeenSet) {
    payload.WithObject("SentimentConfiguration", m_sentimentConfiguration.Jsonize());
  }

  if (m_summaryConfigurationHasBeenSet) {
    payload.WithObject("SummaryConfiguration", m_summaryConfiguration.Jsonize());
  }

  if (m_rulesConfigurationHasBeenSet) {
    payload.WithObject("RulesConfiguration", m_rulesConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
