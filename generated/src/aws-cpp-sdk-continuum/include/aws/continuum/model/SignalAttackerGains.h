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
enum class SignalAttackerGains { NOT_SET, EXECUTE, MODIFY_PRIVILEGED, MODIFY_DATA, MODIFY_COSMETIC, READ, NEITHER };

namespace SignalAttackerGainsMapper {
AWS_CONTINUUM_API SignalAttackerGains GetSignalAttackerGainsForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForSignalAttackerGains(SignalAttackerGains value);
}  // namespace SignalAttackerGainsMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
