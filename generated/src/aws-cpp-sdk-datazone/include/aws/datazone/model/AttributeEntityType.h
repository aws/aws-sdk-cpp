/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class AttributeEntityType { NOT_SET, ASSET, LISTING };

namespace AttributeEntityTypeMapper {
AWS_DATAZONE_API AttributeEntityType GetAttributeEntityTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForAttributeEntityType(AttributeEntityType value);
}  // namespace AttributeEntityTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
