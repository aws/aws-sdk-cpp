/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class AccessEndpointType
  {
    NOT_SET,
    STREAMING
  };

namespace AccessEndpointTypeMapper
{
AWS_APPSTREAM_API AccessEndpointType GetAccessEndpointTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAccessEndpointType(AccessEndpointType value);
} // namespace AccessEndpointTypeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
