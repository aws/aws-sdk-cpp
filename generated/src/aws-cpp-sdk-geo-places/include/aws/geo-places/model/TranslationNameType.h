/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>

namespace Aws {
namespace GeoPlaces {
namespace Model {
enum class TranslationNameType { NOT_SET, Abbreviation, AreaCode, BaseName, Exonym, Shortened, Synonym };

namespace TranslationNameTypeMapper {
AWS_GEOPLACES_API TranslationNameType GetTranslationNameTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForTranslationNameType(TranslationNameType value);
}  // namespace TranslationNameTypeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
