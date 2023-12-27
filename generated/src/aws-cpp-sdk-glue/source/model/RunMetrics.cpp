/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RunMetrics.h>
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

RunMetrics::RunMetrics() : 
    m_numberOfBytesCompactedHasBeenSet(false),
    m_numberOfFilesCompactedHasBeenSet(false),
    m_numberOfDpusHasBeenSet(false),
    m_jobDurationInHourHasBeenSet(false)
{
}

RunMetrics::RunMetrics(JsonView jsonValue) : 
    m_numberOfBytesCompactedHasBeenSet(false),
    m_numberOfFilesCompactedHasBeenSet(false),
    m_numberOfDpusHasBeenSet(false),
    m_jobDurationInHourHasBeenSet(false)
{
  *this = jsonValue;
}

RunMetrics& RunMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfBytesCompacted"))
  {
    m_numberOfBytesCompacted = jsonValue.GetString("NumberOfBytesCompacted");

    m_numberOfBytesCompactedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfFilesCompacted"))
  {
    m_numberOfFilesCompacted = jsonValue.GetString("NumberOfFilesCompacted");

    m_numberOfFilesCompactedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfDpus"))
  {
    m_numberOfDpus = jsonValue.GetString("NumberOfDpus");

    m_numberOfDpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobDurationInHour"))
  {
    m_jobDurationInHour = jsonValue.GetString("JobDurationInHour");

    m_jobDurationInHourHasBeenSet = true;
  }

  return *this;
}

JsonValue RunMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfBytesCompactedHasBeenSet)
  {
   payload.WithString("NumberOfBytesCompacted", m_numberOfBytesCompacted);

  }

  if(m_numberOfFilesCompactedHasBeenSet)
  {
   payload.WithString("NumberOfFilesCompacted", m_numberOfFilesCompacted);

  }

  if(m_numberOfDpusHasBeenSet)
  {
   payload.WithString("NumberOfDpus", m_numberOfDpus);

  }

  if(m_jobDurationInHourHasBeenSet)
  {
   payload.WithString("JobDurationInHour", m_jobDurationInHour);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
