/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class AcmeEndpointStatus { NOT_SET, CREATING, ACTIVE, DELETING, FAILED };

namespace AcmeEndpointStatusMapper {
AWS_ACM_API AcmeEndpointStatus GetAcmeEndpointStatusForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForAcmeEndpointStatus(AcmeEndpointStatus value);
}  // namespace AcmeEndpointStatusMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
