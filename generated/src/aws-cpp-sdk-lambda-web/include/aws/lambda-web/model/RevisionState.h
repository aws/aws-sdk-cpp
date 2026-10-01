/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
namespace Model {
enum class RevisionState { NOT_SET, Pending, Active, Failed };

namespace RevisionStateMapper {
AWS_LAMBDAWEB_API RevisionState GetRevisionStateForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForRevisionState(RevisionState value);
}  // namespace RevisionStateMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
