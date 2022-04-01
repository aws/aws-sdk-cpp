/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class FirstBoot
  {
    NOT_SET,
    WAITING,
    SUCCEEDED,
    UNKNOWN,
    STOPPED
  };

namespace FirstBootMapper
{
AWS_MGN_API FirstBoot GetFirstBootForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForFirstBoot(FirstBoot value);
} // namespace FirstBootMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
