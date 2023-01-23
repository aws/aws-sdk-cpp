/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class TranscribeRegion
  {
    NOT_SET,
    us_east_2,
    us_east_1,
    us_west_2,
    ap_northeast_2,
    ap_southeast_2,
    ap_northeast_1,
    ca_central_1,
    eu_central_1,
    eu_west_1,
    eu_west_2,
    sa_east_1,
    auto_
  };

namespace TranscribeRegionMapper
{
AWS_CHIME_API TranscribeRegion GetTranscribeRegionForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribeRegion(TranscribeRegion value);
} // namespace TranscribeRegionMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
