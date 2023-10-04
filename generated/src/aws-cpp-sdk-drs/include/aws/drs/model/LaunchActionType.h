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
  enum class LaunchActionType
  {
    NOT_SET,
    SSM_AUTOMATION,
    SSM_COMMAND
  };

namespace LaunchActionTypeMapper
{
AWS_DRS_API LaunchActionType GetLaunchActionTypeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForLaunchActionType(LaunchActionType value);
} // namespace LaunchActionTypeMapper
} // namespace Model
} // namespace drs
} // namespace Aws
