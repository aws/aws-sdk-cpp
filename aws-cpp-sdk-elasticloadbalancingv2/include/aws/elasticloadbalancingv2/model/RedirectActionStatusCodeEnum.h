/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
