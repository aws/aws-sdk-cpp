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
enum class Uid { NOT_SET, NONE, INT_VALUE, NAME, BOTH };

namespace UidMapper {
AWS_DATASYNC_API Uid GetUidForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForUid(Uid value);
}  // namespace UidMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
