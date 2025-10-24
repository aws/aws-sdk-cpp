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
enum class AutoTuneDesiredState { NOT_SET, ENABLED, DISABLED };

namespace AutoTuneDesiredStateMapper {
AWS_ELASTICSEARCHSERVICE_API AutoTuneDesiredState GetAutoTuneDesiredStateForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForAutoTuneDesiredState(AutoTuneDesiredState value);
}  // namespace AutoTuneDesiredStateMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
