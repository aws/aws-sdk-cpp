/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
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

HealthCheckCustomConfig::HealthCheckCustomConfig()
{
}

HealthCheckCustomConfig::HealthCheckCustomConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

HealthCheckCustomConfig& HealthCheckCustomConfig::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue HealthCheckCustomConfig::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
