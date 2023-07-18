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
  enum class ConfigStatus
  {
    NOT_SET,
    CREATING,
    DELETING,
    ACTIVE
  };

namespace ConfigStatusMapper
{
AWS_EKS_API ConfigStatus GetConfigStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForConfigStatus(ConfigStatus value);
} // namespace ConfigStatusMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
