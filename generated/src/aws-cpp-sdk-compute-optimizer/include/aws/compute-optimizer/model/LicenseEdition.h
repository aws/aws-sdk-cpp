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
  enum class LicenseEdition
  {
    NOT_SET,
    Enterprise,
    Standard,
    Free,
    NoLicenseEditionFound
  };

namespace LicenseEditionMapper
{
AWS_COMPUTEOPTIMIZER_API LicenseEdition GetLicenseEditionForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLicenseEdition(LicenseEdition value);
} // namespace LicenseEditionMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
