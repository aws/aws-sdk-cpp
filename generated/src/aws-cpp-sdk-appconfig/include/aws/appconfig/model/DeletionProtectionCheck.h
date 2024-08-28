/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{
  enum class DeletionProtectionCheck
  {
    NOT_SET,
    ACCOUNT_DEFAULT,
    APPLY,
    BYPASS
  };

namespace DeletionProtectionCheckMapper
{
AWS_APPCONFIG_API DeletionProtectionCheck GetDeletionProtectionCheckForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForDeletionProtectionCheck(DeletionProtectionCheck value);
} // namespace DeletionProtectionCheckMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
