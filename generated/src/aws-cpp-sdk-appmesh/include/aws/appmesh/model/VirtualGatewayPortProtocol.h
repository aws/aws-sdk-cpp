/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppMesh
{
namespace Model
{
  enum class VirtualGatewayPortProtocol
  {
    NOT_SET,
    http,
    http2,
    grpc
  };

namespace VirtualGatewayPortProtocolMapper
{
AWS_APPMESH_API VirtualGatewayPortProtocol GetVirtualGatewayPortProtocolForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForVirtualGatewayPortProtocol(VirtualGatewayPortProtocol value);
} // namespace VirtualGatewayPortProtocolMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
