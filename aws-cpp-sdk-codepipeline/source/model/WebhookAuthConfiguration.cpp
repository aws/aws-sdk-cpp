/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

WebhookAuthConfiguration::WebhookAuthConfiguration(JsonView jsonValue) : 
    m_allowedIPRangeHasBeenSet(false),
    m_secretTokenHasBeenSet(false)
{
  *this = jsonValue;
}

WebhookAuthConfiguration& WebhookAuthConfiguration::operator =(JsonView jsonValue)
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
