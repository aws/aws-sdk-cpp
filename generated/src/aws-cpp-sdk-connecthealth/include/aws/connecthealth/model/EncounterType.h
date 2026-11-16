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
enum class EncounterType { NOT_SET, TELEHEALTH, IN_PERSON };

namespace EncounterTypeMapper {
AWS_CONNECTHEALTH_API EncounterType GetEncounterTypeForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForEncounterType(EncounterType value);
}  // namespace EncounterTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
