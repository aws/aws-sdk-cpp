/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/WebhookDefinition.h>
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

WebhookDefinition::WebhookDefinition() : 
    m_nameHasBeenSet(false),
    m_targetPipelineHasBeenSet(false),
    m_targetActionHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_authentication(WebhookAuthenticationType::NOT_SET),
    m_authenticationHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false)
{
}

WebhookDefinition::WebhookDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_targetPipelineHasBeenSet(false),
    m_targetActionHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_authentication(WebhookAuthenticationType::NOT_SET),
    m_authenticationHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

WebhookDefinition& WebhookDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetPipeline"))
  {
    m_targetPipeline = jsonValue.GetString("targetPipeline");

    m_targetPipelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetAction"))
  {
    m_targetAction = jsonValue.GetString("targetAction");

    m_targetActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authentication"))
  {
    m_authentication = WebhookAuthenticationTypeMapper::GetWebhookAuthenticationTypeForName(jsonValue.GetString("authentication"));

    m_authenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("authenticationConfiguration");

    m_authenticationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WebhookDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_targetPipelineHasBeenSet)
  {
   payload.WithString("targetPipeline", m_targetPipeline);

  }

  if(m_targetActionHasBeenSet)
  {
   payload.WithString("targetAction", m_targetAction);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_authenticationHasBeenSet)
  {
   payload.WithString("authentication", WebhookAuthenticationTypeMapper::GetNameForWebhookAuthenticationType(m_authentication));
  }

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("authenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
