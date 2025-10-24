﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>

namespace Aws {
namespace ECR {
namespace Model {
enum class ImageTagMutability { NOT_SET, MUTABLE, IMMUTABLE, IMMUTABLE_WITH_EXCLUSION, MUTABLE_WITH_EXCLUSION };

namespace ImageTagMutabilityMapper {
AWS_ECR_API ImageTagMutability GetImageTagMutabilityForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForImageTagMutability(ImageTagMutability value);
}  // namespace ImageTagMutabilityMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
