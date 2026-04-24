/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectParticipant {
namespace Model {
enum class MessageProcessingStatus { NOT_SET, PROCESSING, FAILED, REJECTED };

namespace MessageProcessingStatusMapper {
AWS_CONNECTPARTICIPANT_API MessageProcessingStatus GetMessageProcessingStatusForName(const Aws::String& name);

AWS_CONNECTPARTICIPANT_API Aws::String GetNameForMessageProcessingStatus(MessageProcessingStatus value);
}  // namespace MessageProcessingStatusMapper
}  // namespace Model
}  // namespace ConnectParticipant
}  // namespace Aws
