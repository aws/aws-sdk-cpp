/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{
  enum class DevEnvironmentSessionType
  {
    NOT_SET,
    SSM,
    SSH
  };

namespace DevEnvironmentSessionTypeMapper
{
AWS_CODECATALYST_API DevEnvironmentSessionType GetDevEnvironmentSessionTypeForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForDevEnvironmentSessionType(DevEnvironmentSessionType value);
} // namespace DevEnvironmentSessionTypeMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
