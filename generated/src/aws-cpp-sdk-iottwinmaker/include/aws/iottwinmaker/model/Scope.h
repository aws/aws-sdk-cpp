/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class Scope
  {
    NOT_SET,
    ENTITY,
    WORKSPACE
  };

namespace ScopeMapper
{
AWS_IOTTWINMAKER_API Scope GetScopeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForScope(Scope value);
} // namespace ScopeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
