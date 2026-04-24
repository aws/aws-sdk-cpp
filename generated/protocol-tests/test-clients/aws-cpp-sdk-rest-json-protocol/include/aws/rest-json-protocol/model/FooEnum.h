/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
enum class FooEnum { NOT_SET, Foo, Baz, Bar, _1, _0 };

namespace FooEnumMapper {
AWS_RESTJSONPROTOCOL_API FooEnum GetFooEnumForName(const Aws::String& name);

AWS_RESTJSONPROTOCOL_API Aws::String GetNameForFooEnum(FooEnum value);
}  // namespace FooEnumMapper
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
