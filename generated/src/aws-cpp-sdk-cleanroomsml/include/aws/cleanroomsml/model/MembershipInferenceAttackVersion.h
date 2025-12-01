/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRoomsML {
namespace Model {
enum class MembershipInferenceAttackVersion { NOT_SET, DISTANCE_TO_CLOSEST_RECORD_V1 };

namespace MembershipInferenceAttackVersionMapper {
AWS_CLEANROOMSML_API MembershipInferenceAttackVersion GetMembershipInferenceAttackVersionForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForMembershipInferenceAttackVersion(MembershipInferenceAttackVersion value);
}  // namespace MembershipInferenceAttackVersionMapper
}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
