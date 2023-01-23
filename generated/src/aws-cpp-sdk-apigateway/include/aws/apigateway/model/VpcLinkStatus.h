/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class VpcLinkStatus
  {
    NOT_SET,
    AVAILABLE,
    PENDING,
    DELETING,
    FAILED
  };

namespace VpcLinkStatusMapper
{
AWS_APIGATEWAY_API VpcLinkStatus GetVpcLinkStatusForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForVpcLinkStatus(VpcLinkStatus value);
} // namespace VpcLinkStatusMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
