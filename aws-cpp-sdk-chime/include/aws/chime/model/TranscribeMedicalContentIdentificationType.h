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
  enum class TranscribeMedicalContentIdentificationType
  {
    NOT_SET,
    PHI
  };

namespace TranscribeMedicalContentIdentificationTypeMapper
{
AWS_CHIME_API TranscribeMedicalContentIdentificationType GetTranscribeMedicalContentIdentificationTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribeMedicalContentIdentificationType(TranscribeMedicalContentIdentificationType value);
} // namespace TranscribeMedicalContentIdentificationTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
