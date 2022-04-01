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
  enum class M3u8PcrControl
  {
    NOT_SET,
    CONFIGURED_PCR_PERIOD,
    PCR_EVERY_PES_PACKET
  };

namespace M3u8PcrControlMapper
{
AWS_MEDIALIVE_API M3u8PcrControl GetM3u8PcrControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM3u8PcrControl(M3u8PcrControl value);
} // namespace M3u8PcrControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
