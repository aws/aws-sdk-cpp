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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class ContinuousExportStatus
  {
    NOT_SET,
    START_IN_PROGRESS,
    START_FAILED,
    ACTIVE,
    ERROR_,
    STOP_IN_PROGRESS,
    STOP_FAILED,
    INACTIVE
  };

namespace ContinuousExportStatusMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API ContinuousExportStatus GetContinuousExportStatusForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForContinuousExportStatus(ContinuousExportStatus value);
} // namespace ContinuousExportStatusMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
