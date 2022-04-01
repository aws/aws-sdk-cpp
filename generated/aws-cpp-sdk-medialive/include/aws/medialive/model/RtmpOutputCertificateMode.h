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
  enum class RtmpOutputCertificateMode
  {
    NOT_SET,
    SELF_SIGNED,
    VERIFY_AUTHENTICITY
  };

namespace RtmpOutputCertificateModeMapper
{
AWS_MEDIALIVE_API RtmpOutputCertificateMode GetRtmpOutputCertificateModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForRtmpOutputCertificateMode(RtmpOutputCertificateMode value);
} // namespace RtmpOutputCertificateModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
