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
enum class RemoteAccountIdentifierType { NOT_SET, account, email };

namespace RemoteAccountIdentifierTypeMapper {
AWS_INTERCONNECT_API RemoteAccountIdentifierType GetRemoteAccountIdentifierTypeForName(const Aws::String& name);

AWS_INTERCONNECT_API Aws::String GetNameForRemoteAccountIdentifierType(RemoteAccountIdentifierType value);
}  // namespace RemoteAccountIdentifierTypeMapper
}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
