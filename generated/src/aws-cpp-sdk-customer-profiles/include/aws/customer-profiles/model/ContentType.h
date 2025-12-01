/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class ContentType { NOT_SET, STRING, NUMBER };

namespace ContentTypeMapper {
AWS_CUSTOMERPROFILES_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForContentType(ContentType value);
}  // namespace ContentTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
