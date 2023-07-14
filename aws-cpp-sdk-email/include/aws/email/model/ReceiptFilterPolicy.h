/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{
  enum class ReceiptFilterPolicy
  {
    NOT_SET,
    Block,
    Allow
  };

namespace ReceiptFilterPolicyMapper
{
AWS_SES_API ReceiptFilterPolicy GetReceiptFilterPolicyForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForReceiptFilterPolicy(ReceiptFilterPolicy value);
} // namespace ReceiptFilterPolicyMapper
} // namespace Model
} // namespace SES
} // namespace Aws
