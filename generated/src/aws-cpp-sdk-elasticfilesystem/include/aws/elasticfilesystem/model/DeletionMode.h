/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{
  enum class DeletionMode
  {
    NOT_SET,
    ALL_CONFIGURATIONS,
    LOCAL_CONFIGURATION_ONLY
  };

namespace DeletionModeMapper
{
AWS_EFS_API DeletionMode GetDeletionModeForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForDeletionMode(DeletionMode value);
} // namespace DeletionModeMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
