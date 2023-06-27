/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{
  enum class ResultStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    EXPIRED
  };

namespace ResultStatusMapper
{
AWS_APPFABRIC_API ResultStatus GetResultStatusForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForResultStatus(ResultStatus value);
} // namespace ResultStatusMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
