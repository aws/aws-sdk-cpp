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
  enum class ImportStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    CANCELLING,
    CANCELLED,
    FAILED
  };

namespace ImportStatusMapper
{
AWS_DYNAMODB_API ImportStatus GetImportStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForImportStatus(ImportStatus value);
} // namespace ImportStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
