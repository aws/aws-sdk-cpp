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
enum class ManagedNoteTemplate { NOT_SET, HISTORY_AND_PHYSICAL, GIRPP, DAP, SIRP, BIRP, BEHAVIORAL_SOAP, PHYSICAL_SOAP };

namespace ManagedNoteTemplateMapper {
AWS_CONNECTHEALTH_API ManagedNoteTemplate GetManagedNoteTemplateForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForManagedNoteTemplate(ManagedNoteTemplate value);
}  // namespace ManagedNoteTemplateMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
