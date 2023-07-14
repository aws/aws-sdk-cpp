/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class BotType
  {
    NOT_SET,
    ChatBot
  };

namespace BotTypeMapper
{
AWS_CHIME_API BotType GetBotTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForBotType(BotType value);
} // namespace BotTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
