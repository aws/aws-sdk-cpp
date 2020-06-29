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
  enum class H264GopBReference
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264GopBReferenceMapper
{
AWS_MEDIALIVE_API H264GopBReference GetH264GopBReferenceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264GopBReference(H264GopBReference value);
} // namespace H264GopBReferenceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
