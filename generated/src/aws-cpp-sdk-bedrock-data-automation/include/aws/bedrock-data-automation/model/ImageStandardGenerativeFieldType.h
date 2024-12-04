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
  enum class ImageStandardGenerativeFieldType
  {
    NOT_SET,
    IMAGE_SUMMARY,
    IAB
  };

namespace ImageStandardGenerativeFieldTypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API ImageStandardGenerativeFieldType GetImageStandardGenerativeFieldTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForImageStandardGenerativeFieldType(ImageStandardGenerativeFieldType value);
} // namespace ImageStandardGenerativeFieldTypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
