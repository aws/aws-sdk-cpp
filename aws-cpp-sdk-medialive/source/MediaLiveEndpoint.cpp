/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/MediaLiveEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::MediaLive;

namespace Aws
{
namespace MediaLive
{
namespace MediaLiveEndpoint
{
  static const int CN_NORTH_1_HASH = Aws::Utils::HashingUtils::HashString("cn-north-1");
  static const int CN_NORTHWEST_1_HASH = Aws::Utils::HashingUtils::HashString("cn-northwest-1");
  static const int US_ISO_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-iso-east-1");
  static const int US_ISOB_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-isob-east-1");


  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    auto hash = Aws::Utils::HashingUtils::HashString(regionName.c_str());

    Aws::StringStream ss;
    ss << "medialive" << ".";

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

} // namespace MediaLiveEndpoint
} // namespace MediaLive
} // namespace Aws

