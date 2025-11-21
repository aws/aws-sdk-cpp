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
enum class SupplierDomain { NOT_SET, NetworkID };

namespace SupplierDomainMapper {
AWS_INVOICING_API SupplierDomain GetSupplierDomainForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForSupplierDomain(SupplierDomain value);
}  // namespace SupplierDomainMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
