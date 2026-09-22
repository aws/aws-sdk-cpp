/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class QueryLanguage { NOT_SET, SQL, PROMQL };

namespace QueryLanguageMapper {
AWS_CLOUDWATCHOMNI_API QueryLanguage GetQueryLanguageForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForQueryLanguage(QueryLanguage value);
}  // namespace QueryLanguageMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
