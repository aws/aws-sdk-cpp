/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ApplicationSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

ApplicationSourceConfig::ApplicationSourceConfig() : 
    m_externalUrlConfigHasBeenSet(false)
{
}

ApplicationSourceConfig::ApplicationSourceConfig(JsonView jsonValue) : 
    m_externalUrlConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSourceConfig& ApplicationSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExternalUrlConfig"))
  {
    m_externalUrlConfig = jsonValue.GetObject("ExternalUrlConfig");

    m_externalUrlConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_externalUrlConfigHasBeenSet)
  {
   payload.WithObject("ExternalUrlConfig", m_externalUrlConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
