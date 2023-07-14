/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Backup
{
namespace BackupEndpoint
{
AWS_BACKUP_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace BackupEndpoint
} // namespace Backup
} // namespace Aws
