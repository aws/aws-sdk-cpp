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

#include <aws/logs/model/QueryStatistics.h>
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

QueryStatistics::QueryStatistics() : 
    m_recordsMatched(0.0),
    m_recordsMatchedHasBeenSet(false),
    m_recordsScanned(0.0),
    m_recordsScannedHasBeenSet(false),
    m_bytesScanned(0.0),
    m_bytesScannedHasBeenSet(false)
{
}

QueryStatistics::QueryStatistics(JsonView jsonValue) : 
    m_recordsMatched(0.0),
    m_recordsMatchedHasBeenSet(false),
    m_recordsScanned(0.0),
    m_recordsScannedHasBeenSet(false),
    m_bytesScanned(0.0),
    m_bytesScannedHasBeenSet(false)
{
  *this = jsonValue;
}

QueryStatistics& QueryStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordsMatched"))
  {
    m_recordsMatched = jsonValue.GetDouble("recordsMatched");

    m_recordsMatchedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordsScanned"))
  {
    m_recordsScanned = jsonValue.GetDouble("recordsScanned");

    m_recordsScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bytesScanned"))
  {
    m_bytesScanned = jsonValue.GetDouble("bytesScanned");

    m_bytesScannedHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_recordsMatchedHasBeenSet)
  {
   payload.WithDouble("recordsMatched", m_recordsMatched);

  }

  if(m_recordsScannedHasBeenSet)
  {
   payload.WithDouble("recordsScanned", m_recordsScanned);

  }

  if(m_bytesScannedHasBeenSet)
  {
   payload.WithDouble("bytesScanned", m_bytesScanned);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
