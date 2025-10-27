/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class LocalStorage { NOT_SET, included, required, excluded };

namespace LocalStorageMapper {
AWS_ECS_API LocalStorage GetLocalStorageForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForLocalStorage(LocalStorage value);
}  // namespace LocalStorageMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
