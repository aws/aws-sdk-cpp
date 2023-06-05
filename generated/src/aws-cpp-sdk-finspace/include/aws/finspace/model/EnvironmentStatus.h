/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class EnvironmentStatus
  {
    NOT_SET,
    CREATE_REQUESTED,
    CREATING,
    CREATED,
    DELETE_REQUESTED,
    DELETING,
    DELETED,
    FAILED_CREATION,
    RETRY_DELETION,
    FAILED_DELETION,
    UPDATE_NETWORK_REQUESTED,
    UPDATING_NETWORK,
    FAILED_UPDATING_NETWORK,
    SUSPENDED
  };

namespace EnvironmentStatusMapper
{
AWS_FINSPACE_API EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForEnvironmentStatus(EnvironmentStatus value);
} // namespace EnvironmentStatusMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
