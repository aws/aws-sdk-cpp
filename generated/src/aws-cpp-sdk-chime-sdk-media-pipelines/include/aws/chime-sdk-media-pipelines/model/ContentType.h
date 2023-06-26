/**
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
  enum class ContentType
  {
    NOT_SET,
    PII
  };

namespace ContentTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForContentType(ContentType value);
} // namespace ContentTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
