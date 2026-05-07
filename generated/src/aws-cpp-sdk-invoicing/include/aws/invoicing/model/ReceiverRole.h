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
enum class ReceiverRole { NOT_SET, SELLER, RESELLER, BUYER };

namespace ReceiverRoleMapper {
AWS_INVOICING_API ReceiverRole GetReceiverRoleForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForReceiverRole(ReceiverRole value);
}  // namespace ReceiverRoleMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
