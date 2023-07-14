/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class EmailStatus
  {
    NOT_SET,
    NotSent,
    Sent,
    Failed
  };

namespace EmailStatusMapper
{
AWS_CHIME_API EmailStatus GetEmailStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForEmailStatus(EmailStatus value);
} // namespace EmailStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
