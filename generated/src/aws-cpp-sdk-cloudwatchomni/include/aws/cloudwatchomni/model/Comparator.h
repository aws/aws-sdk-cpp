/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class Comparator { NOT_SET, GT, LT, GTE, LTE };

namespace ComparatorMapper {
AWS_CLOUDWATCHOMNI_API Comparator GetComparatorForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForComparator(Comparator value);
}  // namespace ComparatorMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
