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
enum class DisconnectOnCustomerExitParticipantType { NOT_SET, AGENT };

namespace DisconnectOnCustomerExitParticipantTypeMapper {
AWS_CONNECT_API DisconnectOnCustomerExitParticipantType GetDisconnectOnCustomerExitParticipantTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForDisconnectOnCustomerExitParticipantType(DisconnectOnCustomerExitParticipantType value);
}  // namespace DisconnectOnCustomerExitParticipantTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
