/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LiveTailSessionStart.h>
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

LiveTailSessionStart::LiveTailSessionStart() : 
    m_requestIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_logGroupIdentifiersHasBeenSet(false),
    m_logStreamNamesHasBeenSet(false),
    m_logStreamNamePrefixesHasBeenSet(false),
    m_logEventFilterPatternHasBeenSet(false)
{
}

LiveTailSessionStart::LiveTailSessionStart(JsonView jsonValue) : 
    m_requestIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_logGroupIdentifiersHasBeenSet(false),
    m_logStreamNamesHasBeenSet(false),
    m_logStreamNamePrefixesHasBeenSet(false),
    m_logEventFilterPatternHasBeenSet(false)
{
  *this = jsonValue;
}

LiveTailSessionStart& LiveTailSessionStart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupIdentifiers"))
  {
    Aws::Utils::Array<JsonView> logGroupIdentifiersJsonList = jsonValue.GetArray("logGroupIdentifiers");
    for(unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength(); ++logGroupIdentifiersIndex)
    {
      m_logGroupIdentifiers.push_back(logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString());
    }
    m_logGroupIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logStreamNames"))
  {
    Aws::Utils::Array<JsonView> logStreamNamesJsonList = jsonValue.GetArray("logStreamNames");
    for(unsigned logStreamNamesIndex = 0; logStreamNamesIndex < logStreamNamesJsonList.GetLength(); ++logStreamNamesIndex)
    {
      m_logStreamNames.push_back(logStreamNamesJsonList[logStreamNamesIndex].AsString());
    }
    m_logStreamNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logStreamNamePrefixes"))
  {
    Aws::Utils::Array<JsonView> logStreamNamePrefixesJsonList = jsonValue.GetArray("logStreamNamePrefixes");
    for(unsigned logStreamNamePrefixesIndex = 0; logStreamNamePrefixesIndex < logStreamNamePrefixesJsonList.GetLength(); ++logStreamNamePrefixesIndex)
    {
      m_logStreamNamePrefixes.push_back(logStreamNamePrefixesJsonList[logStreamNamePrefixesIndex].AsString());
    }
    m_logStreamNamePrefixesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logEventFilterPattern"))
  {
    m_logEventFilterPattern = jsonValue.GetString("logEventFilterPattern");

    m_logEventFilterPatternHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveTailSessionStart::Jsonize() const
{
  JsonValue payload;

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_logGroupIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupIdentifiersJsonList(m_logGroupIdentifiers.size());
   for(unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength(); ++logGroupIdentifiersIndex)
   {
     logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString(m_logGroupIdentifiers[logGroupIdentifiersIndex]);
   }
   payload.WithArray("logGroupIdentifiers", std::move(logGroupIdentifiersJsonList));

  }

  if(m_logStreamNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logStreamNamesJsonList(m_logStreamNames.size());
   for(unsigned logStreamNamesIndex = 0; logStreamNamesIndex < logStreamNamesJsonList.GetLength(); ++logStreamNamesIndex)
   {
     logStreamNamesJsonList[logStreamNamesIndex].AsString(m_logStreamNames[logStreamNamesIndex]);
   }
   payload.WithArray("logStreamNames", std::move(logStreamNamesJsonList));

  }

  if(m_logStreamNamePrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logStreamNamePrefixesJsonList(m_logStreamNamePrefixes.size());
   for(unsigned logStreamNamePrefixesIndex = 0; logStreamNamePrefixesIndex < logStreamNamePrefixesJsonList.GetLength(); ++logStreamNamePrefixesIndex)
   {
     logStreamNamePrefixesJsonList[logStreamNamePrefixesIndex].AsString(m_logStreamNamePrefixes[logStreamNamePrefixesIndex]);
   }
   payload.WithArray("logStreamNamePrefixes", std::move(logStreamNamePrefixesJsonList));

  }

  if(m_logEventFilterPatternHasBeenSet)
  {
   payload.WithString("logEventFilterPattern", m_logEventFilterPattern);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
