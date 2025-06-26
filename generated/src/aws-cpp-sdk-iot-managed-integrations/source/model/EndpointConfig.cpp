/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/EndpointConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

EndpointConfig::EndpointConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EndpointConfig& EndpointConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetObject("lambda");
    m_lambdaHasBeenSet = true;
  }
  return *this;
}

JsonValue EndpointConfig::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("lambda", m_lambda.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
