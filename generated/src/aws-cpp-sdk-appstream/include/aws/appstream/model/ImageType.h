/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppStream {
namespace Model {
enum class ImageType { NOT_SET, CUSTOM, NATIVE };

namespace ImageTypeMapper {
AWS_APPSTREAM_API ImageType GetImageTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForImageType(ImageType value);
}  // namespace ImageTypeMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
