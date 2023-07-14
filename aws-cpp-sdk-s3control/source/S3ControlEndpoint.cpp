﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/S3ControlEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::S3Control;

namespace Aws
{
namespace S3Control
{
namespace S3ControlEndpoint
{
  static const int CN_NORTH_1_HASH = Aws::Utils::HashingUtils::HashString("cn-north-1");
  static const int CN_NORTHWEST_1_HASH = Aws::Utils::HashingUtils::HashString("cn-northwest-1");
  static const int US_ISO_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-iso-east-1");
  static const int US_ISOB_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-isob-east-1");

  static const int US_GOV_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-east-1");
  static const int FIPS_US_GOV_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-east-1-fips");
  static const int US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-west-1");
  static const int FIPS_US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-west-1-fips");

  Aws::String ForOutpostsArn(const S3ControlARN& arn, const Aws::String& regionNameOverride, bool useDualStack, const Aws::String& endpointOverride)
  {
    AWS_UNREFERENCED_PARAM(useDualStack);
    assert(!useDualStack);
    Aws::StringStream ss;

    if (!endpointOverride.empty())
    {
      return endpointOverride;
    }

    const Aws::String& region = regionNameOverride.empty() ? arn.GetRegion() : regionNameOverride;
    auto hash = Aws::Utils::HashingUtils::HashString(region.c_str());

    ss << "s3-outposts." << region << ".amazonaws.com";

    if (hash == CN_NORTH_1_HASH || hash == CN_NORTHWEST_1_HASH)
    {
      ss << ".cn";
    }

    return ss.str();
  }

  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack, bool hasOutpostId)
  {
    Aws::String serviceName = hasOutpostId ? "s3-outposts" : "s3-control";

    // Fallback to us-east-1 if global endpoint does not exists.
    Aws::String region = regionName == Aws::Region::AWS_GLOBAL ? Aws::Region::US_EAST_1 : regionName;
    auto hash = Aws::Utils::HashingUtils::HashString(regionName.c_str());

    Aws::StringStream ss;
    ss << serviceName;

    if(!useDualStack)
    {
      if(hash == US_GOV_EAST_1_HASH)
      {
        ss << ".us-gov-east-1.amazonaws.com";
        return ss.str();
      }
      if(hash == FIPS_US_GOV_EAST_1_HASH)
      {
        ss << "-fips.us-gov-east-1.amazonaws.com";
        return ss.str();
      }
      if(hash == US_GOV_WEST_1_HASH)
      {
        ss << ".us-gov-west-1.amazonaws.com";
        return ss.str();
      }
      if(hash == FIPS_US_GOV_WEST_1_HASH)
      {
        ss << "-fips.us-gov-west-1.amazonaws.com";
        return ss.str();
      }
    }

    ss << ".";

    if(useDualStack)
    {
      // S3 Outposts endpoints doesn't support dualstack right now.
      assert(!hasOutpostId);
      ss << "dualstack.";
    }

    ss << region;

    if (hash == CN_NORTH_1_HASH || hash == CN_NORTHWEST_1_HASH)
    {
      ss << ".amazonaws.com.cn";
    }
    else if (hash == US_ISO_EAST_1_HASH)
    {
      ss << ".c2s.ic.gov";
    }
    else if (hash == US_ISOB_EAST_1_HASH)
    {
      ss << ".sc2s.sgov.gov";
    }
    else
    {
      ss << ".amazonaws.com";
    }

    return ss.str();
  }

} // namespace S3ControlEndpoint
} // namespace S3Control
} // namespace Aws
