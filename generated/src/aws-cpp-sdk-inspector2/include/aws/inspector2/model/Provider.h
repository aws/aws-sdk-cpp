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
enum class Provider { NOT_SET, AWS, AZURE };

namespace ProviderMapper {
AWS_INSPECTOR2_API Provider GetProviderForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForProvider(Provider value);
}  // namespace ProviderMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
