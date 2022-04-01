/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class ThroughputMode
  {
    NOT_SET,
    PAY_PER_REQUEST,
    PROVISIONED
  };

namespace ThroughputModeMapper
{
AWS_KEYSPACES_API ThroughputMode GetThroughputModeForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForThroughputMode(ThroughputMode value);
} // namespace ThroughputModeMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
