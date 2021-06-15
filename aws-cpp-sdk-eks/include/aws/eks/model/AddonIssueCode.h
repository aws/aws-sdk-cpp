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
  enum class AddonIssueCode
  {
    NOT_SET,
    AccessDenied,
    InternalFailure,
    ClusterUnreachable,
    InsufficientNumberOfReplicas,
    ConfigurationConflict,
    AdmissionRequestDenied
  };

namespace AddonIssueCodeMapper
{
AWS_EKS_API AddonIssueCode GetAddonIssueCodeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForAddonIssueCode(AddonIssueCode value);
} // namespace AddonIssueCodeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
