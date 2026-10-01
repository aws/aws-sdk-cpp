/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Model {
enum class BrandProfileAttributeType { NOT_SET, TEXT, IMAGE, DOCUMENT };

namespace BrandProfileAttributeTypeMapper {
AWS_ENDUSERMESSAGING_API BrandProfileAttributeType GetBrandProfileAttributeTypeForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForBrandProfileAttributeType(BrandProfileAttributeType value);
}  // namespace BrandProfileAttributeTypeMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
