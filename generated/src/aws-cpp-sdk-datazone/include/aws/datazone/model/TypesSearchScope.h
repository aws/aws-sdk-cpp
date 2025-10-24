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
enum class TypesSearchScope { NOT_SET, ASSET_TYPE, FORM_TYPE, LINEAGE_NODE_TYPE };

namespace TypesSearchScopeMapper {
AWS_DATAZONE_API TypesSearchScope GetTypesSearchScopeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForTypesSearchScope(TypesSearchScope value);
}  // namespace TypesSearchScopeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
