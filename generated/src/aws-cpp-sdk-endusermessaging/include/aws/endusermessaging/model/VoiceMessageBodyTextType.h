/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Model {
enum class VoiceMessageBodyTextType { NOT_SET, TEXT, SSML };

namespace VoiceMessageBodyTextTypeMapper {
AWS_ENDUSERMESSAGING_API VoiceMessageBodyTextType GetVoiceMessageBodyTextTypeForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForVoiceMessageBodyTextType(VoiceMessageBodyTextType value);
}  // namespace VoiceMessageBodyTextTypeMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
