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
enum class UpdateOutboundEmailMessageSourceType { NOT_SET, RAW };

namespace UpdateOutboundEmailMessageSourceTypeMapper {
AWS_CONNECT_API UpdateOutboundEmailMessageSourceType GetUpdateOutboundEmailMessageSourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForUpdateOutboundEmailMessageSourceType(UpdateOutboundEmailMessageSourceType value);
}  // namespace UpdateOutboundEmailMessageSourceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
