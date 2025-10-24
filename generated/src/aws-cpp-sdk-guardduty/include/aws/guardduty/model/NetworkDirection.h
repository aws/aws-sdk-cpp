﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class NetworkDirection { NOT_SET, INBOUND, OUTBOUND };

namespace NetworkDirectionMapper {
AWS_GUARDDUTY_API NetworkDirection GetNetworkDirectionForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForNetworkDirection(NetworkDirection value);
}  // namespace NetworkDirectionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
