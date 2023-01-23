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
  enum class SipType
  {
    NOT_SET,
    WORK
  };

namespace SipTypeMapper
{
AWS_ALEXAFORBUSINESS_API SipType GetSipTypeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForSipType(SipType value);
} // namespace SipTypeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
