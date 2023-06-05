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
  enum class KxClusterStatus
  {
    NOT_SET,
    PENDING,
    CREATING,
    CREATE_FAILED,
    RUNNING,
    UPDATING,
    DELETING,
    DELETED,
    DELETE_FAILED
  };

namespace KxClusterStatusMapper
{
AWS_FINSPACE_API KxClusterStatus GetKxClusterStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxClusterStatus(KxClusterStatus value);
} // namespace KxClusterStatusMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
