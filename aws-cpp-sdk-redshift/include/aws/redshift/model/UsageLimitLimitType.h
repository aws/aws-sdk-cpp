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
  enum class UsageLimitLimitType
  {
    NOT_SET,
    time,
    data_scanned
  };

namespace UsageLimitLimitTypeMapper
{
AWS_REDSHIFT_API UsageLimitLimitType GetUsageLimitLimitTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForUsageLimitLimitType(UsageLimitLimitType value);
} // namespace UsageLimitLimitTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
