/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/HealthCheckConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

HealthCheckConfig::HealthCheckConfig() : 
    m_type(HealthCheckType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false)
{
}

HealthCheckConfig::HealthCheckConfig(JsonView jsonValue) : 
    m_type(HealthCheckType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

HealthCheckConfig& HealthCheckConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = HealthCheckTypeMapper::GetHealthCheckTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourcePath"))
  {
    m_resourcePath = jsonValue.GetString("ResourcePath");

    m_resourcePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureThreshold"))
  {
    m_failureThreshold = jsonValue.GetInteger("FailureThreshold");

    m_failureThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthCheckConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", HealthCheckTypeMapper::GetNameForHealthCheckType(m_type));
  }

  if(m_resourcePathHasBeenSet)
  {
   payload.WithString("ResourcePath", m_resourcePath);

  }

  if(m_failureThresholdHasBeenSet)
  {
   payload.WithInteger("FailureThreshold", m_failureThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
