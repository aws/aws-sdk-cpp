/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{
  enum class BlockerType
  {
    NOT_SET,
    AUTOMATED
  };

namespace BlockerTypeMapper
{
AWS_CODECONNECTIONS_API BlockerType GetBlockerTypeForName(const Aws::String& name);

AWS_CODECONNECTIONS_API Aws::String GetNameForBlockerType(BlockerType value);
} // namespace BlockerTypeMapper
} // namespace Model
} // namespace CodeConnections
} // namespace Aws
