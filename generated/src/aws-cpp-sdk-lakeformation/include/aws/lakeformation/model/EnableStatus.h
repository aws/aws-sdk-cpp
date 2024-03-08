/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class EnableStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EnableStatusMapper
{
AWS_LAKEFORMATION_API EnableStatus GetEnableStatusForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForEnableStatus(EnableStatus value);
} // namespace EnableStatusMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
