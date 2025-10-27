/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
enum class TokenEndpointAuthenticationScheme { NOT_SET, HTTP_BASIC, REQUEST_BODY_CREDENTIALS };

namespace TokenEndpointAuthenticationSchemeMapper {
AWS_IOTMANAGEDINTEGRATIONS_API TokenEndpointAuthenticationScheme GetTokenEndpointAuthenticationSchemeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForTokenEndpointAuthenticationScheme(TokenEndpointAuthenticationScheme value);
}  // namespace TokenEndpointAuthenticationSchemeMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
