/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationExportJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

RecommendationExportJob::RecommendationExportJob() : 
    m_jobIdHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

RecommendationExportJob::RecommendationExportJob(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationExportJob& RecommendationExportJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("lastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationExportJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("creationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
