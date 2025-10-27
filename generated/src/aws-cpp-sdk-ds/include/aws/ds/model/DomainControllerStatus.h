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
enum class DomainControllerStatus { NOT_SET, Creating, Active, Impaired, Restoring, Deleting, Deleted, Failed, Updating };

namespace DomainControllerStatusMapper {
AWS_DIRECTORYSERVICE_API DomainControllerStatus GetDomainControllerStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForDomainControllerStatus(DomainControllerStatus value);
}  // namespace DomainControllerStatusMapper
}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
