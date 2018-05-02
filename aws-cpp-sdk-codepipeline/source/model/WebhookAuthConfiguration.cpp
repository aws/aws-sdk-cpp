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

#include <aws/codepipeline/model/WebhookAuthConfiguration.h>
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

WebhookAuthConfiguration::WebhookAuthConfiguration() : 
    m_allowedIPRangeHasBeenSet(false),
    m_secretTokenHasBeenSet(false)
{
}

WebhookAuthConfiguration::WebhookAuthConfiguration(const JsonValue& jsonValue) : 
    m_allowedIPRangeHasBeenSet(false),
    m_secretTokenHasBeenSet(false)
{
  *this = jsonValue;
}

WebhookAuthConfiguration& WebhookAuthConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AllowedIPRange"))
  {
    m_allowedIPRange = jsonValue.GetString("AllowedIPRange");

    m_allowedIPRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretToken"))
  {
    m_secretToken = jsonValue.GetString("SecretToken");

    m_secretTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue WebhookAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowedIPRangeHasBeenSet)
  {
   payload.WithString("AllowedIPRange", m_allowedIPRange);

  }

  if(m_secretTokenHasBeenSet)
  {
   payload.WithString("SecretToken", m_secretToken);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
