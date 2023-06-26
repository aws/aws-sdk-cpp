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
  enum class MessageType
  {
    NOT_SET,
    RAW,
    DIGEST
  };

namespace MessageTypeMapper
{
AWS_KMS_API MessageType GetMessageTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForMessageType(MessageType value);
} // namespace MessageTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
