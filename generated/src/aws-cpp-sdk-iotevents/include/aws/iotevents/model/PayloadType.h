/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/IoTEvents_EXPORTS.h>

namespace Aws {
namespace IoTEvents {
namespace Model {
enum class PayloadType { NOT_SET, STRING, JSON };

namespace PayloadTypeMapper {
AWS_IOTEVENTS_API PayloadType GetPayloadTypeForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForPayloadType(PayloadType value);
}  // namespace PayloadTypeMapper
}  // namespace Model
}  // namespace IoTEvents
}  // namespace Aws
