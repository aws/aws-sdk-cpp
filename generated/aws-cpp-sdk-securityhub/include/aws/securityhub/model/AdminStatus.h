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
  enum class AdminStatus
  {
    NOT_SET,
    ENABLED,
    DISABLE_IN_PROGRESS
  };

namespace AdminStatusMapper
{
AWS_SECURITYHUB_API AdminStatus GetAdminStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAdminStatus(AdminStatus value);
} // namespace AdminStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
