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
  enum class ListenerTlsMode
  {
    NOT_SET,
    STRICT,
    PERMISSIVE,
    DISABLED
  };

namespace ListenerTlsModeMapper
{
AWS_APPMESH_API ListenerTlsMode GetListenerTlsModeForName(const Aws::String& name);

AWS_APPMESH_API Aws::String GetNameForListenerTlsMode(ListenerTlsMode value);
} // namespace ListenerTlsModeMapper
} // namespace Model
} // namespace AppMesh
} // namespace Aws
