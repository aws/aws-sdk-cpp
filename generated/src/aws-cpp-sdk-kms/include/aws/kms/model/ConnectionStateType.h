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
  enum class ConnectionStateType
  {
    NOT_SET,
    CONNECTED,
    CONNECTING,
    FAILED,
    DISCONNECTED,
    DISCONNECTING
  };

namespace ConnectionStateTypeMapper
{
AWS_KMS_API ConnectionStateType GetConnectionStateTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForConnectionStateType(ConnectionStateType value);
} // namespace ConnectionStateTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
