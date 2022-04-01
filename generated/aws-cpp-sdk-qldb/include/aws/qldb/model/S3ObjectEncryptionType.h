/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QLDB
{
namespace Model
{
  enum class S3ObjectEncryptionType
  {
    NOT_SET,
    SSE_KMS,
    SSE_S3,
    NO_ENCRYPTION
  };

namespace S3ObjectEncryptionTypeMapper
{
AWS_QLDB_API S3ObjectEncryptionType GetS3ObjectEncryptionTypeForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForS3ObjectEncryptionType(S3ObjectEncryptionType value);
} // namespace S3ObjectEncryptionTypeMapper
} // namespace Model
} // namespace QLDB
} // namespace Aws
