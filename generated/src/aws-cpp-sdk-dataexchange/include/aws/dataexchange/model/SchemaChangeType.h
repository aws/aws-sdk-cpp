/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class SchemaChangeType
  {
    NOT_SET,
    ADD,
    REMOVE,
    MODIFY
  };

namespace SchemaChangeTypeMapper
{
AWS_DATAEXCHANGE_API SchemaChangeType GetSchemaChangeTypeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForSchemaChangeType(SchemaChangeType value);
} // namespace SchemaChangeTypeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
