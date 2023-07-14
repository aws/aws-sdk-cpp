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
  enum class InvocationType
  {
    NOT_SET,
    Event,
    RequestResponse
  };

namespace InvocationTypeMapper
{
AWS_SES_API InvocationType GetInvocationTypeForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForInvocationType(InvocationType value);
} // namespace InvocationTypeMapper
} // namespace Model
} // namespace SES
} // namespace Aws
