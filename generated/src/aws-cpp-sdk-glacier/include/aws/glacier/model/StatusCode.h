/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class StatusCode
  {
    NOT_SET,
    InProgress,
    Succeeded,
    Failed
  };

namespace StatusCodeMapper
{
AWS_GLACIER_API StatusCode GetStatusCodeForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForStatusCode(StatusCode value);
} // namespace StatusCodeMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
