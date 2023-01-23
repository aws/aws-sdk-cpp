/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/HttpDataSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

HttpDataSourceConfig::HttpDataSourceConfig() : 
    m_endpointHasBeenSet(false),
    m_authorizationConfigHasBeenSet(false)
{
}

HttpDataSourceConfig::HttpDataSourceConfig(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_authorizationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

HttpDataSourceConfig& HttpDataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizationConfig"))
  {
    m_authorizationConfig = jsonValue.GetObject("authorizationConfig");

    m_authorizationConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpDataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_authorizationConfigHasBeenSet)
  {
   payload.WithObject("authorizationConfig", m_authorizationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
