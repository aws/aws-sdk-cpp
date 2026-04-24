/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

namespace Aws {
namespace JsonProtocol {
namespace Model {
enum class FooEnum { NOT_SET, Foo, Baz, Bar, _1, _0 };

namespace FooEnumMapper {
AWS_JSONPROTOCOL_API FooEnum GetFooEnumForName(const Aws::String& name);

AWS_JSONPROTOCOL_API Aws::String GetNameForFooEnum(FooEnum value);
}  // namespace FooEnumMapper
}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
