/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/AuthConfig.h>
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

AuthConfig::AuthConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthConfig& AuthConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oAuth"))
  {
    m_oAuth = jsonValue.GetObject("oAuth");
    m_oAuthHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthConfig::Jsonize() const
{
  JsonValue payload;

  if(m_oAuthHasBeenSet)
  {
   payload.WithObject("oAuth", m_oAuth.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
