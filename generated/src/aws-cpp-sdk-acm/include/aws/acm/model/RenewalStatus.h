/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class RenewalStatus
  {
    NOT_SET,
    PENDING_AUTO_RENEWAL,
    PENDING_VALIDATION,
    SUCCESS,
    FAILED
  };

namespace RenewalStatusMapper
{
AWS_ACM_API RenewalStatus GetRenewalStatusForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForRenewalStatus(RenewalStatus value);
} // namespace RenewalStatusMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
