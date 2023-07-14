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
  enum class IdentityType
  {
    NOT_SET,
    EmailAddress,
    Domain
  };

namespace IdentityTypeMapper
{
AWS_SES_API IdentityType GetIdentityTypeForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForIdentityType(IdentityType value);
} // namespace IdentityTypeMapper
} // namespace Model
} // namespace SES
} // namespace Aws
