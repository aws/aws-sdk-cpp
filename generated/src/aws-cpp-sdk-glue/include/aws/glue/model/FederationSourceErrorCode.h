/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class FederationSourceErrorCode
  {
    NOT_SET,
    InvalidResponseException,
    OperationTimeoutException,
    OperationNotSupportedException,
    InternalServiceException,
    ThrottlingException
  };

namespace FederationSourceErrorCodeMapper
{
AWS_GLUE_API FederationSourceErrorCode GetFederationSourceErrorCodeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFederationSourceErrorCode(FederationSourceErrorCode value);
} // namespace FederationSourceErrorCodeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
