/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{
  enum class ControlSeverity
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL
  };

namespace ControlSeverityMapper
{
AWS_CONTROLCATALOG_API ControlSeverity GetControlSeverityForName(const Aws::String& name);

AWS_CONTROLCATALOG_API Aws::String GetNameForControlSeverity(ControlSeverity value);
} // namespace ControlSeverityMapper
} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
