/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class RevealRequestStatus
  {
    NOT_SET,
    SUCCESS,
    PROCESSING,
    ERROR_
  };

namespace RevealRequestStatusMapper
{
AWS_MACIE2_API RevealRequestStatus GetRevealRequestStatusForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForRevealRequestStatus(RevealRequestStatus value);
} // namespace RevealRequestStatusMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
