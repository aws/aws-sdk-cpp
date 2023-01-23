/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class ChannelType
  {
    NOT_SET,
    Facebook,
    Slack,
    Twilio_Sms,
    Kik
  };

namespace ChannelTypeMapper
{
AWS_LEXMODELBUILDINGSERVICE_API ChannelType GetChannelTypeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForChannelType(ChannelType value);
} // namespace ChannelTypeMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
