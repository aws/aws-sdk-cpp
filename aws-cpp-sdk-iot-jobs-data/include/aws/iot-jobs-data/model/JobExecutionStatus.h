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

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{
  enum class JobExecutionStatus
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    TIMED_OUT,
    REJECTED,
    REMOVED,
    CANCELED
  };

namespace JobExecutionStatusMapper
{
AWS_IOTJOBSDATAPLANE_API JobExecutionStatus GetJobExecutionStatusForName(const Aws::String& name);

AWS_IOTJOBSDATAPLANE_API Aws::String GetNameForJobExecutionStatus(JobExecutionStatus value);
} // namespace JobExecutionStatusMapper
} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
