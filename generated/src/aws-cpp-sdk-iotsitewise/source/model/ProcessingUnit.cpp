/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/ProcessingUnit.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace ProcessingUnitMapper {

static const int UNITS_2_HASH = HashingUtils::HashString("UNITS_2");
static const int UNITS_4_HASH = HashingUtils::HashString("UNITS_4");
static const int UNITS_8_HASH = HashingUtils::HashString("UNITS_8");
static const int UNITS_12_HASH = HashingUtils::HashString("UNITS_12");
static const int UNITS_16_HASH = HashingUtils::HashString("UNITS_16");
static const int UNITS_24_HASH = HashingUtils::HashString("UNITS_24");
static const int UNITS_32_HASH = HashingUtils::HashString("UNITS_32");
static const int UNITS_36_HASH = HashingUtils::HashString("UNITS_36");
static const int UNITS_48_HASH = HashingUtils::HashString("UNITS_48");
static const int UNITS_60_HASH = HashingUtils::HashString("UNITS_60");
static const int UNITS_64_HASH = HashingUtils::HashString("UNITS_64");
static const int UNITS_72_HASH = HashingUtils::HashString("UNITS_72");
static const int UNITS_84_HASH = HashingUtils::HashString("UNITS_84");
static const int UNITS_96_HASH = HashingUtils::HashString("UNITS_96");

ProcessingUnit GetProcessingUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNITS_2_HASH) {
    return ProcessingUnit::UNITS_2;
  } else if (hashCode == UNITS_4_HASH) {
    return ProcessingUnit::UNITS_4;
  } else if (hashCode == UNITS_8_HASH) {
    return ProcessingUnit::UNITS_8;
  } else if (hashCode == UNITS_12_HASH) {
    return ProcessingUnit::UNITS_12;
  } else if (hashCode == UNITS_16_HASH) {
    return ProcessingUnit::UNITS_16;
  } else if (hashCode == UNITS_24_HASH) {
    return ProcessingUnit::UNITS_24;
  } else if (hashCode == UNITS_32_HASH) {
    return ProcessingUnit::UNITS_32;
  } else if (hashCode == UNITS_36_HASH) {
    return ProcessingUnit::UNITS_36;
  } else if (hashCode == UNITS_48_HASH) {
    return ProcessingUnit::UNITS_48;
  } else if (hashCode == UNITS_60_HASH) {
    return ProcessingUnit::UNITS_60;
  } else if (hashCode == UNITS_64_HASH) {
    return ProcessingUnit::UNITS_64;
  } else if (hashCode == UNITS_72_HASH) {
    return ProcessingUnit::UNITS_72;
  } else if (hashCode == UNITS_84_HASH) {
    return ProcessingUnit::UNITS_84;
  } else if (hashCode == UNITS_96_HASH) {
    return ProcessingUnit::UNITS_96;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProcessingUnit>(hashCode);
  }

  return ProcessingUnit::NOT_SET;
}

Aws::String GetNameForProcessingUnit(ProcessingUnit enumValue) {
  switch (enumValue) {
    case ProcessingUnit::NOT_SET:
      return {};
    case ProcessingUnit::UNITS_2:
      return "UNITS_2";
    case ProcessingUnit::UNITS_4:
      return "UNITS_4";
    case ProcessingUnit::UNITS_8:
      return "UNITS_8";
    case ProcessingUnit::UNITS_12:
      return "UNITS_12";
    case ProcessingUnit::UNITS_16:
      return "UNITS_16";
    case ProcessingUnit::UNITS_24:
      return "UNITS_24";
    case ProcessingUnit::UNITS_32:
      return "UNITS_32";
    case ProcessingUnit::UNITS_36:
      return "UNITS_36";
    case ProcessingUnit::UNITS_48:
      return "UNITS_48";
    case ProcessingUnit::UNITS_60:
      return "UNITS_60";
    case ProcessingUnit::UNITS_64:
      return "UNITS_64";
    case ProcessingUnit::UNITS_72:
      return "UNITS_72";
    case ProcessingUnit::UNITS_84:
      return "UNITS_84";
    case ProcessingUnit::UNITS_96:
      return "UNITS_96";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProcessingUnitMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
