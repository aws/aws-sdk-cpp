/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class AdministrativeActionType
  {
    NOT_SET,
    FILE_SYSTEM_UPDATE,
    STORAGE_OPTIMIZATION,
    FILE_SYSTEM_ALIAS_ASSOCIATION,
    FILE_SYSTEM_ALIAS_DISASSOCIATION,
    VOLUME_UPDATE,
    SNAPSHOT_UPDATE,
    RELEASE_NFS_V3_LOCKS,
    VOLUME_RESTORE
  };

namespace AdministrativeActionTypeMapper
{
AWS_FSX_API AdministrativeActionType GetAdministrativeActionTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForAdministrativeActionType(AdministrativeActionType value);
} // namespace AdministrativeActionTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
