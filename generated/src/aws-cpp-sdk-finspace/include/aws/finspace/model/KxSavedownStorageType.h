/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/Finspace_EXPORTS.h>

namespace Aws {
namespace finspace {
namespace Model {
enum class KxSavedownStorageType { NOT_SET, SDS01 };

namespace KxSavedownStorageTypeMapper {
AWS_FINSPACE_API KxSavedownStorageType GetKxSavedownStorageTypeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxSavedownStorageType(KxSavedownStorageType value);
}  // namespace KxSavedownStorageTypeMapper
}  // namespace Model
}  // namespace finspace
}  // namespace Aws
