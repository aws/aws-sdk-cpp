/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class RootHierarchyType { NOT_SET, N2_AMAZON_MANAGED, N2_SFG2_AMAZON_MANAGED };

namespace RootHierarchyTypeMapper {
AWS_ACM_API RootHierarchyType GetRootHierarchyTypeForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForRootHierarchyType(RootHierarchyType value);
}  // namespace RootHierarchyTypeMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
