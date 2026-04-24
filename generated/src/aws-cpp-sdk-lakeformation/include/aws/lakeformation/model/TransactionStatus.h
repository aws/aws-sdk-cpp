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
enum class TransactionStatus { NOT_SET, ACTIVE, COMMITTED, ABORTED, COMMIT_IN_PROGRESS };

namespace TransactionStatusMapper {
AWS_LAKEFORMATION_API TransactionStatus GetTransactionStatusForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForTransactionStatus(TransactionStatus value);
}  // namespace TransactionStatusMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
