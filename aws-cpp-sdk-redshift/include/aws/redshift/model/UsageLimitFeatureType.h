/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class UsageLimitFeatureType
  {
    NOT_SET,
    spectrum,
    concurrency_scaling
  };

namespace UsageLimitFeatureTypeMapper
{
AWS_REDSHIFT_API UsageLimitFeatureType GetUsageLimitFeatureTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForUsageLimitFeatureType(UsageLimitFeatureType value);
} // namespace UsageLimitFeatureTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
