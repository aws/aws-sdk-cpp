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
  enum class OpenZFSDeploymentType
  {
    NOT_SET,
    SINGLE_AZ_1,
    SINGLE_AZ_2
  };

namespace OpenZFSDeploymentTypeMapper
{
AWS_FSX_API OpenZFSDeploymentType GetOpenZFSDeploymentTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForOpenZFSDeploymentType(OpenZFSDeploymentType value);
} // namespace OpenZFSDeploymentTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
