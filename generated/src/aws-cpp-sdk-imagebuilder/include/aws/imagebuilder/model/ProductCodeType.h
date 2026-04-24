/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

namespace Aws {
namespace imagebuilder {
namespace Model {
enum class ProductCodeType { NOT_SET, marketplace };

namespace ProductCodeTypeMapper {
AWS_IMAGEBUILDER_API ProductCodeType GetProductCodeTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForProductCodeType(ProductCodeType value);
}  // namespace ProductCodeTypeMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
