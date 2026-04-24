/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVS_EXPORTS.h>

namespace Aws {
namespace IVS {
namespace Model {
enum class StreamHealth { NOT_SET, HEALTHY, STARVING, UNKNOWN };

namespace StreamHealthMapper {
AWS_IVS_API StreamHealth GetStreamHealthForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForStreamHealth(StreamHealth value);
}  // namespace StreamHealthMapper
}  // namespace Model
}  // namespace IVS
}  // namespace Aws
