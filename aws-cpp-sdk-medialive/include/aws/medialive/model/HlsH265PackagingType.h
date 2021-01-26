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
  enum class HlsH265PackagingType
  {
    NOT_SET,
    HEV1,
    HVC1
  };

namespace HlsH265PackagingTypeMapper
{
AWS_MEDIALIVE_API HlsH265PackagingType GetHlsH265PackagingTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsH265PackagingType(HlsH265PackagingType value);
} // namespace HlsH265PackagingTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
