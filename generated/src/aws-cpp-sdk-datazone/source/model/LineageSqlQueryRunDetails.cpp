/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/LineageSqlQueryRunDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

LineageSqlQueryRunDetails::LineageSqlQueryRunDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

LineageSqlQueryRunDetails& LineageSqlQueryRunDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorMessages"))
  {
    Aws::Utils::Array<JsonView> errorMessagesJsonList = jsonValue.GetArray("errorMessages");
    for(unsigned errorMessagesIndex = 0; errorMessagesIndex < errorMessagesJsonList.GetLength(); ++errorMessagesIndex)
    {
      m_errorMessages.push_back(errorMessagesJsonList[errorMessagesIndex].AsString());
    }
    m_errorMessagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numQueriesFailed"))
  {
    m_numQueriesFailed = jsonValue.GetInteger("numQueriesFailed");
    m_numQueriesFailedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryEndTime"))
  {
    m_queryEndTime = jsonValue.GetDouble("queryEndTime");
    m_queryEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryStartTime"))
  {
    m_queryStartTime = jsonValue.GetDouble("queryStartTime");
    m_queryStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalQueriesProcessed"))
  {
    m_totalQueriesProcessed = jsonValue.GetInteger("totalQueriesProcessed");
    m_totalQueriesProcessedHasBeenSet = true;
  }
  return *this;
}

JsonValue LineageSqlQueryRunDetails::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorMessagesJsonList(m_errorMessages.size());
   for(unsigned errorMessagesIndex = 0; errorMessagesIndex < errorMessagesJsonList.GetLength(); ++errorMessagesIndex)
   {
     errorMessagesJsonList[errorMessagesIndex].AsString(m_errorMessages[errorMessagesIndex]);
   }
   payload.WithArray("errorMessages", std::move(errorMessagesJsonList));

  }

  if(m_numQueriesFailedHasBeenSet)
  {
   payload.WithInteger("numQueriesFailed", m_numQueriesFailed);

  }

  if(m_queryEndTimeHasBeenSet)
  {
   payload.WithDouble("queryEndTime", m_queryEndTime.SecondsWithMSPrecision());
  }

  if(m_queryStartTimeHasBeenSet)
  {
   payload.WithDouble("queryStartTime", m_queryStartTime.SecondsWithMSPrecision());
  }

  if(m_totalQueriesProcessedHasBeenSet)
  {
   payload.WithInteger("totalQueriesProcessed", m_totalQueriesProcessed);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
