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
enum class ImageBuilderAttribute { NOT_SET, AGENT_ACCESS_CONFIG };

namespace ImageBuilderAttributeMapper {
AWS_APPSTREAM_API ImageBuilderAttribute GetImageBuilderAttributeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForImageBuilderAttribute(ImageBuilderAttribute value);
}  // namespace ImageBuilderAttributeMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
