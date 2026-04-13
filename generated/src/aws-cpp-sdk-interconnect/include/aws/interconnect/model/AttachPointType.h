/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

namespace Aws {
namespace Interconnect {
namespace Model {
enum class AttachPointType { NOT_SET, DirectConnectGateway };

namespace AttachPointTypeMapper {
AWS_INTERCONNECT_API AttachPointType GetAttachPointTypeForName(const Aws::String& name);

AWS_INTERCONNECT_API Aws::String GetNameForAttachPointType(AttachPointType value);
}  // namespace AttachPointTypeMapper
}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
