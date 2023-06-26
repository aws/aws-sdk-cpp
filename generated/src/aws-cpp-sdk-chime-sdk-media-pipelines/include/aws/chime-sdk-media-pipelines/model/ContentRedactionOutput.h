﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class ContentRedactionOutput
  {
    NOT_SET,
    redacted,
    redacted_and_unredacted
  };

namespace ContentRedactionOutputMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ContentRedactionOutput GetContentRedactionOutputForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForContentRedactionOutput(ContentRedactionOutput value);
} // namespace ContentRedactionOutputMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
