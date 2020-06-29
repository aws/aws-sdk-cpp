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
  enum class Smpte2038DataPreference
  {
    NOT_SET,
    IGNORE,
    PREFER
  };

namespace Smpte2038DataPreferenceMapper
{
AWS_MEDIALIVE_API Smpte2038DataPreference GetSmpte2038DataPreferenceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmpte2038DataPreference(Smpte2038DataPreference value);
} // namespace Smpte2038DataPreferenceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
