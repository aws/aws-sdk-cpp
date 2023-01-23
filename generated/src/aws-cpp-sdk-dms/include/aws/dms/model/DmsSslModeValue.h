/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{
  enum class DmsSslModeValue
  {
    NOT_SET,
    none,
    require,
    verify_ca,
    verify_full
  };

namespace DmsSslModeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API DmsSslModeValue GetDmsSslModeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForDmsSslModeValue(DmsSslModeValue value);
} // namespace DmsSslModeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
