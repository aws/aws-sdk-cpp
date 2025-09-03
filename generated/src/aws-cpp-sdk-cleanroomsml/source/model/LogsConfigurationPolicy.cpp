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

LogsConfigurationPolicy::LogsConfigurationPolicy(JsonView jsonValue)
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
  if(jsonValue.ValueExists("logType"))
  {
    m_logType = LogTypeMapper::GetLogTypeForName(jsonValue.GetString("logType"));
    m_logTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logRedactionConfiguration"))
  {
    m_logRedactionConfiguration = jsonValue.GetObject("logRedactionConfiguration");
    m_logRedactionConfigurationHasBeenSet = true;
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

  if(m_logTypeHasBeenSet)
  {
   payload.WithString("logType", LogTypeMapper::GetNameForLogType(m_logType));
  }

  if(m_logRedactionConfigurationHasBeenSet)
  {
   payload.WithObject("logRedactionConfiguration", m_logRedactionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
