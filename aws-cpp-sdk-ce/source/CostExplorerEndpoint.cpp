/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/CostExplorerEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::CostExplorer;

namespace Aws
{
namespace CostExplorer
{
namespace CostExplorerEndpoint
{


  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    AWS_UNREFERENCED_PARAM(regionName);
    AWS_UNREFERENCED_PARAM(useDualStack);
    return "ce.us-east-1.amazonaws.com";
  }

} // namespace CostExplorerEndpoint
} // namespace CostExplorer
} // namespace Aws

