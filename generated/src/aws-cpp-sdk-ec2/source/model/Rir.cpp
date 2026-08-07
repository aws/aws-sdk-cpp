/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/Rir.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace RirMapper {

static const int ripe_HASH = HashingUtils::HashString("ripe");
static const int apnic_HASH = HashingUtils::HashString("apnic");
static const int arin_HASH = HashingUtils::HashString("arin");
static const int lacnic_HASH = HashingUtils::HashString("lacnic");

Rir GetRirForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ripe_HASH) {
    return Rir::ripe;
  } else if (hashCode == apnic_HASH) {
    return Rir::apnic;
  } else if (hashCode == arin_HASH) {
    return Rir::arin;
  } else if (hashCode == lacnic_HASH) {
    return Rir::lacnic;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Rir>(hashCode);
  }

  return Rir::NOT_SET;
}

Aws::String GetNameForRir(Rir enumValue) {
  switch (enumValue) {
    case Rir::NOT_SET:
      return {};
    case Rir::ripe:
      return "ripe";
    case Rir::apnic:
      return "apnic";
    case Rir::arin:
      return "arin";
    case Rir::lacnic:
      return "lacnic";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RirMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
