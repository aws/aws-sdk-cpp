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
enum class TlsPolicy { NOT_SET, REQUIRED, OPTIONAL, FIPS };

namespace TlsPolicyMapper {
AWS_MAILMANAGER_API TlsPolicy GetTlsPolicyForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForTlsPolicy(TlsPolicy value);
}  // namespace TlsPolicyMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
