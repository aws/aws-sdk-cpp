/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/SavingsPlansEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::SavingsPlans;

namespace Aws
{
namespace SavingsPlans
{
namespace SavingsPlansEndpoint
{


  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    AWS_UNREFERENCED_PARAM(regionName);
    AWS_UNREFERENCED_PARAM(useDualStack);
    return "savingsplans.amazonaws.com";
  }

} // namespace SavingsPlansEndpoint
} // namespace SavingsPlans
} // namespace Aws

