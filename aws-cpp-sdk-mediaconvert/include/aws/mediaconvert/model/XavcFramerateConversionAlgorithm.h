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
  enum class XavcFramerateConversionAlgorithm
  {
    NOT_SET,
    DUPLICATE_DROP,
    INTERPOLATE,
    FRAMEFORMER
  };

namespace XavcFramerateConversionAlgorithmMapper
{
AWS_MEDIACONVERT_API XavcFramerateConversionAlgorithm GetXavcFramerateConversionAlgorithmForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcFramerateConversionAlgorithm(XavcFramerateConversionAlgorithm value);
} // namespace XavcFramerateConversionAlgorithmMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
