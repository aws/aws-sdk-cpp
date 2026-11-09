/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class CollectorStatus { NOT_SET, ACTIVE, PENDING_DELETION };

namespace CollectorStatusMapper {
AWS_CONTINUUM_API CollectorStatus GetCollectorStatusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForCollectorStatus(CollectorStatus value);
}  // namespace CollectorStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
