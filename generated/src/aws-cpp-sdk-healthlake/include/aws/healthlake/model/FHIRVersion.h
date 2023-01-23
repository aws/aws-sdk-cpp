/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{
  enum class FHIRVersion
  {
    NOT_SET,
    R4
  };

namespace FHIRVersionMapper
{
AWS_HEALTHLAKE_API FHIRVersion GetFHIRVersionForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForFHIRVersion(FHIRVersion value);
} // namespace FHIRVersionMapper
} // namespace Model
} // namespace HealthLake
} // namespace Aws
