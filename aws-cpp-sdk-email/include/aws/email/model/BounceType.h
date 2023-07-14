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
  enum class BounceType
  {
    NOT_SET,
    DoesNotExist,
    MessageTooLarge,
    ExceededQuota,
    ContentRejected,
    Undefined,
    TemporaryFailure
  };

namespace BounceTypeMapper
{
AWS_SES_API BounceType GetBounceTypeForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForBounceType(BounceType value);
} // namespace BounceTypeMapper
} // namespace Model
} // namespace SES
} // namespace Aws
