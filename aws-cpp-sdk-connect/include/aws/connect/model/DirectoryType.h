/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class DirectoryType
  {
    NOT_SET,
    SAML,
    CONNECT_MANAGED,
    EXISTING_DIRECTORY
  };

namespace DirectoryTypeMapper
{
AWS_CONNECT_API DirectoryType GetDirectoryTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForDirectoryType(DirectoryType value);
} // namespace DirectoryTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
