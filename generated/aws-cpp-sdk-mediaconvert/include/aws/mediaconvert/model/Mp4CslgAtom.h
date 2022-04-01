/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class Mp4CslgAtom
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace Mp4CslgAtomMapper
{
AWS_MEDIACONVERT_API Mp4CslgAtom GetMp4CslgAtomForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMp4CslgAtom(Mp4CslgAtom value);
} // namespace Mp4CslgAtomMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
