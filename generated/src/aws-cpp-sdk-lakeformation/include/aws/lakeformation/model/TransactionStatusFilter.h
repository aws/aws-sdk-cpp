/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

namespace Aws {
namespace LakeFormation {
namespace Model {
enum class TransactionStatusFilter { NOT_SET, ALL, COMPLETED, ACTIVE, COMMITTED, ABORTED };

namespace TransactionStatusFilterMapper {
AWS_LAKEFORMATION_API TransactionStatusFilter GetTransactionStatusFilterForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForTransactionStatusFilter(TransactionStatusFilter value);
}  // namespace TransactionStatusFilterMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
