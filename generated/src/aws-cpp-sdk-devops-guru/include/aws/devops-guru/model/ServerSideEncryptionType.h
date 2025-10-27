/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>

namespace Aws {
namespace DevOpsGuru {
namespace Model {
enum class ServerSideEncryptionType { NOT_SET, CUSTOMER_MANAGED_KEY, AWS_OWNED_KMS_KEY };

namespace ServerSideEncryptionTypeMapper {
AWS_DEVOPSGURU_API ServerSideEncryptionType GetServerSideEncryptionTypeForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForServerSideEncryptionType(ServerSideEncryptionType value);
}  // namespace ServerSideEncryptionTypeMapper
}  // namespace Model
}  // namespace DevOpsGuru
}  // namespace Aws
