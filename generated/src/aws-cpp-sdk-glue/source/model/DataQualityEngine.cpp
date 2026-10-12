/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/DataQualityEngine.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace DataQualityEngineMapper {

static const int SPARK_HASH = HashingUtils::HashString("SPARK");
static const int PYTHON_HASH = HashingUtils::HashString("PYTHON");

DataQualityEngine GetDataQualityEngineForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SPARK_HASH) {
    return DataQualityEngine::SPARK;
  } else if (hashCode == PYTHON_HASH) {
    return DataQualityEngine::PYTHON;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataQualityEngine>(hashCode);
  }

  return DataQualityEngine::NOT_SET;
}

Aws::String GetNameForDataQualityEngine(DataQualityEngine enumValue) {
  switch (enumValue) {
    case DataQualityEngine::NOT_SET:
      return {};
    case DataQualityEngine::SPARK:
      return "SPARK";
    case DataQualityEngine::PYTHON:
      return "PYTHON";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataQualityEngineMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
