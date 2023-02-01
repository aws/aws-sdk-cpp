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
  enum class MigrationSortAttribute
  {
    NOT_SET,
    V1_BOT_NAME,
    MIGRATION_DATE_TIME
  };

namespace MigrationSortAttributeMapper
{
AWS_LEXMODELBUILDINGSERVICE_API MigrationSortAttribute GetMigrationSortAttributeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForMigrationSortAttribute(MigrationSortAttribute value);
} // namespace MigrationSortAttributeMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
