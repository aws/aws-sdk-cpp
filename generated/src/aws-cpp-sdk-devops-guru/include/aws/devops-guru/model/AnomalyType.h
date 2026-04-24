/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>

namespace Aws {
namespace DevOpsGuru {
namespace Model {
enum class AnomalyType { NOT_SET, CAUSAL, CONTEXTUAL };

namespace AnomalyTypeMapper {
AWS_DEVOPSGURU_API AnomalyType GetAnomalyTypeForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForAnomalyType(AnomalyType value);
}  // namespace AnomalyTypeMapper
}  // namespace Model
}  // namespace DevOpsGuru
}  // namespace Aws
