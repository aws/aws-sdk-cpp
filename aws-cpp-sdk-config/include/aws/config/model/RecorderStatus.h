/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class RecorderStatus
  {
    NOT_SET,
    Pending,
    Success,
    Failure
  };

namespace RecorderStatusMapper
{
AWS_CONFIGSERVICE_API RecorderStatus GetRecorderStatusForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForRecorderStatus(RecorderStatus value);
} // namespace RecorderStatusMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
