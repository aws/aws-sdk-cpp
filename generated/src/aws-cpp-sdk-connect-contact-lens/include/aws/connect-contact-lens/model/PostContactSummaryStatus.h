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
  enum class PostContactSummaryStatus
  {
    NOT_SET,
    FAILED,
    COMPLETED
  };

namespace PostContactSummaryStatusMapper
{
AWS_CONNECTCONTACTLENS_API PostContactSummaryStatus GetPostContactSummaryStatusForName(const Aws::String& name);

AWS_CONNECTCONTACTLENS_API Aws::String GetNameForPostContactSummaryStatus(PostContactSummaryStatus value);
} // namespace PostContactSummaryStatusMapper
} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
