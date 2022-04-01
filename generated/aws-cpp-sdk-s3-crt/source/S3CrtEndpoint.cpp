﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/S3CrtEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::S3Crt;

namespace Aws
{
namespace S3Crt
{
namespace S3CrtEndpoint
{
  static const int CN_NORTH_1_HASH = Aws::Utils::HashingUtils::HashString("cn-north-1");
  static const int CN_NORTHWEST_1_HASH = Aws::Utils::HashingUtils::HashString("cn-northwest-1");
  static const int US_ISO_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-iso-east-1");
  static const int US_ISOB_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-isob-east-1");

  static const int FIPS_US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("fips-us-gov-west-1");
  static const int US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-west-1");
  static const int US_GOV_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-east-1");
  static const int S3_EXTERNAL_1_HASH = Aws::Utils::HashingUtils::HashString("s3-external-1");
  static const int US_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-east-1");
  static const int AWS_GLOBAL_HASH = Aws::Utils::HashingUtils::HashString("aws-global");

  Aws::String ForAccessPointArn(const S3CrtARN& arn, const Aws::String& regionNameOverride, bool useDualStack, const Aws::String& endpointOverride)
  {
    Aws::StringStream ss;

    if (!endpointOverride.empty())
    {
      ss << arn.GetResourceId() << "-" << arn.GetAccountId() << "." << endpointOverride;
      return ss.str();
    }

    const Aws::String& region = regionNameOverride.empty() ? arn.GetRegion() : regionNameOverride;
    Aws::String fipsSuffix = Aws::Region::IsFipsRegion(region) ? "-fips" : "";
    Aws::String dualstackSuffix = useDualStack ? "dualstack." : "";

    ss << arn.GetResourceId() << "-" << arn.GetAccountId() << ".s3-accesspoint" << fipsSuffix << "."
      << dualstackSuffix << Aws::Region::ComputeSignerRegion(region) << "." << "amazonaws.com";

    auto hash = Aws::Utils::HashingUtils::HashString(region.c_str());
    if (hash == CN_NORTH_1_HASH || hash == CN_NORTHWEST_1_HASH)
    {
      ss << ".cn";
    }

    return ss.str();
  }

  Aws::String ForMultiRegionAccessPointArn(const S3CrtARN& arn, bool useDualStack, const Aws::String& endpointOverride)
  {
    AWS_UNREFERENCED_PARAM(useDualStack);
    AWS_UNREFERENCED_PARAM(endpointOverride);
    assert(!useDualStack);
    assert(endpointOverride.empty());
    Aws::StringStream ss;
    ss << arn.GetResourceId() << ".accesspoint.s3-global.amazonaws.com";
    if (arn.GetPartition() == "aws-cn")
    {
      ss << ".cn";
    }
    return ss.str();
  }

  Aws::String ForOutpostsArn(const S3CrtARN& arn, const Aws::String& regionNameOverride, bool useDualStack, const Aws::String& endpointOverride)
  {
    AWS_UNREFERENCED_PARAM(useDualStack);
    assert(!useDualStack);
    assert(!Aws::Region::IsFipsRegion(regionNameOverride));
    Aws::StringStream ss;

    if (!endpointOverride.empty())
    {
      ss << arn.GetSubResourceId() << "-" << arn.GetAccountId() << "." << arn.GetResourceId() << "." << endpointOverride;
      return ss.str();
    }

    const Aws::String& region = regionNameOverride.empty() ? arn.GetRegion() : regionNameOverride;
    auto hash = Aws::Utils::HashingUtils::HashString(region.c_str());

    ss << arn.GetSubResourceId() << "-" << arn.GetAccountId() << "." << arn.GetResourceId() << "." << ARNService::S3_OUTPOSTS << "." << region << "." << "amazonaws.com";

    if (hash == CN_NORTH_1_HASH || hash == CN_NORTHWEST_1_HASH)
    {
      ss << ".cn";
    }

    return ss.str();
  }

  Aws::String ForObjectLambdaAccessPointArn(const S3CrtARN& arn, const Aws::String& regionNameOverride, bool useDualStack, const Aws::String& endpointOverride)
  {
    AWS_UNREFERENCED_PARAM(useDualStack);
    assert(!useDualStack);
    Aws::StringStream ss;

    if (!endpointOverride.empty())
    {
      ss << arn.GetResourceId() << "-" << arn.GetAccountId() << "." << endpointOverride;
      return ss.str();
    }

    const Aws::String& region = regionNameOverride.empty() ? arn.GetRegion() : regionNameOverride;
    Aws::String fipsSuffix = Aws::Region::IsFipsRegion(region) ? "-fips" : "";

    ss << arn.GetResourceId() << "-" << arn.GetAccountId() << "." << ARNService::S3_OBJECT_LAMBDA << fipsSuffix << "."
      << Aws::Region::ComputeSignerRegion(region) << "." << "amazonaws.com";

    auto hash = Aws::Utils::HashingUtils::HashString(region.c_str());
    if (hash == CN_NORTH_1_HASH || hash == CN_NORTHWEST_1_HASH)
    {
      ss << ".cn";
    }

    return ss.str();
  }

  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack, bool USEast1UseRegionalEndpoint, const Aws::String& serviceName)
  {
    auto hash = Aws::Utils::HashingUtils::HashString(regionName.c_str());

    if (!serviceName.empty())
    {
      assert(!useDualStack);

      Aws::String fipsSuffix = Aws::Region::IsFipsRegion(regionName) ? "-fips" : "";
      Aws::StringStream ss;
      ss << serviceName << fipsSuffix << "." << Aws::Region::ComputeSignerRegion(regionName) << ".amazonaws.com";

      if (hash == CN_NORTH_1_HASH || hash == CN_NORTHWEST_1_HASH)
      {
        ss << ".cn";
      }
      return ss.str();
    }

    if(!useDualStack)
    {
      if(hash == FIPS_US_GOV_WEST_1_HASH)
      {
        return "s3-fips-us-gov-west-1.amazonaws.com";
      }
      if(hash == US_GOV_WEST_1_HASH)
      {
        return "s3.us-gov-west-1.amazonaws.com";
      }
      if(hash == US_GOV_EAST_1_HASH)
      {
        return "s3.us-gov-east-1.amazonaws.com";
      }
      if (hash == AWS_GLOBAL_HASH)
      {
        return "s3.amazonaws.com";
      }
      if (hash == S3_EXTERNAL_1_HASH)
      {
        return "s3-external-1.amazonaws.com";
      }
      if(hash == US_EAST_1_HASH)
      {
        if (USEast1UseRegionalEndpoint)
        {
          return "s3.us-east-1.amazonaws.com";
        }
        else
        {
          return "s3.amazonaws.com";
        }
      }
    }
    Aws::StringStream ss;
    ss << "s3" << ".";

    if(useDualStack)
    {
      ss << "dualstack.";
    }

    ss << regionName;

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

} // namespace S3CrtEndpoint
} // namespace S3Crt
} // namespace Aws
