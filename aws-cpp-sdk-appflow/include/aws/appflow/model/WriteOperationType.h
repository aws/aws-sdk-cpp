/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class WriteOperationType
  {
    NOT_SET,
    INSERT,
    UPSERT,
    UPDATE
  };

namespace WriteOperationTypeMapper
{
AWS_APPFLOW_API WriteOperationType GetWriteOperationTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForWriteOperationType(WriteOperationType value);
} // namespace WriteOperationTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
