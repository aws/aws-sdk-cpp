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
enum class ObjectVersionIds { NOT_SET, INCLUDE, NONE };

namespace ObjectVersionIdsMapper {
AWS_DATASYNC_API ObjectVersionIds GetObjectVersionIdsForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForObjectVersionIds(ObjectVersionIds value);
}  // namespace ObjectVersionIdsMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
