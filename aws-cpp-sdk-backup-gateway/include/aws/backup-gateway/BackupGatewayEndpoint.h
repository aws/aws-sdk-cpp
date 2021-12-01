/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace BackupGateway
{
namespace BackupGatewayEndpoint
{
AWS_BACKUPGATEWAY_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace BackupGatewayEndpoint
} // namespace BackupGateway
} // namespace Aws
