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
  enum class Service
  {
    NOT_SET,
    EC2,
    ECR,
    LAMBDA
  };

namespace ServiceMapper
{
AWS_INSPECTOR2_API Service GetServiceForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForService(Service value);
} // namespace ServiceMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
