/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Greengrass
{
namespace Model
{
  enum class UpdateAgentLogLevel
  {
    NOT_SET,
    NONE,
    TRACE,
    DEBUG_,
    VERBOSE,
    INFO,
    WARN,
    ERROR_,
    FATAL
  };

namespace UpdateAgentLogLevelMapper
{
AWS_GREENGRASS_API UpdateAgentLogLevel GetUpdateAgentLogLevelForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForUpdateAgentLogLevel(UpdateAgentLogLevel value);
} // namespace UpdateAgentLogLevelMapper
} // namespace Model
} // namespace Greengrass
} // namespace Aws
