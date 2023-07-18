/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class Scte27OcrLanguage
  {
    NOT_SET,
    DEU,
    ENG,
    FRA,
    NLD,
    POR,
    SPA
  };

namespace Scte27OcrLanguageMapper
{
AWS_MEDIALIVE_API Scte27OcrLanguage GetScte27OcrLanguageForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte27OcrLanguage(Scte27OcrLanguage value);
} // namespace Scte27OcrLanguageMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
