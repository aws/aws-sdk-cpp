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
enum class SignalAccessLevel { NOT_SET, NONE, ANY_AUTHENTICATED, PRIVILEGED };

namespace SignalAccessLevelMapper {
AWS_CONTINUUM_API SignalAccessLevel GetSignalAccessLevelForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForSignalAccessLevel(SignalAccessLevel value);
}  // namespace SignalAccessLevelMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
