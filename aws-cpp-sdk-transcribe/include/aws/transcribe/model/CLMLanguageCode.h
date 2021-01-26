/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{
  enum class CLMLanguageCode
  {
    NOT_SET,
    en_US
  };

namespace CLMLanguageCodeMapper
{
AWS_TRANSCRIBESERVICE_API CLMLanguageCode GetCLMLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForCLMLanguageCode(CLMLanguageCode value);
} // namespace CLMLanguageCodeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
