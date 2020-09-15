/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class ScoreConfidence
  {
    NOT_SET,
    VERY_HIGH,
    HIGH,
    MEDIUM,
    LOW
  };

namespace ScoreConfidenceMapper
{
AWS_KENDRA_API ScoreConfidence GetScoreConfidenceForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForScoreConfidence(ScoreConfidence value);
} // namespace ScoreConfidenceMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
