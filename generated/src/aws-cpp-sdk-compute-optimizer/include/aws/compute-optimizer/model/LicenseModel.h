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
  enum class LicenseModel
  {
    NOT_SET,
    LicenseIncluded,
    BringYourOwnLicense
  };

namespace LicenseModelMapper
{
AWS_COMPUTEOPTIMIZER_API LicenseModel GetLicenseModelForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForLicenseModel(LicenseModel value);
} // namespace LicenseModelMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
