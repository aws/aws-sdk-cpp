/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class IntegrationAuthorizationProviderType { NOT_SET, GITHUB };

namespace IntegrationAuthorizationProviderTypeMapper {
AWS_CONTINUUM_API IntegrationAuthorizationProviderType GetIntegrationAuthorizationProviderTypeForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIntegrationAuthorizationProviderType(IntegrationAuthorizationProviderType value);
}  // namespace IntegrationAuthorizationProviderTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
