/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class AttestationPolicyStatus { NOT_SET, CONFIGURED };

namespace AttestationPolicyStatusMapper {
AWS_ECS_API AttestationPolicyStatus GetAttestationPolicyStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForAttestationPolicyStatus(AttestationPolicyStatus value);
}  // namespace AttestationPolicyStatusMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
