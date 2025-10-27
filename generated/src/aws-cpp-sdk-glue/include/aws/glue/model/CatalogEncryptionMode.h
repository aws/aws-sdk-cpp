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
enum class CatalogEncryptionMode { NOT_SET, DISABLED, SSE_KMS, SSE_KMS_WITH_SERVICE_ROLE };

namespace CatalogEncryptionModeMapper {
AWS_GLUE_API CatalogEncryptionMode GetCatalogEncryptionModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCatalogEncryptionMode(CatalogEncryptionMode value);
}  // namespace CatalogEncryptionModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
