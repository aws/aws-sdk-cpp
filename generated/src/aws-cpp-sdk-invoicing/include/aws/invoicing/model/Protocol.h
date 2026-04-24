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
enum class Protocol { NOT_SET, CXML };

namespace ProtocolMapper {
AWS_INVOICING_API Protocol GetProtocolForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForProtocol(Protocol value);
}  // namespace ProtocolMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
