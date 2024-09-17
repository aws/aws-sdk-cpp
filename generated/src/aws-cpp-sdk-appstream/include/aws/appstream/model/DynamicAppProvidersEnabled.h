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
  enum class DynamicAppProvidersEnabled
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DynamicAppProvidersEnabledMapper
{
AWS_APPSTREAM_API DynamicAppProvidersEnabled GetDynamicAppProvidersEnabledForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForDynamicAppProvidersEnabled(DynamicAppProvidersEnabled value);
} // namespace DynamicAppProvidersEnabledMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
