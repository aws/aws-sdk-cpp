/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

namespace Aws {
namespace LexModelsV2 {
namespace Model {
enum class TestSetStatus { NOT_SET, Importing, PendingAnnotation, Deleting, ValidationError, Ready };

namespace TestSetStatusMapper {
AWS_LEXMODELSV2_API TestSetStatus GetTestSetStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForTestSetStatus(TestSetStatus value);
}  // namespace TestSetStatusMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
