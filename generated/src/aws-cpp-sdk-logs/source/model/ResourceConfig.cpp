/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

ResourceConfig::ResourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceConfig& ResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("openSearchResourceConfig"))
  {
    m_openSearchResourceConfig = jsonValue.GetObject("openSearchResourceConfig");
    m_openSearchResourceConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_openSearchResourceConfigHasBeenSet)
  {
   payload.WithObject("openSearchResourceConfig", m_openSearchResourceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
