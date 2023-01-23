/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/WebhookFilterRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

WebhookFilterRule::WebhookFilterRule() : 
    m_jsonPathHasBeenSet(false),
    m_matchEqualsHasBeenSet(false)
{
}

WebhookFilterRule::WebhookFilterRule(JsonView jsonValue) : 
    m_jsonPathHasBeenSet(false),
    m_matchEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

WebhookFilterRule& WebhookFilterRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jsonPath"))
  {
    m_jsonPath = jsonValue.GetString("jsonPath");

    m_jsonPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("matchEquals"))
  {
    m_matchEquals = jsonValue.GetString("matchEquals");

    m_matchEqualsHasBeenSet = true;
  }

  return *this;
}

JsonValue WebhookFilterRule::Jsonize() const
{
  JsonValue payload;

  if(m_jsonPathHasBeenSet)
  {
   payload.WithString("jsonPath", m_jsonPath);

  }

  if(m_matchEqualsHasBeenSet)
  {
   payload.WithString("matchEquals", m_matchEquals);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
