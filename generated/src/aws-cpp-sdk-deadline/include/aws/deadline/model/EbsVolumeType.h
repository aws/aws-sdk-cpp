/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Model {
enum class EbsVolumeType { NOT_SET, gp3 };

namespace EbsVolumeTypeMapper {
AWS_DEADLINE_API EbsVolumeType GetEbsVolumeTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForEbsVolumeType(EbsVolumeType value);
}  // namespace EbsVolumeTypeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
