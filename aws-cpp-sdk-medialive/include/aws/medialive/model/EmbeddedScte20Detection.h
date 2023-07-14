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
  enum class EmbeddedScte20Detection
  {
    NOT_SET,
    AUTO,
    OFF
  };

namespace EmbeddedScte20DetectionMapper
{
AWS_MEDIALIVE_API EmbeddedScte20Detection GetEmbeddedScte20DetectionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEmbeddedScte20Detection(EmbeddedScte20Detection value);
} // namespace EmbeddedScte20DetectionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
