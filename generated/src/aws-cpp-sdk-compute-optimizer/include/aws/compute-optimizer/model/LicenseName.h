/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class LicenseName
  {
    NOT_SET,
    SQLServer
  };

namespace LicenseNameMapper
{
AWS_COMPUTEOPTIMIZER_API LicenseName GetLicenseNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLicenseName(LicenseName value);
} // namespace LicenseNameMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
