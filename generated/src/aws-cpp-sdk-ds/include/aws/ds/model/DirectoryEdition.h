/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/DirectoryService_EXPORTS.h>

namespace Aws {
namespace DirectoryService {
namespace Model {
enum class DirectoryEdition { NOT_SET, Enterprise, Standard, Hybrid };

namespace DirectoryEditionMapper {
AWS_DIRECTORYSERVICE_API DirectoryEdition GetDirectoryEditionForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForDirectoryEdition(DirectoryEdition value);
}  // namespace DirectoryEditionMapper
}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
