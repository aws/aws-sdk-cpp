/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class Locale
  {
    NOT_SET,
    de_DE,
    en_AU,
    en_GB,
    en_US,
    es_419,
    es_ES,
    es_US,
    fr_FR,
    fr_CA,
    it_IT
  };

namespace LocaleMapper
{
AWS_LEXMODELBUILDINGSERVICE_API Locale GetLocaleForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForLocale(Locale value);
} // namespace LocaleMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
