/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/CustomDocumentEnrichmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

CustomDocumentEnrichmentConfiguration::CustomDocumentEnrichmentConfiguration() : 
    m_inlineConfigurationsHasBeenSet(false),
    m_preExtractionHookConfigurationHasBeenSet(false),
    m_postExtractionHookConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

CustomDocumentEnrichmentConfiguration::CustomDocumentEnrichmentConfiguration(JsonView jsonValue) : 
    m_inlineConfigurationsHasBeenSet(false),
    m_preExtractionHookConfigurationHasBeenSet(false),
    m_postExtractionHookConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

CustomDocumentEnrichmentConfiguration& CustomDocumentEnrichmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InlineConfigurations"))
  {
    Aws::Utils::Array<JsonView> inlineConfigurationsJsonList = jsonValue.GetArray("InlineConfigurations");
    for(unsigned inlineConfigurationsIndex = 0; inlineConfigurationsIndex < inlineConfigurationsJsonList.GetLength(); ++inlineConfigurationsIndex)
    {
      m_inlineConfigurations.push_back(inlineConfigurationsJsonList[inlineConfigurationsIndex].AsObject());
    }
    m_inlineConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreExtractionHookConfiguration"))
  {
    m_preExtractionHookConfiguration = jsonValue.GetObject("PreExtractionHookConfiguration");

    m_preExtractionHookConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostExtractionHookConfiguration"))
  {
    m_postExtractionHookConfiguration = jsonValue.GetObject("PostExtractionHookConfiguration");

    m_postExtractionHookConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomDocumentEnrichmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inlineConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inlineConfigurationsJsonList(m_inlineConfigurations.size());
   for(unsigned inlineConfigurationsIndex = 0; inlineConfigurationsIndex < inlineConfigurationsJsonList.GetLength(); ++inlineConfigurationsIndex)
   {
     inlineConfigurationsJsonList[inlineConfigurationsIndex].AsObject(m_inlineConfigurations[inlineConfigurationsIndex].Jsonize());
   }
   payload.WithArray("InlineConfigurations", std::move(inlineConfigurationsJsonList));

  }

  if(m_preExtractionHookConfigurationHasBeenSet)
  {
   payload.WithObject("PreExtractionHookConfiguration", m_preExtractionHookConfiguration.Jsonize());

  }

  if(m_postExtractionHookConfigurationHasBeenSet)
  {
   payload.WithObject("PostExtractionHookConfiguration", m_postExtractionHookConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
