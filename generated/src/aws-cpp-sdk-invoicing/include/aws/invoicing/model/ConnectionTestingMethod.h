/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

namespace Aws {
namespace Invoicing {
namespace Model {
enum class ConnectionTestingMethod { NOT_SET, PROD_ENV_DOLLAR_TEST, TEST_ENV_REPLAY_TEST };

namespace ConnectionTestingMethodMapper {
AWS_INVOICING_API ConnectionTestingMethod GetConnectionTestingMethodForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForConnectionTestingMethod(ConnectionTestingMethod value);
}  // namespace ConnectionTestingMethodMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
