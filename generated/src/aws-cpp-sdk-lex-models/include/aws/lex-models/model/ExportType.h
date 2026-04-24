/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>

namespace Aws {
namespace LexModelBuildingService {
namespace Model {
enum class ExportType { NOT_SET, ALEXA_SKILLS_KIT, LEX };

namespace ExportTypeMapper {
AWS_LEXMODELBUILDINGSERVICE_API ExportType GetExportTypeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForExportType(ExportType value);
}  // namespace ExportTypeMapper
}  // namespace Model
}  // namespace LexModelBuildingService
}  // namespace Aws
