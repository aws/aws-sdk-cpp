/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{
  enum class RedirectActionStatusCodeEnum
  {
    NOT_SET,
    HTTP_301,
    HTTP_302
  };

namespace RedirectActionStatusCodeEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API RedirectActionStatusCodeEnum GetRedirectActionStatusCodeEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForRedirectActionStatusCodeEnum(RedirectActionStatusCodeEnum value);
} // namespace RedirectActionStatusCodeEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
