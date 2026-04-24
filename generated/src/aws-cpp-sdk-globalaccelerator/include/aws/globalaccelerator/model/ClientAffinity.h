/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

namespace Aws {
namespace GlobalAccelerator {
namespace Model {
enum class ClientAffinity { NOT_SET, NONE, SOURCE_IP };

namespace ClientAffinityMapper {
AWS_GLOBALACCELERATOR_API ClientAffinity GetClientAffinityForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForClientAffinity(ClientAffinity value);
}  // namespace ClientAffinityMapper
}  // namespace Model
}  // namespace GlobalAccelerator
}  // namespace Aws
