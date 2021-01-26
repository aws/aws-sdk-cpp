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
  enum class HlsAkamaiHttpTransferMode
  {
    NOT_SET,
    CHUNKED,
    NON_CHUNKED
  };

namespace HlsAkamaiHttpTransferModeMapper
{
AWS_MEDIALIVE_API HlsAkamaiHttpTransferMode GetHlsAkamaiHttpTransferModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsAkamaiHttpTransferMode(HlsAkamaiHttpTransferMode value);
} // namespace HlsAkamaiHttpTransferModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
