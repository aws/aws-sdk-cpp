/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{
  enum class EncryptionModeValue
  {
    NOT_SET,
    sse_s3,
    sse_kms
  };

namespace EncryptionModeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API EncryptionModeValue GetEncryptionModeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForEncryptionModeValue(EncryptionModeValue value);
} // namespace EncryptionModeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
