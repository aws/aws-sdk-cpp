/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class DomainStatus { NOT_SET, ACTIVE, DELETING, DELETED };

namespace DomainStatusMapper {
AWS_CONNECTHEALTH_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForDomainStatus(DomainStatus value);
}  // namespace DomainStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
