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
  enum class CompressionTypeValue
  {
    NOT_SET,
    none,
    gzip
  };

namespace CompressionTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API CompressionTypeValue GetCompressionTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForCompressionTypeValue(CompressionTypeValue value);
} // namespace CompressionTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
