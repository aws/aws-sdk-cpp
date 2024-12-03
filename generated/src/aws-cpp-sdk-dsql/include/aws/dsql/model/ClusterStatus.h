/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DSQL
{
namespace Model
{
  enum class ClusterStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    DELETED,
    FAILED
  };

namespace ClusterStatusMapper
{
AWS_DSQL_API ClusterStatus GetClusterStatusForName(const Aws::String& name);

AWS_DSQL_API Aws::String GetNameForClusterStatus(ClusterStatus value);
} // namespace ClusterStatusMapper
} // namespace Model
} // namespace DSQL
} // namespace Aws
