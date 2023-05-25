/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CoreDefinitionVersion.h>
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

CoreDefinitionVersion::CoreDefinitionVersion() : 
    m_coresHasBeenSet(false)
{
}

CoreDefinitionVersion::CoreDefinitionVersion(JsonView jsonValue) : 
    m_coresHasBeenSet(false)
{
  *this = jsonValue;
}

CoreDefinitionVersion& CoreDefinitionVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cores"))
  {
    Aws::Utils::Array<JsonView> coresJsonList = jsonValue.GetArray("Cores");
    for(unsigned coresIndex = 0; coresIndex < coresJsonList.GetLength(); ++coresIndex)
    {
      m_cores.push_back(coresJsonList[coresIndex].AsObject());
    }
    m_coresHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreDefinitionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_coresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> coresJsonList(m_cores.size());
   for(unsigned coresIndex = 0; coresIndex < coresJsonList.GetLength(); ++coresIndex)
   {
     coresJsonList[coresIndex].AsObject(m_cores[coresIndex].Jsonize());
   }
   payload.WithArray("Cores", std::move(coresJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
