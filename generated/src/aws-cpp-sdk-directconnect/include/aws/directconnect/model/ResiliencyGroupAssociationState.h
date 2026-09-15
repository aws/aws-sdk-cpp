/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

namespace Aws {
namespace DirectConnect {
namespace Model {
enum class ResiliencyGroupAssociationState { NOT_SET, associating, associated, disassociating, disassociated };

namespace ResiliencyGroupAssociationStateMapper {
AWS_DIRECTCONNECT_API ResiliencyGroupAssociationState GetResiliencyGroupAssociationStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForResiliencyGroupAssociationState(ResiliencyGroupAssociationState value);
}  // namespace ResiliencyGroupAssociationStateMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
