/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class DirectS3Read { NOT_SET, ENABLED, DISABLED, AUTO };

namespace DirectS3ReadMapper {
AWS_LAMBDA_API DirectS3Read GetDirectS3ReadForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForDirectS3Read(DirectS3Read value);
}  // namespace DirectS3ReadMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
