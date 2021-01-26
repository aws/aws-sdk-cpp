/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    KMS
  };

namespace EncryptionTypeMapper
{
AWS_CONNECT_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
