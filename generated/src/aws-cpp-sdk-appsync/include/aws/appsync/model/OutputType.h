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
  enum class OutputType
  {
    NOT_SET,
    SDL,
    JSON
  };

namespace OutputTypeMapper
{
AWS_APPSYNC_API OutputType GetOutputTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForOutputType(OutputType value);
} // namespace OutputTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
