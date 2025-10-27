/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

namespace Aws {
namespace MailManager {
namespace Model {
enum class ArchiveStringOperator { NOT_SET, CONTAINS };

namespace ArchiveStringOperatorMapper {
AWS_MAILMANAGER_API ArchiveStringOperator GetArchiveStringOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForArchiveStringOperator(ArchiveStringOperator value);
}  // namespace ArchiveStringOperatorMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
