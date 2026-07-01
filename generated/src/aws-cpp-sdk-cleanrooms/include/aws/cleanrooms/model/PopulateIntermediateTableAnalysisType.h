/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class PopulateIntermediateTableAnalysisType { NOT_SET, QUERY };

namespace PopulateIntermediateTableAnalysisTypeMapper {
AWS_CLEANROOMS_API PopulateIntermediateTableAnalysisType GetPopulateIntermediateTableAnalysisTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForPopulateIntermediateTableAnalysisType(PopulateIntermediateTableAnalysisType value);
}  // namespace PopulateIntermediateTableAnalysisTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
