/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/LogAnomalyClass.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

LogAnomalyClass::LogAnomalyClass() : 
    m_logStreamNameHasBeenSet(false),
    m_logAnomalyType(LogAnomalyType::NOT_SET),
    m_logAnomalyTypeHasBeenSet(false),
    m_logAnomalyTokenHasBeenSet(false),
    m_logEventIdHasBeenSet(false),
    m_explanationHasBeenSet(false),
    m_numberOfLogLinesOccurrences(0),
    m_numberOfLogLinesOccurrencesHasBeenSet(false),
    m_logEventTimestampHasBeenSet(false)
{
}

LogAnomalyClass::LogAnomalyClass(JsonView jsonValue) : 
    m_logStreamNameHasBeenSet(false),
    m_logAnomalyType(LogAnomalyType::NOT_SET),
    m_logAnomalyTypeHasBeenSet(false),
    m_logAnomalyTokenHasBeenSet(false),
    m_logEventIdHasBeenSet(false),
    m_explanationHasBeenSet(false),
    m_numberOfLogLinesOccurrences(0),
    m_numberOfLogLinesOccurrencesHasBeenSet(false),
    m_logEventTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

LogAnomalyClass& LogAnomalyClass::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogStreamName"))
  {
    m_logStreamName = jsonValue.GetString("LogStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogAnomalyType"))
  {
    m_logAnomalyType = LogAnomalyTypeMapper::GetLogAnomalyTypeForName(jsonValue.GetString("LogAnomalyType"));

    m_logAnomalyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogAnomalyToken"))
  {
    m_logAnomalyToken = jsonValue.GetString("LogAnomalyToken");

    m_logAnomalyTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogEventId"))
  {
    m_logEventId = jsonValue.GetString("LogEventId");

    m_logEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Explanation"))
  {
    m_explanation = jsonValue.GetString("Explanation");

    m_explanationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfLogLinesOccurrences"))
  {
    m_numberOfLogLinesOccurrences = jsonValue.GetInteger("NumberOfLogLinesOccurrences");

    m_numberOfLogLinesOccurrencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogEventTimestamp"))
  {
    m_logEventTimestamp = jsonValue.GetDouble("LogEventTimestamp");

    m_logEventTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue LogAnomalyClass::Jsonize() const
{
  JsonValue payload;

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("LogStreamName", m_logStreamName);

  }

  if(m_logAnomalyTypeHasBeenSet)
  {
   payload.WithString("LogAnomalyType", LogAnomalyTypeMapper::GetNameForLogAnomalyType(m_logAnomalyType));
  }

  if(m_logAnomalyTokenHasBeenSet)
  {
   payload.WithString("LogAnomalyToken", m_logAnomalyToken);

  }

  if(m_logEventIdHasBeenSet)
  {
   payload.WithString("LogEventId", m_logEventId);

  }

  if(m_explanationHasBeenSet)
  {
   payload.WithString("Explanation", m_explanation);

  }

  if(m_numberOfLogLinesOccurrencesHasBeenSet)
  {
   payload.WithInteger("NumberOfLogLinesOccurrences", m_numberOfLogLinesOccurrences);

  }

  if(m_logEventTimestampHasBeenSet)
  {
   payload.WithDouble("LogEventTimestamp", m_logEventTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
