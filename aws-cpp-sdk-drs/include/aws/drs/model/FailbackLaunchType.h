/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class FailbackLaunchType
  {
    NOT_SET,
    RECOVERY,
    DRILL
  };

namespace FailbackLaunchTypeMapper
{
AWS_DRS_API FailbackLaunchType GetFailbackLaunchTypeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForFailbackLaunchType(FailbackLaunchType value);
} // namespace FailbackLaunchTypeMapper
} // namespace Model
} // namespace drs
} // namespace Aws
