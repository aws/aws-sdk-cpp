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
enum class BuyerDomain { NOT_SET, NetworkID };

namespace BuyerDomainMapper {
AWS_INVOICING_API BuyerDomain GetBuyerDomainForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForBuyerDomain(BuyerDomain value);
}  // namespace BuyerDomainMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
