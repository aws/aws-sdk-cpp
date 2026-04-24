/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/DataSync_EXPORTS.h>

namespace Aws {
namespace DataSync {
namespace Model {
enum class Mtime { NOT_SET, NONE, PRESERVE };

namespace MtimeMapper {
AWS_DATASYNC_API Mtime GetMtimeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForMtime(Mtime value);
}  // namespace MtimeMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
