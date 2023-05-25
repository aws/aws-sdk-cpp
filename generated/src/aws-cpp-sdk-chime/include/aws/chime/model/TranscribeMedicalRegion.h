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
  enum class TranscribeMedicalRegion
  {
    NOT_SET,
    us_east_1,
    us_east_2,
    us_west_2,
    ap_southeast_2,
    ca_central_1,
    eu_west_1,
    auto_
  };

namespace TranscribeMedicalRegionMapper
{
AWS_CHIME_API TranscribeMedicalRegion GetTranscribeMedicalRegionForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribeMedicalRegion(TranscribeMedicalRegion value);
} // namespace TranscribeMedicalRegionMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
