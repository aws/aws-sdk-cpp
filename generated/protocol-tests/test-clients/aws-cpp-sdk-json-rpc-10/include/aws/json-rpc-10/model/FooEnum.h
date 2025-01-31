/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace JSONRPC10
{
namespace Model
{
  enum class FooEnum
  {
    NOT_SET,
    Foo,
    Baz,
    Bar,
    _1,
    _0
  };

namespace FooEnumMapper
{
AWS_JSONRPC10_API FooEnum GetFooEnumForName(const Aws::String& name);

AWS_JSONRPC10_API Aws::String GetNameForFooEnum(FooEnum value);
} // namespace FooEnumMapper
} // namespace Model
} // namespace JSONRPC10
} // namespace Aws
