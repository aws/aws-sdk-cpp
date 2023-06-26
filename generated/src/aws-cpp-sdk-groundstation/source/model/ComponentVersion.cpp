/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ComponentVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

ComponentVersion::ComponentVersion() : 
    m_componentTypeHasBeenSet(false),
    m_versionsHasBeenSet(false)
{
}

ComponentVersion::ComponentVersion(JsonView jsonValue) : 
    m_componentTypeHasBeenSet(false),
    m_versionsHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentVersion& ComponentVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentType"))
  {
    m_componentType = jsonValue.GetString("componentType");

    m_componentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versions"))
  {
    Aws::Utils::Array<JsonView> versionsJsonList = jsonValue.GetArray("versions");
    for(unsigned versionsIndex = 0; versionsIndex < versionsJsonList.GetLength(); ++versionsIndex)
    {
      m_versions.push_back(versionsJsonList[versionsIndex].AsString());
    }
    m_versionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentVersion::Jsonize() const
{
  JsonValue payload;

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("componentType", m_componentType);

  }

  if(m_versionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> versionsJsonList(m_versions.size());
   for(unsigned versionsIndex = 0; versionsIndex < versionsJsonList.GetLength(); ++versionsIndex)
   {
     versionsJsonList[versionsIndex].AsString(m_versions[versionsIndex]);
   }
   payload.WithArray("versions", std::move(versionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
