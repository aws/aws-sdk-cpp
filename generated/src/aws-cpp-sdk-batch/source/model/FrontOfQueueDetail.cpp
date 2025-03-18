/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/FrontOfQueueDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

FrontOfQueueDetail::FrontOfQueueDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

FrontOfQueueDetail& FrontOfQueueDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobs"))
  {
    Aws::Utils::Array<JsonView> jobsJsonList = jsonValue.GetArray("jobs");
    for(unsigned jobsIndex = 0; jobsIndex < jobsJsonList.GetLength(); ++jobsIndex)
    {
      m_jobs.push_back(jobsJsonList[jobsIndex].AsObject());
    }
    m_jobsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetInt64("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FrontOfQueueDetail::Jsonize() const
{
  JsonValue payload;

  if(m_jobsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobsJsonList(m_jobs.size());
   for(unsigned jobsIndex = 0; jobsIndex < jobsJsonList.GetLength(); ++jobsIndex)
   {
     jobsJsonList[jobsIndex].AsObject(m_jobs[jobsIndex].Jsonize());
   }
   payload.WithArray("jobs", std::move(jobsJsonList));

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithInt64("lastUpdatedAt", m_lastUpdatedAt);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
