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
  enum class SkillType
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_
  };

namespace SkillTypeMapper
{
AWS_ALEXAFORBUSINESS_API SkillType GetSkillTypeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForSkillType(SkillType value);
} // namespace SkillTypeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
