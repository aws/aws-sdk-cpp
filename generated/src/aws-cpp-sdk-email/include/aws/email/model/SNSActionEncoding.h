/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/SES_EXPORTS.h>

namespace Aws {
namespace SES {
namespace Model {
enum class SNSActionEncoding { NOT_SET, UTF_8, Base64 };

namespace SNSActionEncodingMapper {
AWS_SES_API SNSActionEncoding GetSNSActionEncodingForName(const Aws::String& name);

AWS_SES_API Aws::String GetNameForSNSActionEncoding(SNSActionEncoding value);
}  // namespace SNSActionEncodingMapper
}  // namespace Model
}  // namespace SES
}  // namespace Aws
