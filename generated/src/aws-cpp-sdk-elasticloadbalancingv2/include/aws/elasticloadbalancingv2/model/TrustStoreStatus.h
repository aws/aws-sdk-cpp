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
  enum class TrustStoreStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING
  };

namespace TrustStoreStatusMapper
{
AWS_ELASTICLOADBALANCINGV2_API TrustStoreStatus GetTrustStoreStatusForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForTrustStoreStatus(TrustStoreStatus value);
} // namespace TrustStoreStatusMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
