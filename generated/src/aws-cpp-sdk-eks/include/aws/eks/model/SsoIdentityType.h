/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace EKS {
namespace Model {
enum class SsoIdentityType { NOT_SET, SSO_USER, SSO_GROUP };

namespace SsoIdentityTypeMapper {
AWS_EKS_API SsoIdentityType GetSsoIdentityTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForSsoIdentityType(SsoIdentityType value);
}  // namespace SsoIdentityTypeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
