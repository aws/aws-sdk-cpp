/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    en_US,
    en_GB,
    es_US,
    fr_CA,
    fr_FR,
    en_AU,
    it_IT,
    de_DE,
    pt_BR,
    ja_JP,
    ko_KR,
    zh_CN
  };

namespace LanguageCodeMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
