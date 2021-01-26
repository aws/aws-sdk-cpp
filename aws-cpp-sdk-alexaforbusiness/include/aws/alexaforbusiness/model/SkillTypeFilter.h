/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class SkillTypeFilter
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_,
    ALL
  };

namespace SkillTypeFilterMapper
{
AWS_ALEXAFORBUSINESS_API SkillTypeFilter GetSkillTypeFilterForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForSkillTypeFilter(SkillTypeFilter value);
} // namespace SkillTypeFilterMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
