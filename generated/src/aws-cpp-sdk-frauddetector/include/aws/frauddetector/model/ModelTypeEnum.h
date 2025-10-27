/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/FraudDetector_EXPORTS.h>

namespace Aws {
namespace FraudDetector {
namespace Model {
enum class ModelTypeEnum { NOT_SET, ONLINE_FRAUD_INSIGHTS, TRANSACTION_FRAUD_INSIGHTS, ACCOUNT_TAKEOVER_INSIGHTS };

namespace ModelTypeEnumMapper {
AWS_FRAUDDETECTOR_API ModelTypeEnum GetModelTypeEnumForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForModelTypeEnum(ModelTypeEnum value);
}  // namespace ModelTypeEnumMapper
}  // namespace Model
}  // namespace FraudDetector
}  // namespace Aws
