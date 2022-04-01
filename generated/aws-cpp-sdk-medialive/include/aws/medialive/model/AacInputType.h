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
  enum class AacInputType
  {
    NOT_SET,
    BROADCASTER_MIXED_AD,
    NORMAL
  };

namespace AacInputTypeMapper
{
AWS_MEDIALIVE_API AacInputType GetAacInputTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAacInputType(AacInputType value);
} // namespace AacInputTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
