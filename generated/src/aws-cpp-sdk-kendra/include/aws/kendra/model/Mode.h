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
  enum class Mode
  {
    NOT_SET,
    ENABLED,
    LEARN_ONLY
  };

namespace ModeMapper
{
AWS_KENDRA_API Mode GetModeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForMode(Mode value);
} // namespace ModeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
