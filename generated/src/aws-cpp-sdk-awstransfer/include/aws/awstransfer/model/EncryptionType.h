/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    PGP
  };

namespace EncryptionTypeMapper
{
AWS_TRANSFER_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
