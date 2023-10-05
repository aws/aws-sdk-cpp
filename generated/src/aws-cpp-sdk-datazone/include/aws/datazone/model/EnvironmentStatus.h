/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class EnvironmentStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    UPDATING,
    DELETING,
    CREATE_FAILED,
    UPDATE_FAILED,
    DELETE_FAILED,
    VALIDATION_FAILED,
    SUSPENDED,
    DISABLED,
    EXPIRED,
    DELETED,
    INACCESSIBLE
  };

namespace EnvironmentStatusMapper
{
AWS_DATAZONE_API EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForEnvironmentStatus(EnvironmentStatus value);
} // namespace EnvironmentStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
