/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/RealTimeAlertRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

RealTimeAlertRule::RealTimeAlertRule() : 
    m_type(RealTimeAlertRuleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keywordMatchConfigurationHasBeenSet(false),
    m_sentimentConfigurationHasBeenSet(false),
    m_issueDetectionConfigurationHasBeenSet(false)
{
}

RealTimeAlertRule::RealTimeAlertRule(JsonView jsonValue) : 
    m_type(RealTimeAlertRuleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keywordMatchConfigurationHasBeenSet(false),
    m_sentimentConfigurationHasBeenSet(false),
    m_issueDetectionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeAlertRule& RealTimeAlertRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RealTimeAlertRuleTypeMapper::GetRealTimeAlertRuleTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeywordMatchConfiguration"))
  {
    m_keywordMatchConfiguration = jsonValue.GetObject("KeywordMatchConfiguration");

    m_keywordMatchConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SentimentConfiguration"))
  {
    m_sentimentConfiguration = jsonValue.GetObject("SentimentConfiguration");

    m_sentimentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IssueDetectionConfiguration"))
  {
    m_issueDetectionConfiguration = jsonValue.GetObject("IssueDetectionConfiguration");

    m_issueDetectionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeAlertRule::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RealTimeAlertRuleTypeMapper::GetNameForRealTimeAlertRuleType(m_type));
  }

  if(m_keywordMatchConfigurationHasBeenSet)
  {
   payload.WithObject("KeywordMatchConfiguration", m_keywordMatchConfiguration.Jsonize());

  }

  if(m_sentimentConfigurationHasBeenSet)
  {
   payload.WithObject("SentimentConfiguration", m_sentimentConfiguration.Jsonize());

  }

  if(m_issueDetectionConfigurationHasBeenSet)
  {
   payload.WithObject("IssueDetectionConfiguration", m_issueDetectionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
