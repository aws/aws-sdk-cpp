/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideoMedia
{
namespace Model
{
  enum class StartSelectorType
  {
    NOT_SET,
    FRAGMENT_NUMBER,
    SERVER_TIMESTAMP,
    PRODUCER_TIMESTAMP,
    NOW,
    EARLIEST,
    CONTINUATION_TOKEN
  };

namespace StartSelectorTypeMapper
{
AWS_KINESISVIDEOMEDIA_API StartSelectorType GetStartSelectorTypeForName(const Aws::String& name);

AWS_KINESISVIDEOMEDIA_API Aws::String GetNameForStartSelectorType(StartSelectorType value);
} // namespace StartSelectorTypeMapper
} // namespace Model
} // namespace KinesisVideoMedia
} // namespace Aws
