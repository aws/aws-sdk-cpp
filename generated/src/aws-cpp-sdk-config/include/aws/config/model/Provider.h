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
enum class Provider { NOT_SET, AZURE };

namespace ProviderMapper {
AWS_CONFIGSERVICE_API Provider GetProviderForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForProvider(Provider value);
}  // namespace ProviderMapper
}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
