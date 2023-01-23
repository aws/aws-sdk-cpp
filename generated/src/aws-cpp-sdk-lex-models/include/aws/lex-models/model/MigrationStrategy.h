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
  enum class MigrationStrategy
  {
    NOT_SET,
    CREATE_NEW,
    UPDATE_EXISTING
  };

namespace MigrationStrategyMapper
{
AWS_LEXMODELBUILDINGSERVICE_API MigrationStrategy GetMigrationStrategyForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForMigrationStrategy(MigrationStrategy value);
} // namespace MigrationStrategyMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
