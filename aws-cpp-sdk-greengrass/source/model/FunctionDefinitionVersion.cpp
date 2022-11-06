/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/FunctionDefinitionVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

FunctionDefinitionVersion::FunctionDefinitionVersion() : 
    m_defaultConfigHasBeenSet(false),
    m_functionsHasBeenSet(false)
{
}

FunctionDefinitionVersion::FunctionDefinitionVersion(JsonView jsonValue) : 
    m_defaultConfigHasBeenSet(false),
    m_functionsHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionDefinitionVersion& FunctionDefinitionVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultConfig"))
  {
    m_defaultConfig = jsonValue.GetObject("DefaultConfig");

    m_defaultConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Functions"))
  {
    Aws::Utils::Array<JsonView> functionsJsonList = jsonValue.GetArray("Functions");
    for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
    {
      m_functions.push_back(functionsJsonList[functionsIndex].AsObject());
    }
    m_functionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionDefinitionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_defaultConfigHasBeenSet)
  {
   payload.WithObject("DefaultConfig", m_defaultConfig.Jsonize());

  }

  if(m_functionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> functionsJsonList(m_functions.size());
   for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
   {
     functionsJsonList[functionsIndex].AsObject(m_functions[functionsIndex].Jsonize());
   }
   payload.WithArray("Functions", std::move(functionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
