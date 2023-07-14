/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{
  enum class ConnectionErrorCodeType
  {
    NOT_SET,
    INVALID_CREDENTIALS,
    CLUSTER_NOT_FOUND,
    NETWORK_ERRORS,
    INTERNAL_ERROR,
    INSUFFICIENT_CLOUDHSM_HSMS,
    USER_LOCKED_OUT,
    USER_NOT_FOUND,
    USER_LOGGED_IN,
    SUBNET_NOT_FOUND
  };

namespace ConnectionErrorCodeTypeMapper
{
AWS_KMS_API ConnectionErrorCodeType GetConnectionErrorCodeTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForConnectionErrorCodeType(ConnectionErrorCodeType value);
} // namespace ConnectionErrorCodeTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
