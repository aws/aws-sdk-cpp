/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/athena/model/QueryExecutionStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryExecutionStatistics::QueryExecutionStatistics() : 
    m_engineExecutionTimeInMillis(0),
    m_engineExecutionTimeInMillisHasBeenSet(false),
    m_dataScannedInBytes(0),
    m_dataScannedInBytesHasBeenSet(false)
{
}

QueryExecutionStatistics::QueryExecutionStatistics(const JsonValue& jsonValue) : 
    m_engineExecutionTimeInMillis(0),
    m_engineExecutionTimeInMillisHasBeenSet(false),
    m_dataScannedInBytes(0),
    m_dataScannedInBytesHasBeenSet(false)
{
  *this = jsonValue;
}

QueryExecutionStatistics& QueryExecutionStatistics::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EngineExecutionTimeInMillis"))
  {
    m_engineExecutionTimeInMillis = jsonValue.GetInt64("EngineExecutionTimeInMillis");

    m_engineExecutionTimeInMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataScannedInBytes"))
  {
    m_dataScannedInBytes = jsonValue.GetInt64("DataScannedInBytes");

    m_dataScannedInBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryExecutionStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_engineExecutionTimeInMillisHasBeenSet)
  {
   payload.WithInt64("EngineExecutionTimeInMillis", m_engineExecutionTimeInMillis);

  }

  if(m_dataScannedInBytesHasBeenSet)
  {
   payload.WithInt64("DataScannedInBytes", m_dataScannedInBytes);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
