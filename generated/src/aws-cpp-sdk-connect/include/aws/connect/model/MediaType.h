/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class MediaType {
  NOT_SET,
  IMAGE_LOGO_LIGHT_FAVICON,
  IMAGE_LOGO_DARK_FAVICON,
  IMAGE_LOGO_LIGHT_HORIZONTAL,
  IMAGE_LOGO_DARK_HORIZONTAL
};

namespace MediaTypeMapper {
AWS_CONNECT_API MediaType GetMediaTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMediaType(MediaType value);
}  // namespace MediaTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
