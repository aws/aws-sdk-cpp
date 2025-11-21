/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {
enum class PreviewStatus { NOT_SET, PREVIEW_IN_PROGRESS, PREVIEW_FAILED, PREVIEW_READY };

namespace PreviewStatusMapper {
AWS_APIGATEWAYV2_API PreviewStatus GetPreviewStatusForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForPreviewStatus(PreviewStatus value);
}  // namespace PreviewStatusMapper
}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
