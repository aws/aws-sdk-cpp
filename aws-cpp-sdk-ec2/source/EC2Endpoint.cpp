/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/EC2Endpoint.h>
#include <aws/core/Region.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::EC2;

namespace Aws
{
namespace EC2
{
namespace EC2Endpoint
{
  static const int CN_NORTH_1_HASH = Aws::Utils::HashingUtils::HashString("cn-north-1");
  static const int CN_NORTHWEST_1_HASH = Aws::Utils::HashingUtils::HashString("cn-northwest-1");
  static const int US_ISO_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-iso-east-1");
  static const int US_ISOB_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-isob-east-1");
  static const int US_ISO_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("us-iso-west-1");

  // https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Using_Endpoints.html#ipv6
  static const Aws::UnorderedSet<Aws::String> EC2_DUALSTACK_REGIONS {
          Aws::Region::US_EAST_1, Aws::Region::US_EAST_2, Aws::Region::US_WEST_2, Aws::Region::US_WEST_1,
          Aws::Region::AP_SOUTH_1, Aws::Region::SA_EAST_1};
  static const char* EC2_ENDPOINT_TAG = "EC2Endpoint";

  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    // Fallback to us-east-1 if global endpoint does not exists.
    Aws::String region = regionName == Aws::Region::AWS_GLOBAL ? Aws::Region::US_EAST_1 : regionName;
    auto hash = Aws::Utils::HashingUtils::HashString(region.c_str());

    Aws::StringStream ss;
    if(useDualStack)
    {
      if ((EC2_DUALSTACK_REGIONS.find(regionName)) == EC2_DUALSTACK_REGIONS.end())
      {
        AWS_LOGSTREAM_WARN(EC2_ENDPOINT_TAG,
                           "EC2 service does not support dualstack endpoint in the region: " << regionName);
      }
      ss << "api.";
    }
    ss << "ec2." << region;

    if (hash == CN_NORTH_1_HASH || hash == CN_NORTHWEST_1_HASH)
    {
      ss << ".amazonaws.com.cn";
    }
    else if (hash == US_ISO_EAST_1_HASH || hash == US_ISO_WEST_1_HASH)
    {
      ss << ".c2s.ic.gov";
    }
    else if (hash == US_ISOB_EAST_1_HASH)
    {
      ss << ".sc2s.sgov.gov";
    }
    else
    {
      if(useDualStack)
      {
        ss << ".aws";
      }
      else
      {
        ss << ".amazonaws.com";
      }
    }

    return ss.str();
  }

} // namespace EC2Endpoint
} // namespace EC2
} // namespace Aws

