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
  enum class RequirePin
  {
    NOT_SET,
    YES,
    NO,
    OPTIONAL
  };

namespace RequirePinMapper
{
AWS_ALEXAFORBUSINESS_API RequirePin GetRequirePinForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForRequirePin(RequirePin value);
} // namespace RequirePinMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
