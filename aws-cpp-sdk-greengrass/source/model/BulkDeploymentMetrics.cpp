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
