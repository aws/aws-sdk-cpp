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
  enum class DeploymentType
  {
    NOT_SET,
    CREATE,
    UPDATE,
    DELETE_
  };

namespace DeploymentTypeMapper
{
AWS_DATAZONE_API DeploymentType GetDeploymentTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDeploymentType(DeploymentType value);
} // namespace DeploymentTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
