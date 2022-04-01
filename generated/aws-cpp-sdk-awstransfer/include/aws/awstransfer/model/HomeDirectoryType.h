/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class HomeDirectoryType
  {
    NOT_SET,
    PATH,
    LOGICAL
  };

namespace HomeDirectoryTypeMapper
{
AWS_TRANSFER_API HomeDirectoryType GetHomeDirectoryTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForHomeDirectoryType(HomeDirectoryType value);
} // namespace HomeDirectoryTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
