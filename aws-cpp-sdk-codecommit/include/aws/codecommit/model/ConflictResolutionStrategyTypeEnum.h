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
  enum class ConflictResolutionStrategyTypeEnum
  {
    NOT_SET,
    NONE,
    ACCEPT_SOURCE,
    ACCEPT_DESTINATION,
    AUTOMERGE
  };

namespace ConflictResolutionStrategyTypeEnumMapper
{
AWS_CODECOMMIT_API ConflictResolutionStrategyTypeEnum GetConflictResolutionStrategyTypeEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForConflictResolutionStrategyTypeEnum(ConflictResolutionStrategyTypeEnum value);
} // namespace ConflictResolutionStrategyTypeEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
