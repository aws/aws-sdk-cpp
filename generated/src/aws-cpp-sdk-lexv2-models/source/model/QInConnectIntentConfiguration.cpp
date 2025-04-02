/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/QInConnectIntentConfiguration.h>
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

QInConnectIntentConfiguration::QInConnectIntentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

QInConnectIntentConfiguration& QInConnectIntentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("qInConnectAssistantConfiguration"))
  {
    m_qInConnectAssistantConfiguration = jsonValue.GetObject("qInConnectAssistantConfiguration");
    m_qInConnectAssistantConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue QInConnectIntentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_qInConnectAssistantConfigurationHasBeenSet)
  {
   payload.WithObject("qInConnectAssistantConfiguration", m_qInConnectAssistantConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
