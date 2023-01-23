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
  enum class MigrationAlertType
  {
    NOT_SET,
    ERROR_,
    WARN
  };

namespace MigrationAlertTypeMapper
{
AWS_LEXMODELBUILDINGSERVICE_API MigrationAlertType GetMigrationAlertTypeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForMigrationAlertType(MigrationAlertType value);
} // namespace MigrationAlertTypeMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
