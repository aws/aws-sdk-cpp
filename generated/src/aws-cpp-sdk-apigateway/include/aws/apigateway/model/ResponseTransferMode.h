/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIGateway {
namespace Model {
enum class ResponseTransferMode { NOT_SET, BUFFERED, STREAM };

namespace ResponseTransferModeMapper {
AWS_APIGATEWAY_API ResponseTransferMode GetResponseTransferModeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForResponseTransferMode(ResponseTransferMode value);
}  // namespace ResponseTransferModeMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
