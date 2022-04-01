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
  enum class ContentType
  {
    NOT_SET,
    image_jpeg
  };

namespace ContentTypeMapper
{
AWS_MEDIALIVE_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForContentType(ContentType value);
} // namespace ContentTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
