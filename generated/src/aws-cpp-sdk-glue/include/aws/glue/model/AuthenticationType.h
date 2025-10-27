/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class AuthenticationType { NOT_SET, BASIC, OAUTH2, CUSTOM, IAM };

namespace AuthenticationTypeMapper {
AWS_GLUE_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
}  // namespace AuthenticationTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
