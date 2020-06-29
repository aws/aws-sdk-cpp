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
  enum class Scte35DeviceRestrictions
  {
    NOT_SET,
    NONE,
    RESTRICT_GROUP0,
    RESTRICT_GROUP1,
    RESTRICT_GROUP2
  };

namespace Scte35DeviceRestrictionsMapper
{
AWS_MEDIALIVE_API Scte35DeviceRestrictions GetScte35DeviceRestrictionsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35DeviceRestrictions(Scte35DeviceRestrictions value);
} // namespace Scte35DeviceRestrictionsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
