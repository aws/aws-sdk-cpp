/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{
  enum class HealthCheckType
  {
    NOT_SET,
    HTTP,
    HTTPS,
    HTTP_STR_MATCH,
    HTTPS_STR_MATCH,
    TCP,
    CALCULATED,
    CLOUDWATCH_METRIC
  };

namespace HealthCheckTypeMapper
{
AWS_ROUTE53_API HealthCheckType GetHealthCheckTypeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForHealthCheckType(HealthCheckType value);
} // namespace HealthCheckTypeMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
