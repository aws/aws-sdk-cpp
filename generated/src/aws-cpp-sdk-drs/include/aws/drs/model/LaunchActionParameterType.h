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
  enum class LaunchActionParameterType
  {
    NOT_SET,
    SSM_STORE,
    DYNAMIC
  };

namespace LaunchActionParameterTypeMapper
{
AWS_DRS_API LaunchActionParameterType GetLaunchActionParameterTypeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForLaunchActionParameterType(LaunchActionParameterType value);
} // namespace LaunchActionParameterTypeMapper
} // namespace Model
} // namespace drs
} // namespace Aws
