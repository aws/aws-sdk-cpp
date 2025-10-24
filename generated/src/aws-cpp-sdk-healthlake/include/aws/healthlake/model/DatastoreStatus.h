﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace HealthLake {
namespace Model {
enum class DatastoreStatus { NOT_SET, CREATING, ACTIVE, DELETING, DELETED, CREATE_FAILED };

namespace DatastoreStatusMapper {
AWS_HEALTHLAKE_API DatastoreStatus GetDatastoreStatusForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForDatastoreStatus(DatastoreStatus value);
}  // namespace DatastoreStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
