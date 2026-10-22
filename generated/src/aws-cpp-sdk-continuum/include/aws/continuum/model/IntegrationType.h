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
enum class IntegrationType { NOT_SET, GITHUB, GITLAB, S3 };

namespace IntegrationTypeMapper {
AWS_CONTINUUM_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIntegrationType(IntegrationType value);
}  // namespace IntegrationTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
