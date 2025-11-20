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
enum class DetailLevel { NOT_SET, BRIEF, DETAILED };

namespace DetailLevelMapper {
AWS_APPLICATIONSIGNALS_API DetailLevel GetDetailLevelForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForDetailLevel(DetailLevel value);
}  // namespace DetailLevelMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
