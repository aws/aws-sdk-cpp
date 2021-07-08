/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class GatewayCapacity
  {
    NOT_SET,
    Small,
    Medium,
    Large
  };

namespace GatewayCapacityMapper
{
AWS_STORAGEGATEWAY_API GatewayCapacity GetGatewayCapacityForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForGatewayCapacity(GatewayCapacity value);
} // namespace GatewayCapacityMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
