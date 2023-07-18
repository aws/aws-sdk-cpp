/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class DelegatedAdminStatus
  {
    NOT_SET,
    ENABLED,
    DISABLE_IN_PROGRESS
  };

namespace DelegatedAdminStatusMapper
{
AWS_INSPECTOR2_API DelegatedAdminStatus GetDelegatedAdminStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForDelegatedAdminStatus(DelegatedAdminStatus value);
} // namespace DelegatedAdminStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
