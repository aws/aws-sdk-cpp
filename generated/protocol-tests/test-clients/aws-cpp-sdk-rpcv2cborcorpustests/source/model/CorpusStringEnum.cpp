/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rpcv2cborcorpustests/model/CorpusStringEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace RpcV2CborCorpusTests {
namespace Model {
namespace CorpusStringEnumMapper {

static const int Foo_HASH = HashingUtils::HashString("Foo");
static const int Bar_HASH = HashingUtils::HashString("Bar");
static const int Baz_HASH = HashingUtils::HashString("Baz");

CorpusStringEnum GetCorpusStringEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Foo_HASH) {
    return CorpusStringEnum::Foo;
  } else if (hashCode == Bar_HASH) {
    return CorpusStringEnum::Bar;
  } else if (hashCode == Baz_HASH) {
    return CorpusStringEnum::Baz;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CorpusStringEnum>(hashCode);
  }

  return CorpusStringEnum::NOT_SET;
}

Aws::String GetNameForCorpusStringEnum(CorpusStringEnum enumValue) {
  switch (enumValue) {
    case CorpusStringEnum::NOT_SET:
      return {};
    case CorpusStringEnum::Foo:
      return "Foo";
    case CorpusStringEnum::Bar:
      return "Bar";
    case CorpusStringEnum::Baz:
      return "Baz";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CorpusStringEnumMapper
}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
