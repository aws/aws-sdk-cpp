/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/NeptuneAnalyticsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

NeptuneAnalyticsConfiguration::NeptuneAnalyticsConfiguration() : 
    m_fieldMappingHasBeenSet(false),
    m_graphArnHasBeenSet(false)
{
}

NeptuneAnalyticsConfiguration::NeptuneAnalyticsConfiguration(JsonView jsonValue)
  : NeptuneAnalyticsConfiguration()
{
  *this = jsonValue;
}

NeptuneAnalyticsConfiguration& NeptuneAnalyticsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldMapping"))
  {
    m_fieldMapping = jsonValue.GetObject("fieldMapping");

    m_fieldMappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("graphArn"))
  {
    m_graphArn = jsonValue.GetString("graphArn");

    m_graphArnHasBeenSet = true;
  }

  return *this;
}

JsonValue NeptuneAnalyticsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldMappingHasBeenSet)
  {
   payload.WithObject("fieldMapping", m_fieldMapping.Jsonize());

  }

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("graphArn", m_graphArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
