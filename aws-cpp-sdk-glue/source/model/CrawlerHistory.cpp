/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CrawlerHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CrawlerHistory::CrawlerHistory() : 
    m_crawlIdHasBeenSet(false),
    m_state(CrawlerHistoryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_logStreamHasBeenSet(false),
    m_messagePrefixHasBeenSet(false),
    m_dPUHour(0.0),
    m_dPUHourHasBeenSet(false)
{
}

CrawlerHistory::CrawlerHistory(JsonView jsonValue) : 
    m_crawlIdHasBeenSet(false),
    m_state(CrawlerHistoryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_logStreamHasBeenSet(false),
    m_messagePrefixHasBeenSet(false),
    m_dPUHour(0.0),
    m_dPUHourHasBeenSet(false)
{
  *this = jsonValue;
}

CrawlerHistory& CrawlerHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CrawlId"))
  {
    m_crawlId = jsonValue.GetString("CrawlId");

    m_crawlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CrawlerHistoryStateMapper::GetCrawlerHistoryStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetString("Summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroup"))
  {
    m_logGroup = jsonValue.GetString("LogGroup");

    m_logGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogStream"))
  {
    m_logStream = jsonValue.GetString("LogStream");

    m_logStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessagePrefix"))
  {
    m_messagePrefix = jsonValue.GetString("MessagePrefix");

    m_messagePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DPUHour"))
  {
    m_dPUHour = jsonValue.GetDouble("DPUHour");

    m_dPUHourHasBeenSet = true;
  }

  return *this;
}

JsonValue CrawlerHistory::Jsonize() const
{
  JsonValue payload;

  if(m_crawlIdHasBeenSet)
  {
   payload.WithString("CrawlId", m_crawlId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CrawlerHistoryStateMapper::GetNameForCrawlerHistoryState(m_state));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("Summary", m_summary);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_logGroupHasBeenSet)
  {
   payload.WithString("LogGroup", m_logGroup);

  }

  if(m_logStreamHasBeenSet)
  {
   payload.WithString("LogStream", m_logStream);

  }

  if(m_messagePrefixHasBeenSet)
  {
   payload.WithString("MessagePrefix", m_messagePrefix);

  }

  if(m_dPUHourHasBeenSet)
  {
   payload.WithDouble("DPUHour", m_dPUHour);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
