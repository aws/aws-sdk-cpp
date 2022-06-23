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
  enum class BadRequestReason
  {
    NOT_SET,
    InvalidParameters
  };

namespace BadRequestReasonMapper
{
AWS_APPCONFIGDATA_API BadRequestReason GetBadRequestReasonForName(const Aws::String& name);

AWS_APPCONFIGDATA_API Aws::String GetNameForBadRequestReason(BadRequestReason value);
} // namespace BadRequestReasonMapper
} // namespace Model
} // namespace AppConfigData
} // namespace Aws
