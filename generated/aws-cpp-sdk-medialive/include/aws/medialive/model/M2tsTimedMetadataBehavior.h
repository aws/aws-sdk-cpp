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
  enum class M2tsTimedMetadataBehavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace M2tsTimedMetadataBehaviorMapper
{
AWS_MEDIALIVE_API M2tsTimedMetadataBehavior GetM2tsTimedMetadataBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsTimedMetadataBehavior(M2tsTimedMetadataBehavior value);
} // namespace M2tsTimedMetadataBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
