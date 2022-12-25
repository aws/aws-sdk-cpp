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
  enum class DolbyEProgramSelection
  {
    NOT_SET,
    ALL_CHANNELS,
    PROGRAM_1,
    PROGRAM_2,
    PROGRAM_3,
    PROGRAM_4,
    PROGRAM_5,
    PROGRAM_6,
    PROGRAM_7,
    PROGRAM_8
  };

namespace DolbyEProgramSelectionMapper
{
AWS_MEDIALIVE_API DolbyEProgramSelection GetDolbyEProgramSelectionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDolbyEProgramSelection(DolbyEProgramSelection value);
} // namespace DolbyEProgramSelectionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
