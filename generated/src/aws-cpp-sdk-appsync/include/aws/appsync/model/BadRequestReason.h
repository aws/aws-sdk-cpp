/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class BadRequestReason
  {
    NOT_SET,
    CODE_ERROR
  };

namespace BadRequestReasonMapper
{
AWS_APPSYNC_API BadRequestReason GetBadRequestReasonForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForBadRequestReason(BadRequestReason value);
} // namespace BadRequestReasonMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
