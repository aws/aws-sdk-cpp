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
enum class SignalBlastRadius { NOT_SET, CROSS_TENANT, OTHER_USERS_IN_TENANT, OWN_SCOPE };

namespace SignalBlastRadiusMapper {
AWS_CONTINUUM_API SignalBlastRadius GetSignalBlastRadiusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForSignalBlastRadius(SignalBlastRadius value);
}  // namespace SignalBlastRadiusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
