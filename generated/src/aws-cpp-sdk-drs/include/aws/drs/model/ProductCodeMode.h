/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>

namespace Aws {
namespace drs {
namespace Model {
enum class ProductCodeMode { NOT_SET, ENABLED, DISABLED };

namespace ProductCodeModeMapper {
AWS_DRS_API ProductCodeMode GetProductCodeModeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForProductCodeMode(ProductCodeMode value);
}  // namespace ProductCodeModeMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
