/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/Finspace_EXPORTS.h>

namespace Aws {
namespace finspace {
namespace Model {
enum class IPAddressType { NOT_SET, IP_V4 };

namespace IPAddressTypeMapper {
AWS_FINSPACE_API IPAddressType GetIPAddressTypeForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForIPAddressType(IPAddressType value);
}  // namespace IPAddressTypeMapper
}  // namespace Model
}  // namespace finspace
}  // namespace Aws
