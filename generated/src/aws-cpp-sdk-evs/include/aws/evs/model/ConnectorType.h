/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVS_EXPORTS.h>

namespace Aws {
namespace EVS {
namespace Model {
enum class ConnectorType { NOT_SET, VCENTER };

namespace ConnectorTypeMapper {
AWS_EVS_API ConnectorType GetConnectorTypeForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForConnectorType(ConnectorType value);
}  // namespace ConnectorTypeMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
