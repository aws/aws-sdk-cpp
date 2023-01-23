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
  enum class DefaultAction
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace DefaultActionMapper
{
AWS_APPSYNC_API DefaultAction GetDefaultActionForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForDefaultAction(DefaultAction value);
} // namespace DefaultActionMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
