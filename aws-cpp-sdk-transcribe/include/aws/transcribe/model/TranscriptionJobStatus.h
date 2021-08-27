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
  enum class TranscriptionJobStatus
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    FAILED,
    COMPLETED
  };

namespace TranscriptionJobStatusMapper
{
AWS_TRANSCRIBESERVICE_API TranscriptionJobStatus GetTranscriptionJobStatusForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForTranscriptionJobStatus(TranscriptionJobStatus value);
} // namespace TranscriptionJobStatusMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
