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
  enum class Status
  {
    NOT_SET,
    ENABLED,
    ENABLING,
    DISABLED,
    DISABLING
  };

namespace StatusMapper
{
AWS_EFS_API Status GetStatusForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
