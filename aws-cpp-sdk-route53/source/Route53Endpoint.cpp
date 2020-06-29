/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/Route53Endpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::Route53;

namespace Aws
{
namespace Route53
{
namespace Route53Endpoint
{

  static const int US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-west-1");
  static const int US_ISO_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-iso-east-1");

  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    auto hash = Aws::Utils::HashingUtils::HashString(regionName.c_str());

    if(!useDualStack)
    {
      if(hash == US_GOV_WEST_1_HASH)
      {
        return "route53.us-gov.amazonaws.com";
      }
      if(hash == US_ISO_EAST_1_HASH)
      {
        return "route53.c2s.ic.gov";
      }
    }
    return "route53.amazonaws.com";
  }

} // namespace Route53Endpoint
} // namespace Route53
} // namespace Aws

