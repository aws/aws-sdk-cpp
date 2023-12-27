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
  enum class TransitionToArchiveRules
  {
    NOT_SET,
    AFTER_1_DAY,
    AFTER_7_DAYS,
    AFTER_14_DAYS,
    AFTER_30_DAYS,
    AFTER_60_DAYS,
    AFTER_90_DAYS,
    AFTER_180_DAYS,
    AFTER_270_DAYS,
    AFTER_365_DAYS
  };

namespace TransitionToArchiveRulesMapper
{
AWS_EFS_API TransitionToArchiveRules GetTransitionToArchiveRulesForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForTransitionToArchiveRules(TransitionToArchiveRules value);
} // namespace TransitionToArchiveRulesMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
