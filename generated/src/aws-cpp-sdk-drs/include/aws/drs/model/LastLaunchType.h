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
  enum class LastLaunchType
  {
    NOT_SET,
    RECOVERY,
    DRILL
  };

namespace LastLaunchTypeMapper
{
AWS_DRS_API LastLaunchType GetLastLaunchTypeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForLastLaunchType(LastLaunchType value);
} // namespace LastLaunchTypeMapper
} // namespace Model
} // namespace drs
} // namespace Aws
