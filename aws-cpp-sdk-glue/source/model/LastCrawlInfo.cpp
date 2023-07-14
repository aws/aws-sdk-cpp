/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/LastCrawlInfo.h>
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

LastCrawlInfo::LastCrawlInfo() : 
    m_status(LastCrawlStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_logStreamHasBeenSet(false),
    m_messagePrefixHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

LastCrawlInfo::LastCrawlInfo(JsonView jsonValue) : 
    m_status(LastCrawlStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_logStreamHasBeenSet(false),
    m_messagePrefixHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LastCrawlInfo& LastCrawlInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = LastCrawlStatusMapper::GetLastCrawlStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LastCrawlInfo::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", LastCrawlStatusMapper::GetNameForLastCrawlStatus(m_status));
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

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
