/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConfigService {
namespace Model {
enum class ConnectorFilterName { NOT_SET, provider };

namespace ConnectorFilterNameMapper {
AWS_CONFIGSERVICE_API ConnectorFilterName GetConnectorFilterNameForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForConnectorFilterName(ConnectorFilterName value);
}  // namespace ConnectorFilterNameMapper
}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
