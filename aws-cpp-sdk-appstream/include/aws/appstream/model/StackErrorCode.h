/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class StackErrorCode
  {
    NOT_SET,
    STORAGE_CONNECTOR_ERROR,
    INTERNAL_SERVICE_ERROR
  };

namespace StackErrorCodeMapper
{
AWS_APPSTREAM_API StackErrorCode GetStackErrorCodeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForStackErrorCode(StackErrorCode value);
} // namespace StackErrorCodeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
