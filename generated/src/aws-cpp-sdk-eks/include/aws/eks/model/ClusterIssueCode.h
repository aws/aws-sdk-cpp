/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class ClusterIssueCode
  {
    NOT_SET,
    AccessDenied,
    ClusterUnreachable,
    ConfigurationConflict,
    InternalFailure,
    ResourceLimitExceeded,
    ResourceNotFound
  };

namespace ClusterIssueCodeMapper
{
AWS_EKS_API ClusterIssueCode GetClusterIssueCodeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForClusterIssueCode(ClusterIssueCode value);
} // namespace ClusterIssueCodeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
