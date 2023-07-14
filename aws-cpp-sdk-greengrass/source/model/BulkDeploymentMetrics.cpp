/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/BulkDeploymentMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

BulkDeploymentMetrics::BulkDeploymentMetrics() : 
    m_invalidInputRecords(0),
    m_invalidInputRecordsHasBeenSet(false),
    m_recordsProcessed(0),
    m_recordsProcessedHasBeenSet(false),
    m_retryAttempts(0),
    m_retryAttemptsHasBeenSet(false)
{
}

BulkDeploymentMetrics::BulkDeploymentMetrics(JsonView jsonValue) : 
    m_invalidInputRecords(0),
    m_invalidInputRecordsHasBeenSet(false),
    m_recordsProcessed(0),
    m_recordsProcessedHasBeenSet(false),
    m_retryAttempts(0),
    m_retryAttemptsHasBeenSet(false)
{
  *this = jsonValue;
}

BulkDeploymentMetrics& BulkDeploymentMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvalidInputRecords"))
  {
    m_invalidInputRecords = jsonValue.GetInteger("InvalidInputRecords");

    m_invalidInputRecordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordsProcessed"))
  {
    m_recordsProcessed = jsonValue.GetInteger("RecordsProcessed");

    m_recordsProcessedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryAttempts"))
  {
    m_retryAttempts = jsonValue.GetInteger("RetryAttempts");

    m_retryAttemptsHasBeenSet = true;
  }

  return *this;
}

JsonValue BulkDeploymentMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_invalidInputRecordsHasBeenSet)
  {
   payload.WithInteger("InvalidInputRecords", m_invalidInputRecords);

  }

  if(m_recordsProcessedHasBeenSet)
  {
   payload.WithInteger("RecordsProcessed", m_recordsProcessed);

  }

  if(m_retryAttemptsHasBeenSet)
  {
   payload.WithInteger("RetryAttempts", m_retryAttempts);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
