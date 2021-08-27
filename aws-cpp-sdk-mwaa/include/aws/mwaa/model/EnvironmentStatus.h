/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MWAA
{
namespace Model
{
  enum class EnvironmentStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    AVAILABLE,
    UPDATING,
    DELETING,
    DELETED
  };

namespace EnvironmentStatusMapper
{
AWS_MWAA_API EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name);

AWS_MWAA_API Aws::String GetNameForEnvironmentStatus(EnvironmentStatus value);
} // namespace EnvironmentStatusMapper
} // namespace Model
} // namespace MWAA
} // namespace Aws
