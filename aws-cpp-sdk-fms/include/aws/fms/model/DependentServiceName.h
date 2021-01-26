/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class DependentServiceName
  {
    NOT_SET,
    AWSCONFIG,
    AWSWAF,
    AWSSHIELD_ADVANCED,
    AWSVPC
  };

namespace DependentServiceNameMapper
{
AWS_FMS_API DependentServiceName GetDependentServiceNameForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForDependentServiceName(DependentServiceName value);
} // namespace DependentServiceNameMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
