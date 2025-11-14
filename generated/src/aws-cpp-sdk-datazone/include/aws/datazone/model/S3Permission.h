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
enum class S3Permission { NOT_SET, READ, WRITE };

namespace S3PermissionMapper {
AWS_DATAZONE_API S3Permission GetS3PermissionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForS3Permission(S3Permission value);
}  // namespace S3PermissionMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
