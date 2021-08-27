/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Schemas
{
namespace Model
{
  enum class DiscovererState
  {
    NOT_SET,
    STARTED,
    STOPPED
  };

namespace DiscovererStateMapper
{
AWS_SCHEMAS_API DiscovererState GetDiscovererStateForName(const Aws::String& name);

AWS_SCHEMAS_API Aws::String GetNameForDiscovererState(DiscovererState value);
} // namespace DiscovererStateMapper
} // namespace Model
} // namespace Schemas
} // namespace Aws
