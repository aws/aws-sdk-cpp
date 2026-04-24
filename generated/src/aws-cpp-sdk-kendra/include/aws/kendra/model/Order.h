/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/Kendra_EXPORTS.h>

namespace Aws {
namespace kendra {
namespace Model {
enum class Order { NOT_SET, ASCENDING, DESCENDING };

namespace OrderMapper {
AWS_KENDRA_API Order GetOrderForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForOrder(Order value);
}  // namespace OrderMapper
}  // namespace Model
}  // namespace kendra
}  // namespace Aws
