/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class OfferingDurationUnits
  {
    NOT_SET,
    MONTHS
  };

namespace OfferingDurationUnitsMapper
{
AWS_MEDIALIVE_API OfferingDurationUnits GetOfferingDurationUnitsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForOfferingDurationUnits(OfferingDurationUnits value);
} // namespace OfferingDurationUnitsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
