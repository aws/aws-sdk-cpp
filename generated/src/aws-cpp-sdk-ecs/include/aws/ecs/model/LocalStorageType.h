﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class LocalStorageType { NOT_SET, hdd, ssd };

namespace LocalStorageTypeMapper {
AWS_ECS_API LocalStorageType GetLocalStorageTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForLocalStorageType(LocalStorageType value);
}  // namespace LocalStorageTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
