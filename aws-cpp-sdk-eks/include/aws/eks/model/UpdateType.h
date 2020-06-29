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
  enum class UpdateType
  {
    NOT_SET,
    VersionUpdate,
    EndpointAccessUpdate,
    LoggingUpdate,
    ConfigUpdate
  };

namespace UpdateTypeMapper
{
AWS_EKS_API UpdateType GetUpdateTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForUpdateType(UpdateType value);
} // namespace UpdateTypeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
