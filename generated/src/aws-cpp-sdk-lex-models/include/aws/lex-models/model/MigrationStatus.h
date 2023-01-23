/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class MigrationStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace MigrationStatusMapper
{
AWS_LEXMODELBUILDINGSERVICE_API MigrationStatus GetMigrationStatusForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForMigrationStatus(MigrationStatus value);
} // namespace MigrationStatusMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
