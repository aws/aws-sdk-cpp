/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/IframeConfig.h>
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

IframeConfig::IframeConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

IframeConfig& IframeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Allow"))
  {
    Aws::Utils::Array<JsonView> allowJsonList = jsonValue.GetArray("Allow");
    for(unsigned allowIndex = 0; allowIndex < allowJsonList.GetLength(); ++allowIndex)
    {
      m_allow.push_back(allowJsonList[allowIndex].AsString());
    }
    m_allowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sandbox"))
  {
    Aws::Utils::Array<JsonView> sandboxJsonList = jsonValue.GetArray("Sandbox");
    for(unsigned sandboxIndex = 0; sandboxIndex < sandboxJsonList.GetLength(); ++sandboxIndex)
    {
      m_sandbox.push_back(sandboxJsonList[sandboxIndex].AsString());
    }
    m_sandboxHasBeenSet = true;
  }
  return *this;
}

JsonValue IframeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_allowHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowJsonList(m_allow.size());
   for(unsigned allowIndex = 0; allowIndex < allowJsonList.GetLength(); ++allowIndex)
   {
     allowJsonList[allowIndex].AsString(m_allow[allowIndex]);
   }
   payload.WithArray("Allow", std::move(allowJsonList));

  }

  if(m_sandboxHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sandboxJsonList(m_sandbox.size());
   for(unsigned sandboxIndex = 0; sandboxIndex < sandboxJsonList.GetLength(); ++sandboxIndex)
   {
     sandboxJsonList[sandboxIndex].AsString(m_sandbox[sandboxIndex]);
   }
   payload.WithArray("Sandbox", std::move(sandboxJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
