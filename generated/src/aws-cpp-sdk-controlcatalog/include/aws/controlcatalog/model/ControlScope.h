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
  enum class ControlScope
  {
    NOT_SET,
    GLOBAL,
    REGIONAL
  };

namespace ControlScopeMapper
{
AWS_CONTROLCATALOG_API ControlScope GetControlScopeForName(const Aws::String& name);

AWS_CONTROLCATALOG_API Aws::String GetNameForControlScope(ControlScope value);
} // namespace ControlScopeMapper
} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
