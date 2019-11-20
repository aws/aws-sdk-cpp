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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class DashboardErrorType
  {
    NOT_SET,
    DATA_SET_NOT_FOUND,
    INTERNAL_FAILURE,
    PARAMETER_VALUE_INCOMPATIBLE,
    PARAMETER_TYPE_INVALID,
    PARAMETER_NOT_FOUND,
    COLUMN_TYPE_MISMATCH,
    COLUMN_GEOGRAPHIC_ROLE_MISMATCH,
    COLUMN_REPLACEMENT_MISSING
  };

namespace DashboardErrorTypeMapper
{
AWS_QUICKSIGHT_API DashboardErrorType GetDashboardErrorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDashboardErrorType(DashboardErrorType value);
} // namespace DashboardErrorTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
