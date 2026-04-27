/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApplicationSignals {
namespace Model {
enum class SelectionType { NOT_SET, EXPLICIT, PREFIX, REGEX };

namespace SelectionTypeMapper {
AWS_APPLICATIONSIGNALS_API SelectionType GetSelectionTypeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForSelectionType(SelectionType value);
}  // namespace SelectionTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
