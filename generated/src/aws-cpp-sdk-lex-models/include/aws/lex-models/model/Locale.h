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
enum class Locale { NOT_SET, de_DE, en_AU, en_GB, en_IN, en_US, es_419, es_ES, es_US, fr_FR, fr_CA, it_IT, ja_JP, ko_KR };

namespace LocaleMapper {
AWS_LEXMODELBUILDINGSERVICE_API Locale GetLocaleForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForLocale(Locale value);
}  // namespace LocaleMapper
}  // namespace Model
}  // namespace LexModelBuildingService
}  // namespace Aws
