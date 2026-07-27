/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/ObservationConfiguration.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace ObservationConfigurationMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int NONE_HASH = HashingUtils::HashString("NONE");

ObservationConfiguration GetObservationConfigurationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return ObservationConfiguration::ALL;
  } else if (hashCode == NONE_HASH) {
    return ObservationConfiguration::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ObservationConfiguration>(hashCode);
  }

  return ObservationConfiguration::NOT_SET;
}

Aws::String GetNameForObservationConfiguration(ObservationConfiguration enumValue) {
  switch (enumValue) {
    case ObservationConfiguration::NOT_SET:
      return {};
    case ObservationConfiguration::ALL:
      return "ALL";
    case ObservationConfiguration::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ObservationConfigurationMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
