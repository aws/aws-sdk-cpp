/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/DataSourceSport.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace DataSourceSportMapper {

static const int basketball_HASH = HashingUtils::HashString("basketball");
static const int american_football_HASH = HashingUtils::HashString("american-football");

DataSourceSport GetDataSourceSportForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == basketball_HASH) {
    return DataSourceSport::basketball;
  } else if (hashCode == american_football_HASH) {
    return DataSourceSport::american_football;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSourceSport>(hashCode);
  }

  return DataSourceSport::NOT_SET;
}

Aws::String GetNameForDataSourceSport(DataSourceSport enumValue) {
  switch (enumValue) {
    case DataSourceSport::NOT_SET:
      return {};
    case DataSourceSport::basketball:
      return "basketball";
    case DataSourceSport::american_football:
      return "american-football";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSourceSportMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
