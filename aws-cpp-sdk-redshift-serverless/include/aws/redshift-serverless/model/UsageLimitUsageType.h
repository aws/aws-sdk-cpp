/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class UsageLimitUsageType
  {
    NOT_SET,
    serverless_compute,
    cross_region_datasharing
  };

namespace UsageLimitUsageTypeMapper
{
AWS_REDSHIFTSERVERLESS_API UsageLimitUsageType GetUsageLimitUsageTypeForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForUsageLimitUsageType(UsageLimitUsageType value);
} // namespace UsageLimitUsageTypeMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
