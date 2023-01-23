/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/QueryDefinition.h>
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

QueryDefinition::QueryDefinition() : 
    m_queryDefinitionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_lastModified(0),
    m_lastModifiedHasBeenSet(false),
    m_logGroupNamesHasBeenSet(false)
{
}

QueryDefinition::QueryDefinition(JsonView jsonValue) : 
    m_queryDefinitionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_lastModified(0),
    m_lastModifiedHasBeenSet(false),
    m_logGroupNamesHasBeenSet(false)
{
  *this = jsonValue;
}

QueryDefinition& QueryDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryDefinitionId"))
  {
    m_queryDefinitionId = jsonValue.GetString("queryDefinitionId");

    m_queryDefinitionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetInt64("lastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupNames"))
  {
    Aws::Utils::Array<JsonView> logGroupNamesJsonList = jsonValue.GetArray("logGroupNames");
    for(unsigned logGroupNamesIndex = 0; logGroupNamesIndex < logGroupNamesJsonList.GetLength(); ++logGroupNamesIndex)
    {
      m_logGroupNames.push_back(logGroupNamesJsonList[logGroupNamesIndex].AsString());
    }
    m_logGroupNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_queryDefinitionIdHasBeenSet)
  {
   payload.WithString("queryDefinitionId", m_queryDefinitionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithInt64("lastModified", m_lastModified);

  }

  if(m_logGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupNamesJsonList(m_logGroupNames.size());
   for(unsigned logGroupNamesIndex = 0; logGroupNamesIndex < logGroupNamesJsonList.GetLength(); ++logGroupNamesIndex)
   {
     logGroupNamesJsonList[logGroupNamesIndex].AsString(m_logGroupNames[logGroupNamesIndex]);
   }
   payload.WithArray("logGroupNames", std::move(logGroupNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
