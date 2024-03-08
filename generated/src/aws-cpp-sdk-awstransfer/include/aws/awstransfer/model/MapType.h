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
  enum class MapType
  {
    NOT_SET,
    FILE,
    DIRECTORY
  };

namespace MapTypeMapper
{
AWS_TRANSFER_API MapType GetMapTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForMapType(MapType value);
} // namespace MapTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
