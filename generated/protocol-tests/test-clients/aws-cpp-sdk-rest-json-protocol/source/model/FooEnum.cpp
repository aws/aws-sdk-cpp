/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rest-json-protocol/model/FooEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
namespace FooEnumMapper {

static const int Foo_HASH = HashingUtils::HashString("Foo");
static const int Baz_HASH = HashingUtils::HashString("Baz");
static const int Bar_HASH = HashingUtils::HashString("Bar");
static const int _1_HASH = HashingUtils::HashString("1");
static const int _0_HASH = HashingUtils::HashString("0");

FooEnum GetFooEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Foo_HASH) {
    return FooEnum::Foo;
  } else if (hashCode == Baz_HASH) {
    return FooEnum::Baz;
  } else if (hashCode == Bar_HASH) {
    return FooEnum::Bar;
  } else if (hashCode == _1_HASH) {
    return FooEnum::_1;
  } else if (hashCode == _0_HASH) {
    return FooEnum::_0;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FooEnum>(hashCode);
  }

  return FooEnum::NOT_SET;
}

Aws::String GetNameForFooEnum(FooEnum enumValue) {
  switch (enumValue) {
    case FooEnum::NOT_SET:
      return {};
    case FooEnum::Foo:
      return "Foo";
    case FooEnum::Baz:
      return "Baz";
    case FooEnum::Bar:
      return "Bar";
    case FooEnum::_1:
      return "1";
    case FooEnum::_0:
      return "0";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FooEnumMapper
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
