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
enum class TrustStoreResponseOption { NOT_SET, EXCLUDE, INCLUDE };

namespace TrustStoreResponseOptionMapper {
AWS_MAILMANAGER_API TrustStoreResponseOption GetTrustStoreResponseOptionForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForTrustStoreResponseOption(TrustStoreResponseOption value);
}  // namespace TrustStoreResponseOptionMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
