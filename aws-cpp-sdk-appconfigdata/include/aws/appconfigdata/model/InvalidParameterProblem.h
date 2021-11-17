/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfigData
{
namespace Model
{
  enum class InvalidParameterProblem
  {
    NOT_SET,
    Corrupted,
    Expired,
    PollIntervalNotSatisfied
  };

namespace InvalidParameterProblemMapper
{
AWS_APPCONFIGDATA_API InvalidParameterProblem GetInvalidParameterProblemForName(const Aws::String& name);

AWS_APPCONFIGDATA_API Aws::String GetNameForInvalidParameterProblem(InvalidParameterProblem value);
} // namespace InvalidParameterProblemMapper
} // namespace Model
} // namespace AppConfigData
} // namespace Aws
