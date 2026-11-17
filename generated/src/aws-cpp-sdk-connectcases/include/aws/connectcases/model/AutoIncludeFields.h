/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectCases {
namespace Model {
enum class AutoIncludeFields { NOT_SET, All, System, Custom };

namespace AutoIncludeFieldsMapper {
AWS_CONNECTCASES_API AutoIncludeFields GetAutoIncludeFieldsForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForAutoIncludeFields(AutoIncludeFields value);
}  // namespace AutoIncludeFieldsMapper
}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
