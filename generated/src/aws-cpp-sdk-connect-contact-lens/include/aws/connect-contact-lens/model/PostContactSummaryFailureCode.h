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
  enum class PostContactSummaryFailureCode
  {
    NOT_SET,
    QUOTA_EXCEEDED,
    INSUFFICIENT_CONVERSATION_CONTENT,
    FAILED_SAFETY_GUIDELINES,
    INVALID_ANALYSIS_CONFIGURATION,
    INTERNAL_ERROR
  };

namespace PostContactSummaryFailureCodeMapper
{
AWS_CONNECTCONTACTLENS_API PostContactSummaryFailureCode GetPostContactSummaryFailureCodeForName(const Aws::String& name);

AWS_CONNECTCONTACTLENS_API Aws::String GetNameForPostContactSummaryFailureCode(PostContactSummaryFailureCode value);
} // namespace PostContactSummaryFailureCodeMapper
} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
