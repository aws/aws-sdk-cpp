/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

WebhookFilterRule::WebhookFilterRule(const JsonValue& jsonValue) : 
    m_jsonPathHasBeenSet(false),
    m_matchEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

WebhookFilterRule& WebhookFilterRule::operator =(const JsonValue& jsonValue)
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
