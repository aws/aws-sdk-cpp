/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Transfer {
namespace Model {
enum class CommunicationMode { NOT_SET, CLIENT_TALK_FIRST, SERVER_TALK_FIRST };

namespace CommunicationModeMapper {
AWS_TRANSFER_API CommunicationMode GetCommunicationModeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForCommunicationMode(CommunicationMode value);
}  // namespace CommunicationModeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
