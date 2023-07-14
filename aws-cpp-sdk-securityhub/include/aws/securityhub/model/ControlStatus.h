/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class ControlStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ControlStatusMapper
{
AWS_SECURITYHUB_API ControlStatus GetControlStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForControlStatus(ControlStatus value);
} // namespace ControlStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
