/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class ContactParticipantRole { NOT_SET, AGENT, SYSTEM, CUSTOM_BOT };

namespace ContactParticipantRoleMapper {
AWS_CONNECT_API ContactParticipantRole GetContactParticipantRoleForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactParticipantRole(ContactParticipantRole value);
}  // namespace ContactParticipantRoleMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
