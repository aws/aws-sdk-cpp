/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectContactLens
{
namespace Model
{
  enum class SentimentValue
  {
    NOT_SET,
    POSITIVE,
    NEUTRAL,
    NEGATIVE
  };

namespace SentimentValueMapper
{
AWS_CONNECTCONTACTLENS_API SentimentValue GetSentimentValueForName(const Aws::String& name);

AWS_CONNECTCONTACTLENS_API Aws::String GetNameForSentimentValue(SentimentValue value);
} // namespace SentimentValueMapper
} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
