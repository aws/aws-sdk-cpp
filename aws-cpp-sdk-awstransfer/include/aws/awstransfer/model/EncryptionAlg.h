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
  enum class EncryptionAlg
  {
    NOT_SET,
    AES128_CBC,
    AES192_CBC,
    AES256_CBC,
    NONE
  };

namespace EncryptionAlgMapper
{
AWS_TRANSFER_API EncryptionAlg GetEncryptionAlgForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForEncryptionAlg(EncryptionAlg value);
} // namespace EncryptionAlgMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
