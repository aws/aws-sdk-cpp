/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class TrainingMetricName { NOT_SET, hit, coverage, recall, popularity, freshness, similarity };

namespace TrainingMetricNameMapper {
AWS_CUSTOMERPROFILES_API TrainingMetricName GetTrainingMetricNameForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForTrainingMetricName(TrainingMetricName value);
}  // namespace TrainingMetricNameMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
