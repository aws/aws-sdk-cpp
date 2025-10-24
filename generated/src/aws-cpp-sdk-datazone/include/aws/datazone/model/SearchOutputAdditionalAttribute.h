/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class SearchOutputAdditionalAttribute { NOT_SET, FORMS, TIME_SERIES_DATA_POINT_FORMS, TEXT_MATCH_RATIONALE };

namespace SearchOutputAdditionalAttributeMapper {
AWS_DATAZONE_API SearchOutputAdditionalAttribute GetSearchOutputAdditionalAttributeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSearchOutputAdditionalAttribute(SearchOutputAdditionalAttribute value);
}  // namespace SearchOutputAdditionalAttributeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
