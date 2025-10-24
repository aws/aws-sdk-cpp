/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>

namespace Aws {
namespace ElasticsearchService {
namespace Model {
enum class InitiatedBy { NOT_SET, CUSTOMER, SERVICE };

namespace InitiatedByMapper {
AWS_ELASTICSEARCHSERVICE_API InitiatedBy GetInitiatedByForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForInitiatedBy(InitiatedBy value);
}  // namespace InitiatedByMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
