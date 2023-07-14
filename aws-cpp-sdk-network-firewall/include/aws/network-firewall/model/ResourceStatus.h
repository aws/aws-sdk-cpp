/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class ResourceStatus
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace ResourceStatusMapper
{
AWS_NETWORKFIREWALL_API ResourceStatus GetResourceStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForResourceStatus(ResourceStatus value);
} // namespace ResourceStatusMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
