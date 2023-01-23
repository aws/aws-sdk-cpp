/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ServiceObservabilityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

ServiceObservabilityConfiguration::ServiceObservabilityConfiguration() : 
    m_observabilityEnabled(false),
    m_observabilityEnabledHasBeenSet(false),
    m_observabilityConfigurationArnHasBeenSet(false)
{
}

ServiceObservabilityConfiguration::ServiceObservabilityConfiguration(JsonView jsonValue) : 
    m_observabilityEnabled(false),
    m_observabilityEnabledHasBeenSet(false),
    m_observabilityConfigurationArnHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceObservabilityConfiguration& ServiceObservabilityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObservabilityEnabled"))
  {
    m_observabilityEnabled = jsonValue.GetBool("ObservabilityEnabled");

    m_observabilityEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObservabilityConfigurationArn"))
  {
    m_observabilityConfigurationArn = jsonValue.GetString("ObservabilityConfigurationArn");

    m_observabilityConfigurationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceObservabilityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_observabilityEnabledHasBeenSet)
  {
   payload.WithBool("ObservabilityEnabled", m_observabilityEnabled);

  }

  if(m_observabilityConfigurationArnHasBeenSet)
  {
   payload.WithString("ObservabilityConfigurationArn", m_observabilityConfigurationArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
