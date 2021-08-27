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
  enum class M2tsPcrControl
  {
    NOT_SET,
    CONFIGURED_PCR_PERIOD,
    PCR_EVERY_PES_PACKET
  };

namespace M2tsPcrControlMapper
{
AWS_MEDIALIVE_API M2tsPcrControl GetM2tsPcrControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsPcrControl(M2tsPcrControl value);
} // namespace M2tsPcrControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
