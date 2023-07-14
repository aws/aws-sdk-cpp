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
  enum class ContentIdentificationType
  {
    NOT_SET,
    PII
  };

namespace ContentIdentificationTypeMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API ContentIdentificationType GetContentIdentificationTypeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForContentIdentificationType(ContentIdentificationType value);
} // namespace ContentIdentificationTypeMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
