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
enum class ContentDisposition { NOT_SET, INLINE, ATTACHMENT };

namespace ContentDispositionMapper {
AWS_CONNECT_API ContentDisposition GetContentDispositionForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContentDisposition(ContentDisposition value);
}  // namespace ContentDispositionMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
