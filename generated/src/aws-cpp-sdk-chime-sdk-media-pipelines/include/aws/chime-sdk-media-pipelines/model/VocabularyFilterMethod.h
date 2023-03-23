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
  enum class VocabularyFilterMethod
  {
    NOT_SET,
    remove,
    mask,
    tag
  };

namespace VocabularyFilterMethodMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API VocabularyFilterMethod GetVocabularyFilterMethodForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForVocabularyFilterMethod(VocabularyFilterMethod value);
} // namespace VocabularyFilterMethodMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
