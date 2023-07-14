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
  enum class MovClapAtom
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace MovClapAtomMapper
{
AWS_MEDIACONVERT_API MovClapAtom GetMovClapAtomForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMovClapAtom(MovClapAtom value);
} // namespace MovClapAtomMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
