/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
  enum class OverrideStatus
  {
    NOT_SET,
    OVERRIDE,
    REVOKE
  };

namespace OverrideStatusMapper
{
AWS_CODECOMMIT_API OverrideStatus GetOverrideStatusForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForOverrideStatus(OverrideStatus value);
} // namespace OverrideStatusMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
