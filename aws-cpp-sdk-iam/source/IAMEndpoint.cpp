/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/IAMEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::IAM;

namespace Aws
{
namespace IAM
{
namespace IAMEndpoint
{

  static const int CN_NORTH_1_HASH = Aws::Utils::HashingUtils::HashString("cn-north-1");
  static const int US_GOV_WEST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-west-1");
  static const int US_ISO_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-iso-east-1");
  static const int US_GOV_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-gov-east-1");
  static const int CN_NORTHWEST_1_HASH = Aws::Utils::HashingUtils::HashString("cn-northwest-1");
  static const int US_ISOB_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-isob-east-1");

  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    auto hash = Aws::Utils::HashingUtils::HashString(regionName.c_str());

    if(!useDualStack)
    {
      if(hash == CN_NORTH_1_HASH)
      {
        return "iam.cn-north-1.amazonaws.com.cn";
      }
      if(hash == US_GOV_WEST_1_HASH)
      {
        return "iam.us-gov.amazonaws.com";
      }
      if(hash == US_ISO_EAST_1_HASH)
      {
        return "iam.us-iso-east-1.c2s.ic.gov";
      }
      if(hash == US_GOV_EAST_1_HASH)
      {
        return "iam.us-gov.amazonaws.com";
      }
      if(hash == CN_NORTHWEST_1_HASH)
      {
        return "iam.cn-north-1.amazonaws.com.cn";
      }
      if(hash == US_ISOB_EAST_1_HASH)
      {
        return "iam.us-isob-east-1.sc2s.sgov.gov";
      }
    }
    return "iam.amazonaws.com";
  }

} // namespace IAMEndpoint
} // namespace IAM
} // namespace Aws

