/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class TieringPolicyName
  {
    NOT_SET,
    SNAPSHOT_ONLY,
    AUTO,
    ALL,
    NONE
  };

namespace TieringPolicyNameMapper
{
AWS_FSX_API TieringPolicyName GetTieringPolicyNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForTieringPolicyName(TieringPolicyName value);
} // namespace TieringPolicyNameMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
