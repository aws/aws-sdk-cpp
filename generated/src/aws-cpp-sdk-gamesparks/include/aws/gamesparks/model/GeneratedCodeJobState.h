/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameSparks
{
namespace Model
{
  enum class GeneratedCodeJobState
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    PENDING
  };

namespace GeneratedCodeJobStateMapper
{
AWS_GAMESPARKS_API GeneratedCodeJobState GetGeneratedCodeJobStateForName(const Aws::String& name);

AWS_GAMESPARKS_API Aws::String GetNameForGeneratedCodeJobState(GeneratedCodeJobState value);
} // namespace GeneratedCodeJobStateMapper
} // namespace Model
} // namespace GameSparks
} // namespace Aws
