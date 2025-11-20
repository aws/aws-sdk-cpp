/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

namespace Aws {
namespace LakeFormation {
namespace Model {
enum class ServiceAuthorization { NOT_SET, ENABLED, DISABLED };

namespace ServiceAuthorizationMapper {
AWS_LAKEFORMATION_API ServiceAuthorization GetServiceAuthorizationForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForServiceAuthorization(ServiceAuthorization value);
}  // namespace ServiceAuthorizationMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
