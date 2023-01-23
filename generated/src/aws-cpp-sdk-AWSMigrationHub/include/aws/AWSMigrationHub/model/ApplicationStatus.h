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
  enum class ApplicationStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETED
  };

namespace ApplicationStatusMapper
{
AWS_MIGRATIONHUB_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_MIGRATIONHUB_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
} // namespace ApplicationStatusMapper
} // namespace Model
} // namespace MigrationHub
} // namespace Aws
