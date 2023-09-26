/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
  enum class ExportType
  {
    NOT_SET,
    FULL_EXPORT,
    INCREMENTAL_EXPORT
  };

namespace ExportTypeMapper
{
AWS_DYNAMODB_API ExportType GetExportTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForExportType(ExportType value);
} // namespace ExportTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
