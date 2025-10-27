/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/ECRPublic_EXPORTS.h>

namespace Aws {
namespace ECRPublic {
namespace Model {
enum class RegistryAliasStatus { NOT_SET, ACTIVE, PENDING, REJECTED };

namespace RegistryAliasStatusMapper {
AWS_ECRPUBLIC_API RegistryAliasStatus GetRegistryAliasStatusForName(const Aws::String& name);

AWS_ECRPUBLIC_API Aws::String GetNameForRegistryAliasStatus(RegistryAliasStatus value);
}  // namespace RegistryAliasStatusMapper
}  // namespace Model
}  // namespace ECRPublic
}  // namespace Aws
