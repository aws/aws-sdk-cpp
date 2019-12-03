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

#include <aws/kendra/model/DataSourceSyncJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DataSourceSyncJob::DataSourceSyncJob() : 
    m_executionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(DataSourceSyncJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_dataSourceErrorCodeHasBeenSet(false)
{
}

DataSourceSyncJob::DataSourceSyncJob(JsonView jsonValue) : 
    m_executionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(DataSourceSyncJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_dataSourceErrorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceSyncJob& DataSourceSyncJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DataSourceSyncJobStatusMapper::GetDataSourceSyncJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSourceErrorCode"))
  {
    m_dataSourceErrorCode = jsonValue.GetString("DataSourceErrorCode");

    m_dataSourceErrorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceSyncJob::Jsonize() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DataSourceSyncJobStatusMapper::GetNameForDataSourceSyncJobStatus(m_status));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  if(m_dataSourceErrorCodeHasBeenSet)
  {
   payload.WithString("DataSourceErrorCode", m_dataSourceErrorCode);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
