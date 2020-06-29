/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/AppStreamEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::AppStream;

namespace Aws
{
namespace AppStream
{
namespace AppStreamEndpoint
{
  static const int CN_NORTH_1_HASH = Aws::Utils::HashingUtils::HashString("cn-north-1");
  static const int CN_NORTHWEST_1_HASH = Aws::Utils::HashingUtils::HashString("cn-northwest-1");
  static const int US_ISO_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-iso-east-1");
  static const int US_ISOB_EAST_1_HASH = Aws::Utils::HashingUtils::HashString("us-isob-east-1");


  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    auto hash = Aws::Utils::HashingUtils::HashString(regionName.c_str());

    Aws::StringStream ss;
    ss << "appstream2" << ".";

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

} // namespace AppStreamEndpoint
} // namespace AppStream
} // namespace Aws

