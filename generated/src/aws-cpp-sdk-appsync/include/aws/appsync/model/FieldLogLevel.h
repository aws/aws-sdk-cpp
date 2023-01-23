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
  enum class FieldLogLevel
  {
    NOT_SET,
    NONE,
    ERROR_,
    ALL
  };

namespace FieldLogLevelMapper
{
AWS_APPSYNC_API FieldLogLevel GetFieldLogLevelForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForFieldLogLevel(FieldLogLevel value);
} // namespace FieldLogLevelMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
