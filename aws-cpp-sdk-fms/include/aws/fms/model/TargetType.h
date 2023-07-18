/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class TargetType
  {
    NOT_SET,
    GATEWAY,
    CARRIER_GATEWAY,
    INSTANCE,
    LOCAL_GATEWAY,
    NAT_GATEWAY,
    NETWORK_INTERFACE,
    VPC_ENDPOINT,
    VPC_PEERING_CONNECTION,
    EGRESS_ONLY_INTERNET_GATEWAY,
    TRANSIT_GATEWAY
  };

namespace TargetTypeMapper
{
AWS_FMS_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
