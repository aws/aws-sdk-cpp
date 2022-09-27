/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/QueryStatistics.h>
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

QueryStatistics::QueryStatistics() : 
    m_resultsCount(0),
    m_resultsCountHasBeenSet(false),
    m_totalResultsCount(0),
    m_totalResultsCountHasBeenSet(false),
    m_bytesScanned(0),
    m_bytesScannedHasBeenSet(false)
{
}

QueryStatistics::QueryStatistics(JsonView jsonValue) : 
    m_resultsCount(0),
    m_resultsCountHasBeenSet(false),
    m_totalResultsCount(0),
    m_totalResultsCountHasBeenSet(false),
    m_bytesScanned(0),
    m_bytesScannedHasBeenSet(false)
{
  *this = jsonValue;
}

QueryStatistics& QueryStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultsCount"))
  {
    m_resultsCount = jsonValue.GetInteger("ResultsCount");

    m_resultsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalResultsCount"))
  {
    m_totalResultsCount = jsonValue.GetInteger("TotalResultsCount");

    m_totalResultsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BytesScanned"))
  {
    m_bytesScanned = jsonValue.GetInt64("BytesScanned");

    m_bytesScannedHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_resultsCountHasBeenSet)
  {
   payload.WithInteger("ResultsCount", m_resultsCount);

  }

  if(m_totalResultsCountHasBeenSet)
  {
   payload.WithInteger("TotalResultsCount", m_totalResultsCount);

  }

  if(m_bytesScannedHasBeenSet)
  {
   payload.WithInt64("BytesScanned", m_bytesScanned);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
