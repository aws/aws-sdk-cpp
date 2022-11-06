/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/LogSetup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

LogSetup::LogSetup() : 
    m_typesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

LogSetup::LogSetup(JsonView jsonValue) : 
    m_typesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

LogSetup& LogSetup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(LogTypeMapper::GetLogTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue LogSetup::Jsonize() const
{
  JsonValue payload;

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(LogTypeMapper::GetNameForLogType(m_types[typesIndex]));
   }
   payload.WithArray("types", std::move(typesJsonList));

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
