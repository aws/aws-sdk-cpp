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
  enum class PortProtocol
  {
    NOT_SET,
    grpc,
    http,
    http2,
    tcp
  };

namespace PortProtocolMapper
{
AWS_APPMESH_API PortProtocol GetPortProtocolForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForPortProtocol(PortProtocol value);
} // namespace PortProtocolMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
