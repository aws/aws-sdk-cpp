/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class UpdateType { NOT_SET, DOMAIN_VALIDATION_METHOD };

namespace UpdateTypeMapper {
AWS_ACM_API UpdateType GetUpdateTypeForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForUpdateType(UpdateType value);
}  // namespace UpdateTypeMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
