/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class TranscribeMedicalLanguageCode
  {
    NOT_SET,
    en_US
  };

namespace TranscribeMedicalLanguageCodeMapper
{
AWS_CHIME_API TranscribeMedicalLanguageCode GetTranscribeMedicalLanguageCodeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribeMedicalLanguageCode(TranscribeMedicalLanguageCode value);
} // namespace TranscribeMedicalLanguageCodeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
