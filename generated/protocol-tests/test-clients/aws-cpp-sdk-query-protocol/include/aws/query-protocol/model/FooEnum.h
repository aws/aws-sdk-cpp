/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>

namespace Aws {
namespace QueryProtocol {
namespace Model {
enum class FooEnum { NOT_SET, Foo, Baz, Bar, _1, _0 };

namespace FooEnumMapper {
AWS_QUERYPROTOCOL_API FooEnum GetFooEnumForName(const Aws::String& name);

AWS_QUERYPROTOCOL_API Aws::String GetNameForFooEnum(FooEnum value);
}  // namespace FooEnumMapper
}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
