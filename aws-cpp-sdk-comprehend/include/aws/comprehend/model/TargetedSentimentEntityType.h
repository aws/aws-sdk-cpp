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
  enum class TargetedSentimentEntityType
  {
    NOT_SET,
    PERSON,
    LOCATION,
    ORGANIZATION,
    FACILITY,
    BRAND,
    COMMERCIAL_ITEM,
    MOVIE,
    MUSIC,
    BOOK,
    SOFTWARE,
    GAME,
    PERSONAL_TITLE,
    EVENT,
    DATE,
    QUANTITY,
    ATTRIBUTE,
    OTHER
  };

namespace TargetedSentimentEntityTypeMapper
{
AWS_COMPREHEND_API TargetedSentimentEntityType GetTargetedSentimentEntityTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForTargetedSentimentEntityType(TargetedSentimentEntityType value);
} // namespace TargetedSentimentEntityTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
