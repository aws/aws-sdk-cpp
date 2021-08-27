/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/ChimeEndpoint.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;
using namespace Aws::Chime;

namespace Aws
{
namespace Chime
{
namespace ChimeEndpoint
{


  Aws::String ForRegion(const Aws::String& regionName, bool useDualStack)
  {
    AWS_UNREFERENCED_PARAM(regionName);
    AWS_UNREFERENCED_PARAM(useDualStack);
    return "service.chime.aws.amazon.com";
  }

} // namespace ChimeEndpoint
} // namespace Chime
} // namespace Aws

