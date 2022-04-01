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
  enum class OutputLocationType
  {
    NOT_SET,
    CUSTOMER_BUCKET,
    SERVICE_BUCKET
  };

namespace OutputLocationTypeMapper
{
AWS_TRANSCRIBESERVICE_API OutputLocationType GetOutputLocationTypeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForOutputLocationType(OutputLocationType value);
} // namespace OutputLocationTypeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
