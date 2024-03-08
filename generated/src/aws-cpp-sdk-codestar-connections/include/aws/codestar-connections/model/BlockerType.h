/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarconnections
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
AWS_CODESTARCONNECTIONS_API BlockerType GetBlockerTypeForName(const Aws::String& name);

AWS_CODESTARCONNECTIONS_API Aws::String GetNameForBlockerType(BlockerType value);
} // namespace BlockerTypeMapper
} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
