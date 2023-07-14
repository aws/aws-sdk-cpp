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
  enum class AuthenticateOidcActionConditionalBehaviorEnum
  {
    NOT_SET,
    deny,
    allow,
    authenticate
  };

namespace AuthenticateOidcActionConditionalBehaviorEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API AuthenticateOidcActionConditionalBehaviorEnum GetAuthenticateOidcActionConditionalBehaviorEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForAuthenticateOidcActionConditionalBehaviorEnum(AuthenticateOidcActionConditionalBehaviorEnum value);
} // namespace AuthenticateOidcActionConditionalBehaviorEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
