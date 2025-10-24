/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {
enum class EncodingTypeValue { NOT_SET, plain, plain_dictionary, rle_dictionary };

namespace EncodingTypeValueMapper {
AWS_DATABASEMIGRATIONSERVICE_API EncodingTypeValue GetEncodingTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForEncodingTypeValue(EncodingTypeValue value);
}  // namespace EncodingTypeValueMapper
}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
