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
  enum class RevocationType
  {
    NOT_SET,
    CRL
  };

namespace RevocationTypeMapper
{
AWS_ELASTICLOADBALANCINGV2_API RevocationType GetRevocationTypeForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForRevocationType(RevocationType value);
} // namespace RevocationTypeMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
