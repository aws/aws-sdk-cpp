/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class ContentModerationSortBy
  {
    NOT_SET,
    NAME,
    TIMESTAMP
  };

namespace ContentModerationSortByMapper
{
AWS_REKOGNITION_API ContentModerationSortBy GetContentModerationSortByForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForContentModerationSortBy(ContentModerationSortBy value);
} // namespace ContentModerationSortByMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
