/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/OrganizationsEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::Organizations;

namespace Aws
{
namespace Organizations
{
namespace OrganizationsEndpoint
{

  static const int US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-west-1");

  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    auto hash = Aws::Utils::HashingUtils::HashString(regionName.c_str());

    if(!useDualStack)
    {
      if(hash == US_GOV_WEST_1_HASH)
      {
        return "organizations.us-gov-west-1.amazonaws.com";
      }
    }
    return "organizations.us-east-1.amazonaws.com";
  }

} // namespace OrganizationsEndpoint
} // namespace Organizations
} // namespace Aws

