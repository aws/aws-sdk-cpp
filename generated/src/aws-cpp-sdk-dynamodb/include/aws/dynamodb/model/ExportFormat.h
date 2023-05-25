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
  enum class ExportFormat
  {
    NOT_SET,
    DYNAMODB_JSON,
    ION
  };

namespace ExportFormatMapper
{
AWS_DYNAMODB_API ExportFormat GetExportFormatForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForExportFormat(ExportFormat value);
} // namespace ExportFormatMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
