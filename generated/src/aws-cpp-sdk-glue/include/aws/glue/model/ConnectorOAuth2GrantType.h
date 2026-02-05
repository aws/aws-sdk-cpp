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
enum class ConnectorOAuth2GrantType { NOT_SET, CLIENT_CREDENTIALS, JWT_BEARER, AUTHORIZATION_CODE };

namespace ConnectorOAuth2GrantTypeMapper {
AWS_GLUE_API ConnectorOAuth2GrantType GetConnectorOAuth2GrantTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConnectorOAuth2GrantType(ConnectorOAuth2GrantType value);
}  // namespace ConnectorOAuth2GrantTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
