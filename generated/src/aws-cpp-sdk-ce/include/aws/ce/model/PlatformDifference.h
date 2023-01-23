/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class PlatformDifference
  {
    NOT_SET,
    HYPERVISOR,
    NETWORK_INTERFACE,
    STORAGE_INTERFACE,
    INSTANCE_STORE_AVAILABILITY,
    VIRTUALIZATION_TYPE
  };

namespace PlatformDifferenceMapper
{
AWS_COSTEXPLORER_API PlatformDifference GetPlatformDifferenceForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForPlatformDifference(PlatformDifference value);
} // namespace PlatformDifferenceMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
