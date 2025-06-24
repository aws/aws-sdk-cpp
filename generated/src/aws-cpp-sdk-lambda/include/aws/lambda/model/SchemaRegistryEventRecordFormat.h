/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{
  enum class SchemaRegistryEventRecordFormat
  {
    NOT_SET,
    JSON,
    SOURCE
  };

namespace SchemaRegistryEventRecordFormatMapper
{
AWS_LAMBDA_API SchemaRegistryEventRecordFormat GetSchemaRegistryEventRecordFormatForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForSchemaRegistryEventRecordFormat(SchemaRegistryEventRecordFormat value);
} // namespace SchemaRegistryEventRecordFormatMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
