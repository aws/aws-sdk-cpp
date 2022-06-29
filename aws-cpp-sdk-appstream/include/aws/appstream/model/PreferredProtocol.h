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
  enum class PreferredProtocol
  {
    NOT_SET,
    TCP,
    UDP
  };

namespace PreferredProtocolMapper
{
AWS_APPSTREAM_API PreferredProtocol GetPreferredProtocolForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForPreferredProtocol(PreferredProtocol value);
} // namespace PreferredProtocolMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
