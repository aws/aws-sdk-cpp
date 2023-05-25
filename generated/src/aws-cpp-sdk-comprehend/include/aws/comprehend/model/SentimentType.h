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
  enum class SentimentType
  {
    NOT_SET,
    POSITIVE,
    NEGATIVE,
    NEUTRAL,
    MIXED
  };

namespace SentimentTypeMapper
{
AWS_COMPREHEND_API SentimentType GetSentimentTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForSentimentType(SentimentType value);
} // namespace SentimentTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
