/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FIS
{
namespace Model
{
  enum class ActionsMode
  {
    NOT_SET,
    skip_all,
    run_all
  };

namespace ActionsModeMapper
{
AWS_FIS_API ActionsMode GetActionsModeForName(const Aws::String& name);

AWS_FIS_API Aws::String GetNameForActionsMode(ActionsMode value);
} // namespace ActionsModeMapper
} // namespace Model
} // namespace FIS
} // namespace Aws
