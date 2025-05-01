/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class MediaStreamType
  {
    NOT_SET,
    AUDIO,
    VIDEO
  };

namespace MediaStreamTypeMapper
{
AWS_CONNECT_API MediaStreamType GetMediaStreamTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMediaStreamType(MediaStreamType value);
} // namespace MediaStreamTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
