/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class EntityRecognizerDataFormat
  {
    NOT_SET,
    COMPREHEND_CSV,
    AUGMENTED_MANIFEST
  };

namespace EntityRecognizerDataFormatMapper
{
AWS_COMPREHEND_API EntityRecognizerDataFormat GetEntityRecognizerDataFormatForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForEntityRecognizerDataFormat(EntityRecognizerDataFormat value);
} // namespace EntityRecognizerDataFormatMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
