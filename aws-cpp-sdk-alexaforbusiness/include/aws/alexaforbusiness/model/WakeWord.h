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
  enum class WakeWord
  {
    NOT_SET,
    ALEXA,
    AMAZON,
    ECHO,
    COMPUTER
  };

namespace WakeWordMapper
{
AWS_ALEXAFORBUSINESS_API WakeWord GetWakeWordForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForWakeWord(WakeWord value);
} // namespace WakeWordMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
