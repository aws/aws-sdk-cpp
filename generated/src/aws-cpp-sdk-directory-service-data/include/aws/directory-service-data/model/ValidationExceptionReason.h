/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    INVALID_REALM,
    INVALID_DIRECTORY_TYPE,
    INVALID_SECONDARY_REGION,
    INVALID_NEXT_TOKEN,
    INVALID_ATTRIBUTE_VALUE,
    INVALID_ATTRIBUTE_NAME,
    INVALID_ATTRIBUTE_FOR_USER,
    INVALID_ATTRIBUTE_FOR_GROUP,
    INVALID_ATTRIBUTE_FOR_SEARCH,
    INVALID_ATTRIBUTE_FOR_MODIFY,
    DUPLICATE_ATTRIBUTE,
    MISSING_ATTRIBUTE,
    ATTRIBUTE_EXISTS,
    LDAP_SIZE_LIMIT_EXCEEDED,
    LDAP_UNSUPPORTED_OPERATION
  };

namespace ValidationExceptionReasonMapper
{
AWS_DIRECTORYSERVICEDATA_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_DIRECTORYSERVICEDATA_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
