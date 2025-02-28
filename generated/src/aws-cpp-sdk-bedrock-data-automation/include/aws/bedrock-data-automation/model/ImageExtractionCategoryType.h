/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{
  enum class ImageExtractionCategoryType
  {
    NOT_SET,
    CONTENT_MODERATION,
    TEXT_DETECTION,
    LOGOS
  };

namespace ImageExtractionCategoryTypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API ImageExtractionCategoryType GetImageExtractionCategoryTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForImageExtractionCategoryType(ImageExtractionCategoryType value);
} // namespace ImageExtractionCategoryTypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
