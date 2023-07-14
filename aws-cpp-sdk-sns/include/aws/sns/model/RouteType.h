/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{
  enum class RouteType
  {
    NOT_SET,
    Transactional,
    Promotional,
    Premium
  };

namespace RouteTypeMapper
{
AWS_SNS_API RouteType GetRouteTypeForName(const Aws::String& name);

AWS_SNS_API Aws::String GetNameForRouteType(RouteType value);
} // namespace RouteTypeMapper
} // namespace Model
} // namespace SNS
} // namespace Aws
