/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class DocumentReviewAction
  {
    NOT_SET,
    SendForReview,
    UpdateReview,
    Approve,
    Reject
  };

namespace DocumentReviewActionMapper
{
AWS_SSM_API DocumentReviewAction GetDocumentReviewActionForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentReviewAction(DocumentReviewAction value);
} // namespace DocumentReviewActionMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
