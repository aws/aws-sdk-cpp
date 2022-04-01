/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{
  enum class GatewayType
  {
    NOT_SET,
    BACKUP_VM
  };

namespace GatewayTypeMapper
{
AWS_BACKUPGATEWAY_API GatewayType GetGatewayTypeForName(const Aws::String& name);

AWS_BACKUPGATEWAY_API Aws::String GetNameForGatewayType(GatewayType value);
} // namespace GatewayTypeMapper
} // namespace Model
} // namespace BackupGateway
} // namespace Aws
