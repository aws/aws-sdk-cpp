/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class GlossaryStatus { NOT_SET, DISABLED, ENABLED };

namespace GlossaryStatusMapper {
AWS_DATAZONE_API GlossaryStatus GetGlossaryStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGlossaryStatus(GlossaryStatus value);
}  // namespace GlossaryStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
