/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class Sex { NOT_SET, MALE, FEMALE, NON_BINARY, UNKNOWN };

namespace SexMapper {
AWS_CONNECTHEALTH_API Sex GetSexForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForSex(Sex value);
}  // namespace SexMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
