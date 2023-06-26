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
  enum class FileCacheLustreDeploymentType
  {
    NOT_SET,
    CACHE_1
  };

namespace FileCacheLustreDeploymentTypeMapper
{
AWS_FSX_API FileCacheLustreDeploymentType GetFileCacheLustreDeploymentTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFileCacheLustreDeploymentType(FileCacheLustreDeploymentType value);
} // namespace FileCacheLustreDeploymentTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
