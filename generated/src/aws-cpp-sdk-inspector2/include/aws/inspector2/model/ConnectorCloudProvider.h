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
enum class ConnectorCloudProvider { NOT_SET, AZURE };

namespace ConnectorCloudProviderMapper {
AWS_INSPECTOR2_API ConnectorCloudProvider GetConnectorCloudProviderForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForConnectorCloudProvider(ConnectorCloudProvider value);
}  // namespace ConnectorCloudProviderMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
