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
  enum class ExperienceStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED
  };

namespace ExperienceStatusMapper
{
AWS_KENDRA_API ExperienceStatus GetExperienceStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForExperienceStatus(ExperienceStatus value);
} // namespace ExperienceStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
