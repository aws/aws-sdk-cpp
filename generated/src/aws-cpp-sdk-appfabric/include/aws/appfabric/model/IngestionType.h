/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{
  enum class IngestionType
  {
    NOT_SET,
    auditLog
  };

namespace IngestionTypeMapper
{
AWS_APPFABRIC_API IngestionType GetIngestionTypeForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForIngestionType(IngestionType value);
} // namespace IngestionTypeMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
