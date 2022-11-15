/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ImportStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

ImportStatistics::ImportStatistics() : 
    m_prefixesFound(0),
    m_prefixesFoundHasBeenSet(false),
    m_prefixesCompleted(0),
    m_prefixesCompletedHasBeenSet(false),
    m_filesCompleted(0),
    m_filesCompletedHasBeenSet(false),
    m_eventsCompleted(0),
    m_eventsCompletedHasBeenSet(false),
    m_failedEntries(0),
    m_failedEntriesHasBeenSet(false)
{
}

ImportStatistics::ImportStatistics(JsonView jsonValue) : 
    m_prefixesFound(0),
    m_prefixesFoundHasBeenSet(false),
    m_prefixesCompleted(0),
    m_prefixesCompletedHasBeenSet(false),
    m_filesCompleted(0),
    m_filesCompletedHasBeenSet(false),
    m_eventsCompleted(0),
    m_eventsCompletedHasBeenSet(false),
    m_failedEntries(0),
    m_failedEntriesHasBeenSet(false)
{
  *this = jsonValue;
}

ImportStatistics& ImportStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrefixesFound"))
  {
    m_prefixesFound = jsonValue.GetInt64("PrefixesFound");

    m_prefixesFoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrefixesCompleted"))
  {
    m_prefixesCompleted = jsonValue.GetInt64("PrefixesCompleted");

    m_prefixesCompletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilesCompleted"))
  {
    m_filesCompleted = jsonValue.GetInt64("FilesCompleted");

    m_filesCompletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventsCompleted"))
  {
    m_eventsCompleted = jsonValue.GetInt64("EventsCompleted");

    m_eventsCompletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedEntries"))
  {
    m_failedEntries = jsonValue.GetInt64("FailedEntries");

    m_failedEntriesHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_prefixesFoundHasBeenSet)
  {
   payload.WithInt64("PrefixesFound", m_prefixesFound);

  }

  if(m_prefixesCompletedHasBeenSet)
  {
   payload.WithInt64("PrefixesCompleted", m_prefixesCompleted);

  }

  if(m_filesCompletedHasBeenSet)
  {
   payload.WithInt64("FilesCompleted", m_filesCompleted);

  }

  if(m_eventsCompletedHasBeenSet)
  {
   payload.WithInt64("EventsCompleted", m_eventsCompleted);

  }

  if(m_failedEntriesHasBeenSet)
  {
   payload.WithInt64("FailedEntries", m_failedEntries);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
