/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>

namespace Aws {
namespace ECR {
namespace Model {
enum class SigningRepositoryFilterType { NOT_SET, WILDCARD_MATCH };

namespace SigningRepositoryFilterTypeMapper {
AWS_ECR_API SigningRepositoryFilterType GetSigningRepositoryFilterTypeForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForSigningRepositoryFilterType(SigningRepositoryFilterType value);
}  // namespace SigningRepositoryFilterTypeMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
