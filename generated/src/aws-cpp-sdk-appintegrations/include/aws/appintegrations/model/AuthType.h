/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppIntegrationsService {
namespace Model {
enum class AuthType { NOT_SET, API_KEY };

namespace AuthTypeMapper {
AWS_APPINTEGRATIONSSERVICE_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_APPINTEGRATIONSSERVICE_API Aws::String GetNameForAuthType(AuthType value);
}  // namespace AuthTypeMapper
}  // namespace Model
}  // namespace AppIntegrationsService
}  // namespace Aws
