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
  enum class M2tsBufferModel
  {
    NOT_SET,
    MULTIPLEX,
    NONE
  };

namespace M2tsBufferModelMapper
{
AWS_MEDIACONVERT_API M2tsBufferModel GetM2tsBufferModelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsBufferModel(M2tsBufferModel value);
} // namespace M2tsBufferModelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
