/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class FeedStatus { NOT_SET, CREATING, AVAILABLE, ACTIVE, UPDATING, DELETING, DELETED, ARCHIVED };

namespace FeedStatusMapper {
AWS_ELEMENTALINFERENCE_API FeedStatus GetFeedStatusForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForFeedStatus(FeedStatus value);
}  // namespace FeedStatusMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
