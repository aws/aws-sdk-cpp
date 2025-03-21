/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomModelUnits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

CustomModelUnits::CustomModelUnits(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomModelUnits& CustomModelUnits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customModelUnitsPerModelCopy"))
  {
    m_customModelUnitsPerModelCopy = jsonValue.GetInteger("customModelUnitsPerModelCopy");
    m_customModelUnitsPerModelCopyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customModelUnitsVersion"))
  {
    m_customModelUnitsVersion = jsonValue.GetString("customModelUnitsVersion");
    m_customModelUnitsVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomModelUnits::Jsonize() const
{
  JsonValue payload;

  if(m_customModelUnitsPerModelCopyHasBeenSet)
  {
   payload.WithInteger("customModelUnitsPerModelCopy", m_customModelUnitsPerModelCopy);

  }

  if(m_customModelUnitsVersionHasBeenSet)
  {
   payload.WithString("customModelUnitsVersion", m_customModelUnitsVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
