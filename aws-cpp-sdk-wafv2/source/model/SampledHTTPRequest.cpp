/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/SampledHTTPRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

SampledHTTPRequest::SampledHTTPRequest() : 
    m_requestHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_ruleNameWithinRuleGroupHasBeenSet(false),
    m_requestHeadersInsertedHasBeenSet(false),
    m_responseCodeSent(0),
    m_responseCodeSentHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_captchaResponseHasBeenSet(false),
    m_challengeResponseHasBeenSet(false),
    m_overriddenActionHasBeenSet(false)
{
}

SampledHTTPRequest::SampledHTTPRequest(JsonView jsonValue) : 
    m_requestHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_ruleNameWithinRuleGroupHasBeenSet(false),
    m_requestHeadersInsertedHasBeenSet(false),
    m_responseCodeSent(0),
    m_responseCodeSentHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_captchaResponseHasBeenSet(false),
    m_challengeResponseHasBeenSet(false),
    m_overriddenActionHasBeenSet(false)
{
  *this = jsonValue;
}

SampledHTTPRequest& SampledHTTPRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Request"))
  {
    m_request = jsonValue.GetObject("Request");

    m_requestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Weight"))
  {
    m_weight = jsonValue.GetInt64("Weight");

    m_weightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleNameWithinRuleGroup"))
  {
    m_ruleNameWithinRuleGroup = jsonValue.GetString("RuleNameWithinRuleGroup");

    m_ruleNameWithinRuleGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestHeadersInserted"))
  {
    Aws::Utils::Array<JsonView> requestHeadersInsertedJsonList = jsonValue.GetArray("RequestHeadersInserted");
    for(unsigned requestHeadersInsertedIndex = 0; requestHeadersInsertedIndex < requestHeadersInsertedJsonList.GetLength(); ++requestHeadersInsertedIndex)
    {
      m_requestHeadersInserted.push_back(requestHeadersInsertedJsonList[requestHeadersInsertedIndex].AsObject());
    }
    m_requestHeadersInsertedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseCodeSent"))
  {
    m_responseCodeSent = jsonValue.GetInteger("ResponseCodeSent");

    m_responseCodeSentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsObject());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptchaResponse"))
  {
    m_captchaResponse = jsonValue.GetObject("CaptchaResponse");

    m_captchaResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChallengeResponse"))
  {
    m_challengeResponse = jsonValue.GetObject("ChallengeResponse");

    m_challengeResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverriddenAction"))
  {
    m_overriddenAction = jsonValue.GetString("OverriddenAction");

    m_overriddenActionHasBeenSet = true;
  }

  return *this;
}

JsonValue SampledHTTPRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requestHasBeenSet)
  {
   payload.WithObject("Request", m_request.Jsonize());

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInt64("Weight", m_weight);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_ruleNameWithinRuleGroupHasBeenSet)
  {
   payload.WithString("RuleNameWithinRuleGroup", m_ruleNameWithinRuleGroup);

  }

  if(m_requestHeadersInsertedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestHeadersInsertedJsonList(m_requestHeadersInserted.size());
   for(unsigned requestHeadersInsertedIndex = 0; requestHeadersInsertedIndex < requestHeadersInsertedJsonList.GetLength(); ++requestHeadersInsertedIndex)
   {
     requestHeadersInsertedJsonList[requestHeadersInsertedIndex].AsObject(m_requestHeadersInserted[requestHeadersInsertedIndex].Jsonize());
   }
   payload.WithArray("RequestHeadersInserted", std::move(requestHeadersInsertedJsonList));

  }

  if(m_responseCodeSentHasBeenSet)
  {
   payload.WithInteger("ResponseCodeSent", m_responseCodeSent);

  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsObject(m_labels[labelsIndex].Jsonize());
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  if(m_captchaResponseHasBeenSet)
  {
   payload.WithObject("CaptchaResponse", m_captchaResponse.Jsonize());

  }

  if(m_challengeResponseHasBeenSet)
  {
   payload.WithObject("ChallengeResponse", m_challengeResponse.Jsonize());

  }

  if(m_overriddenActionHasBeenSet)
  {
   payload.WithString("OverriddenAction", m_overriddenAction);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
