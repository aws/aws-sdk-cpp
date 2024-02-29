/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/QnAIntentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

QnAIntentConfiguration::QnAIntentConfiguration() : 
    m_dataSourceConfigurationHasBeenSet(false),
    m_bedrockModelConfigurationHasBeenSet(false)
{
}

QnAIntentConfiguration::QnAIntentConfiguration(JsonView jsonValue) : 
    m_dataSourceConfigurationHasBeenSet(false),
    m_bedrockModelConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

QnAIntentConfiguration& QnAIntentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceConfiguration"))
  {
    m_dataSourceConfiguration = jsonValue.GetObject("dataSourceConfiguration");

    m_dataSourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bedrockModelConfiguration"))
  {
    m_bedrockModelConfiguration = jsonValue.GetObject("bedrockModelConfiguration");

    m_bedrockModelConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue QnAIntentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceConfigurationHasBeenSet)
  {
   payload.WithObject("dataSourceConfiguration", m_dataSourceConfiguration.Jsonize());

  }

  if(m_bedrockModelConfigurationHasBeenSet)
  {
   payload.WithObject("bedrockModelConfiguration", m_bedrockModelConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
