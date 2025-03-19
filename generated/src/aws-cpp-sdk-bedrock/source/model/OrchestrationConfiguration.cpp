/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/OrchestrationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

OrchestrationConfiguration::OrchestrationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OrchestrationConfiguration& OrchestrationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryTransformationConfiguration"))
  {
    m_queryTransformationConfiguration = jsonValue.GetObject("queryTransformationConfiguration");
    m_queryTransformationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue OrchestrationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_queryTransformationConfigurationHasBeenSet)
  {
   payload.WithObject("queryTransformationConfiguration", m_queryTransformationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
