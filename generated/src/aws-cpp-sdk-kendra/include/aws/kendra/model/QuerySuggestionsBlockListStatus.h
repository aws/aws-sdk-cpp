/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/Kendra_EXPORTS.h>

namespace Aws {
namespace kendra {
namespace Model {
enum class QuerySuggestionsBlockListStatus { NOT_SET, ACTIVE, CREATING, DELETING, UPDATING, ACTIVE_BUT_UPDATE_FAILED, FAILED };

namespace QuerySuggestionsBlockListStatusMapper {
AWS_KENDRA_API QuerySuggestionsBlockListStatus GetQuerySuggestionsBlockListStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForQuerySuggestionsBlockListStatus(QuerySuggestionsBlockListStatus value);
}  // namespace QuerySuggestionsBlockListStatusMapper
}  // namespace Model
}  // namespace kendra
}  // namespace Aws
