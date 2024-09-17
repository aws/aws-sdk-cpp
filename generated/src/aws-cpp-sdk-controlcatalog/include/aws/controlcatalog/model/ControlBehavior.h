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
  enum class ControlBehavior
  {
    NOT_SET,
    PREVENTIVE,
    PROACTIVE,
    DETECTIVE
  };

namespace ControlBehaviorMapper
{
AWS_CONTROLCATALOG_API ControlBehavior GetControlBehaviorForName(const Aws::String& name);

AWS_CONTROLCATALOG_API Aws::String GetNameForControlBehavior(ControlBehavior value);
} // namespace ControlBehaviorMapper
} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
