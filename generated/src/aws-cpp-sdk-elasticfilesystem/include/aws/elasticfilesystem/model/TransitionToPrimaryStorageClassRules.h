/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>

namespace Aws {
namespace EFS {
namespace Model {
enum class TransitionToPrimaryStorageClassRules { NOT_SET, AFTER_1_ACCESS };

namespace TransitionToPrimaryStorageClassRulesMapper {
AWS_EFS_API TransitionToPrimaryStorageClassRules GetTransitionToPrimaryStorageClassRulesForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForTransitionToPrimaryStorageClassRules(TransitionToPrimaryStorageClassRules value);
}  // namespace TransitionToPrimaryStorageClassRulesMapper
}  // namespace Model
}  // namespace EFS
}  // namespace Aws
