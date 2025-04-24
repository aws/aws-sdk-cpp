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
  enum class InvokeType
  {
    NOT_SET,
    REQUEST_RESPONSE,
    EVENT
  };

namespace InvokeTypeMapper
{
AWS_APPSYNC_API InvokeType GetInvokeTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForInvokeType(InvokeType value);
} // namespace InvokeTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
