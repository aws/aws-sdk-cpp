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
  enum class HttpMethod
  {
    NOT_SET,
    GET_,
    HEAD,
    POST,
    PUT,
    DELETE_,
    CONNECT,
    OPTIONS,
    TRACE,
    PATCH
  };

namespace HttpMethodMapper
{
AWS_APPMESH_API HttpMethod GetHttpMethodForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForHttpMethod(HttpMethod value);
} // namespace HttpMethodMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
