/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gameliftstreams/model/StreamClass.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {
namespace StreamClassMapper {

static const int gen4n_high_HASH = HashingUtils::HashString("gen4n_high");
static const int gen4n_ultra_HASH = HashingUtils::HashString("gen4n_ultra");
static const int gen4n_win2022_HASH = HashingUtils::HashString("gen4n_win2022");
static const int gen5n_high_HASH = HashingUtils::HashString("gen5n_high");
static const int gen5n_ultra_HASH = HashingUtils::HashString("gen5n_ultra");
static const int gen5n_win2022_HASH = HashingUtils::HashString("gen5n_win2022");
static const int gen6n_small_HASH = HashingUtils::HashString("gen6n_small");
static const int gen6n_medium_HASH = HashingUtils::HashString("gen6n_medium");
static const int gen6n_high_HASH = HashingUtils::HashString("gen6n_high");
static const int gen6n_ultra_HASH = HashingUtils::HashString("gen6n_ultra");
static const int gen6n_ultra_win2022_HASH = HashingUtils::HashString("gen6n_ultra_win2022");
static const int gen6n_pro_HASH = HashingUtils::HashString("gen6n_pro");
static const int gen6n_pro_win2022_HASH = HashingUtils::HashString("gen6n_pro_win2022");

StreamClass GetStreamClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == gen4n_high_HASH) {
    return StreamClass::gen4n_high;
  } else if (hashCode == gen4n_ultra_HASH) {
    return StreamClass::gen4n_ultra;
  } else if (hashCode == gen4n_win2022_HASH) {
    return StreamClass::gen4n_win2022;
  } else if (hashCode == gen5n_high_HASH) {
    return StreamClass::gen5n_high;
  } else if (hashCode == gen5n_ultra_HASH) {
    return StreamClass::gen5n_ultra;
  } else if (hashCode == gen5n_win2022_HASH) {
    return StreamClass::gen5n_win2022;
  } else if (hashCode == gen6n_small_HASH) {
    return StreamClass::gen6n_small;
  } else if (hashCode == gen6n_medium_HASH) {
    return StreamClass::gen6n_medium;
  } else if (hashCode == gen6n_high_HASH) {
    return StreamClass::gen6n_high;
  } else if (hashCode == gen6n_ultra_HASH) {
    return StreamClass::gen6n_ultra;
  } else if (hashCode == gen6n_ultra_win2022_HASH) {
    return StreamClass::gen6n_ultra_win2022;
  } else if (hashCode == gen6n_pro_HASH) {
    return StreamClass::gen6n_pro;
  } else if (hashCode == gen6n_pro_win2022_HASH) {
    return StreamClass::gen6n_pro_win2022;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamClass>(hashCode);
  }

  return StreamClass::NOT_SET;
}

Aws::String GetNameForStreamClass(StreamClass enumValue) {
  switch (enumValue) {
    case StreamClass::NOT_SET:
      return {};
    case StreamClass::gen4n_high:
      return "gen4n_high";
    case StreamClass::gen4n_ultra:
      return "gen4n_ultra";
    case StreamClass::gen4n_win2022:
      return "gen4n_win2022";
    case StreamClass::gen5n_high:
      return "gen5n_high";
    case StreamClass::gen5n_ultra:
      return "gen5n_ultra";
    case StreamClass::gen5n_win2022:
      return "gen5n_win2022";
    case StreamClass::gen6n_small:
      return "gen6n_small";
    case StreamClass::gen6n_medium:
      return "gen6n_medium";
    case StreamClass::gen6n_high:
      return "gen6n_high";
    case StreamClass::gen6n_ultra:
      return "gen6n_ultra";
    case StreamClass::gen6n_ultra_win2022:
      return "gen6n_ultra_win2022";
    case StreamClass::gen6n_pro:
      return "gen6n_pro";
    case StreamClass::gen6n_pro_win2022:
      return "gen6n_pro_win2022";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamClassMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
