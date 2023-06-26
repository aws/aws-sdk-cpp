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
  enum class DnsResponseType
  {
    NOT_SET,
    LOADBALANCER,
    ENDPOINTS
  };

namespace DnsResponseTypeMapper
{
AWS_APPMESH_API DnsResponseType GetDnsResponseTypeForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForDnsResponseType(DnsResponseType value);
} // namespace DnsResponseTypeMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
