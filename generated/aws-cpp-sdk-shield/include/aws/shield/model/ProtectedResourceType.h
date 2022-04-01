/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class ProtectedResourceType
  {
    NOT_SET,
    CLOUDFRONT_DISTRIBUTION,
    ROUTE_53_HOSTED_ZONE,
    ELASTIC_IP_ALLOCATION,
    CLASSIC_LOAD_BALANCER,
    APPLICATION_LOAD_BALANCER,
    GLOBAL_ACCELERATOR
  };

namespace ProtectedResourceTypeMapper
{
AWS_SHIELD_API ProtectedResourceType GetProtectedResourceTypeForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForProtectedResourceType(ProtectedResourceType value);
} // namespace ProtectedResourceTypeMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
