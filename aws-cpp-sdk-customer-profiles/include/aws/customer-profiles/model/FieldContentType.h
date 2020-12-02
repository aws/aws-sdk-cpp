/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class FieldContentType
  {
    NOT_SET,
    STRING,
    NUMBER,
    PHONE_NUMBER,
    EMAIL_ADDRESS,
    NAME
  };

namespace FieldContentTypeMapper
{
AWS_CUSTOMERPROFILES_API FieldContentType GetFieldContentTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForFieldContentType(FieldContentType value);
} // namespace FieldContentTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
