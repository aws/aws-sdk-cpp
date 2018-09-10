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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{
  enum class ReprocessingStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    CANCELLED,
    FAILED
  };

namespace ReprocessingStatusMapper
{
AWS_IOTANALYTICS_API ReprocessingStatus GetReprocessingStatusForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForReprocessingStatus(ReprocessingStatus value);
} // namespace ReprocessingStatusMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
