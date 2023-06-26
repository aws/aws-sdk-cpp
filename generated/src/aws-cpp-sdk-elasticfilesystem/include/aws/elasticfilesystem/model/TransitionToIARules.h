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
  enum class TransitionToIARules
  {
    NOT_SET,
    AFTER_7_DAYS,
    AFTER_14_DAYS,
    AFTER_30_DAYS,
    AFTER_60_DAYS,
    AFTER_90_DAYS,
    AFTER_1_DAY
  };

namespace TransitionToIARulesMapper
{
AWS_EFS_API TransitionToIARules GetTransitionToIARulesForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForTransitionToIARules(TransitionToIARules value);
} // namespace TransitionToIARulesMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
