/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class KeyType
  {
    NOT_SET,
    speke,
    static_key
  };

namespace KeyTypeMapper
{
AWS_MEDIACONNECT_API KeyType GetKeyTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForKeyType(KeyType value);
} // namespace KeyTypeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
