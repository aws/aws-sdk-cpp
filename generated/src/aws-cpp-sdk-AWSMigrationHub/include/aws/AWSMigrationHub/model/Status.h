/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    FAILED,
    COMPLETED
  };

namespace StatusMapper
{
AWS_MIGRATIONHUB_API Status GetStatusForName(const Aws::String& name);

AWS_MIGRATIONHUB_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace MigrationHub
} // namespace Aws
