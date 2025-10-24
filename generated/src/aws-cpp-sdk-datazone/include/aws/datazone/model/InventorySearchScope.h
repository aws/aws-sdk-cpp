﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class InventorySearchScope { NOT_SET, ASSET, GLOSSARY, GLOSSARY_TERM, DATA_PRODUCT };

namespace InventorySearchScopeMapper {
AWS_DATAZONE_API InventorySearchScope GetInventorySearchScopeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForInventorySearchScope(InventorySearchScope value);
}  // namespace InventorySearchScopeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
