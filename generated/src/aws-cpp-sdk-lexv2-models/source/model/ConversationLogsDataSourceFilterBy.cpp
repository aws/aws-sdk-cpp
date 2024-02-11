/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConversationLogsDataSourceFilterBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ConversationLogsDataSourceFilterBy::ConversationLogsDataSourceFilterBy() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_inputMode(ConversationLogsInputModeFilter::NOT_SET),
    m_inputModeHasBeenSet(false)
{
}

ConversationLogsDataSourceFilterBy::ConversationLogsDataSourceFilterBy(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_inputMode(ConversationLogsInputModeFilter::NOT_SET),
    m_inputModeHasBeenSet(false)
{
  *this = jsonValue;
}

ConversationLogsDataSourceFilterBy& ConversationLogsDataSourceFilterBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputMode"))
  {
    m_inputMode = ConversationLogsInputModeFilterMapper::GetConversationLogsInputModeFilterForName(jsonValue.GetString("inputMode"));

    m_inputModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConversationLogsDataSourceFilterBy::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_inputModeHasBeenSet)
  {
   payload.WithString("inputMode", ConversationLogsInputModeFilterMapper::GetNameForConversationLogsInputModeFilter(m_inputMode));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
