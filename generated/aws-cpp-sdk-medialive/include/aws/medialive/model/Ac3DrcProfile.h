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
  enum class Ac3DrcProfile
  {
    NOT_SET,
    FILM_STANDARD,
    NONE
  };

namespace Ac3DrcProfileMapper
{
AWS_MEDIALIVE_API Ac3DrcProfile GetAc3DrcProfileForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAc3DrcProfile(Ac3DrcProfile value);
} // namespace Ac3DrcProfileMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
