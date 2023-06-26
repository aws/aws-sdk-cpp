/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class TracingVendor
  {
    NOT_SET,
    AWSXRAY
  };

namespace TracingVendorMapper
{
AWS_APPRUNNER_API TracingVendor GetTracingVendorForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForTracingVendor(TracingVendor value);
} // namespace TracingVendorMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
