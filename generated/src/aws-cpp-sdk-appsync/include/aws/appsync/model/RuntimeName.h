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
  enum class RuntimeName
  {
    NOT_SET,
    APPSYNC_JS
  };

namespace RuntimeNameMapper
{
AWS_APPSYNC_API RuntimeName GetRuntimeNameForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForRuntimeName(RuntimeName value);
} // namespace RuntimeNameMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
