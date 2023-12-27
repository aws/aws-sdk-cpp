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
  enum class ExportViewType
  {
    NOT_SET,
    NEW_IMAGE,
    NEW_AND_OLD_IMAGES
  };

namespace ExportViewTypeMapper
{
AWS_DYNAMODB_API ExportViewType GetExportViewTypeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForExportViewType(ExportViewType value);
} // namespace ExportViewTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
