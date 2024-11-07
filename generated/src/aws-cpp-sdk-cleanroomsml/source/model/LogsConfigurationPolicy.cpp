/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/LogsConfigurationPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

LogsConfigurationPolicy::LogsConfigurationPolicy() : 
    m_allowedAccountIdsHasBeenSet(false),
    m_filterPatternHasBeenSet(false)
{
}

LogsConfigurationPolicy::LogsConfigurationPolicy(JsonView jsonValue)
  : LogsConfigurationPolicy()
{
  *this = jsonValue;
}

LogsConfigurationPolicy& LogsConfigurationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedAccountIds"))
  {
    Aws::Utils::Array<JsonView> allowedAccountIdsJsonList = jsonValue.GetArray("allowedAccountIds");
    for(unsigned allowedAccountIdsIndex = 0; allowedAccountIdsIndex < allowedAccountIdsJsonList.GetLength(); ++allowedAccountIdsIndex)
    {
      m_allowedAccountIds.push_back(allowedAccountIdsJsonList[allowedAccountIdsIndex].AsString());
    }
    m_allowedAccountIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterPattern"))
  {
    m_filterPattern = jsonValue.GetString("filterPattern");

    m_filterPatternHasBeenSet = true;
  }

  return *this;
}

JsonValue LogsConfigurationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_allowedAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedAccountIdsJsonList(m_allowedAccountIds.size());
   for(unsigned allowedAccountIdsIndex = 0; allowedAccountIdsIndex < allowedAccountIdsJsonList.GetLength(); ++allowedAccountIdsIndex)
   {
     allowedAccountIdsJsonList[allowedAccountIdsIndex].AsString(m_allowedAccountIds[allowedAccountIdsIndex]);
   }
   payload.WithArray("allowedAccountIds", std::move(allowedAccountIdsJsonList));

  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
