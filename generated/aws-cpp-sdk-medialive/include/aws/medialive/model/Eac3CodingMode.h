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
  enum class Eac3CodingMode
  {
    NOT_SET,
    CODING_MODE_1_0,
    CODING_MODE_2_0,
    CODING_MODE_3_2
  };

namespace Eac3CodingModeMapper
{
AWS_MEDIALIVE_API Eac3CodingMode GetEac3CodingModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3CodingMode(Eac3CodingMode value);
} // namespace Eac3CodingModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
