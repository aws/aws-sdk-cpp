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
  enum class AvcIntraClass
  {
    NOT_SET,
    CLASS_50,
    CLASS_100,
    CLASS_200
  };

namespace AvcIntraClassMapper
{
AWS_MEDIACONVERT_API AvcIntraClass GetAvcIntraClassForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAvcIntraClass(AvcIntraClass value);
} // namespace AvcIntraClassMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
