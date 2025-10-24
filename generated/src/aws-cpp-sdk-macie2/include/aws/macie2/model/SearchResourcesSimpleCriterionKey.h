﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/Macie2_EXPORTS.h>

namespace Aws {
namespace Macie2 {
namespace Model {
enum class SearchResourcesSimpleCriterionKey {
  NOT_SET,
  ACCOUNT_ID,
  S3_BUCKET_NAME,
  S3_BUCKET_EFFECTIVE_PERMISSION,
  S3_BUCKET_SHARED_ACCESS,
  AUTOMATED_DISCOVERY_MONITORING_STATUS
};

namespace SearchResourcesSimpleCriterionKeyMapper {
AWS_MACIE2_API SearchResourcesSimpleCriterionKey GetSearchResourcesSimpleCriterionKeyForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForSearchResourcesSimpleCriterionKey(SearchResourcesSimpleCriterionKey value);
}  // namespace SearchResourcesSimpleCriterionKeyMapper
}  // namespace Model
}  // namespace Macie2
}  // namespace Aws
