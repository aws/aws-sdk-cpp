/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaStore
{
namespace Model
{
  enum class MethodName
  {
    NOT_SET,
    PUT,
    GET_,
    DELETE_,
    HEAD
  };

namespace MethodNameMapper
{
AWS_MEDIASTORE_API MethodName GetMethodNameForName(const Aws::String& name);

AWS_MEDIASTORE_API Aws::String GetNameForMethodName(MethodName value);
} // namespace MethodNameMapper
} // namespace Model
} // namespace MediaStore
} // namespace Aws
