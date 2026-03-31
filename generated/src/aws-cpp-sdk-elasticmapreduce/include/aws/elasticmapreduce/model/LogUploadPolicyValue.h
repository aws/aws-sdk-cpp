/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

namespace Aws {
namespace EMR {
namespace Model {
enum class LogUploadPolicyValue { NOT_SET, emr_managed, on_customer_s3only, disabled };

namespace LogUploadPolicyValueMapper {
AWS_EMR_API LogUploadPolicyValue GetLogUploadPolicyValueForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForLogUploadPolicyValue(LogUploadPolicyValue value);
}  // namespace LogUploadPolicyValueMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
