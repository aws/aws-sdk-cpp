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
  enum class HttpScheme
  {
    NOT_SET,
    http,
    https
  };

namespace HttpSchemeMapper
{
AWS_APPMESH_API HttpScheme GetHttpSchemeForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForHttpScheme(HttpScheme value);
} // namespace HttpSchemeMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
