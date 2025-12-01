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
enum class ApplicationType { NOT_SET, STANDARD, SERVICE, MCP_SERVER };

namespace ApplicationTypeMapper {
AWS_APPINTEGRATIONSSERVICE_API ApplicationType GetApplicationTypeForName(const Aws::String& name);

AWS_APPINTEGRATIONSSERVICE_API Aws::String GetNameForApplicationType(ApplicationType value);
}  // namespace ApplicationTypeMapper
}  // namespace Model
}  // namespace AppIntegrationsService
}  // namespace Aws
