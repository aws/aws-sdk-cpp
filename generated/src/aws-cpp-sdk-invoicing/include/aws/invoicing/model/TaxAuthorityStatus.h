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
enum class TaxAuthorityStatus { NOT_SET, ISSUED, CANCELLED };

namespace TaxAuthorityStatusMapper {
AWS_INVOICING_API TaxAuthorityStatus GetTaxAuthorityStatusForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForTaxAuthorityStatus(TaxAuthorityStatus value);
}  // namespace TaxAuthorityStatusMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
