/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class ConnectorType { NOT_SET, CUSTOMER_MANAGED, SERVICE_LINKED };

namespace ConnectorTypeMapper {
AWS_INSPECTOR2_API ConnectorType GetConnectorTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForConnectorType(ConnectorType value);
}  // namespace ConnectorTypeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
