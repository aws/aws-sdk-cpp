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
  enum class ProresChromaSampling
  {
    NOT_SET,
    PRESERVE_444_SAMPLING,
    SUBSAMPLE_TO_422
  };

namespace ProresChromaSamplingMapper
{
AWS_MEDIACONVERT_API ProresChromaSampling GetProresChromaSamplingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForProresChromaSampling(ProresChromaSampling value);
} // namespace ProresChromaSamplingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
