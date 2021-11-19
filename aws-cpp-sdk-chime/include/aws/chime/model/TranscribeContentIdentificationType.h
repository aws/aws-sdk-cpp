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
  enum class TranscribeContentIdentificationType
  {
    NOT_SET,
    PII
  };

namespace TranscribeContentIdentificationTypeMapper
{
AWS_CHIME_API TranscribeContentIdentificationType GetTranscribeContentIdentificationTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribeContentIdentificationType(TranscribeContentIdentificationType value);
} // namespace TranscribeContentIdentificationTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
