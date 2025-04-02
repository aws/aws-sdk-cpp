/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/QInConnectAssistantConfiguration.h>
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

QInConnectAssistantConfiguration::QInConnectAssistantConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

QInConnectAssistantConfiguration& QInConnectAssistantConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assistantArn"))
  {
    m_assistantArn = jsonValue.GetString("assistantArn");
    m_assistantArnHasBeenSet = true;
  }
  return *this;
}

JsonValue QInConnectAssistantConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_assistantArnHasBeenSet)
  {
   payload.WithString("assistantArn", m_assistantArn);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
