/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class ContentType { NOT_SET, APPLICATION_JSON, URL_ENCODED };

namespace ContentTypeMapper {
AWS_GLUE_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForContentType(ContentType value);
}  // namespace ContentTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
