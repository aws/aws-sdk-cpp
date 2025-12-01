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
enum class ResponseMode { NOT_SET, INCREMENTAL, COMPLETE };

namespace ResponseModeMapper {
AWS_CONNECT_API ResponseMode GetResponseModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForResponseMode(ResponseMode value);
}  // namespace ResponseModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
