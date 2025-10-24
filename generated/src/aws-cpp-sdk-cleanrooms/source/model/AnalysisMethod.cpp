﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisMethod.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace AnalysisMethodMapper {

static const int DIRECT_QUERY_HASH = HashingUtils::HashString("DIRECT_QUERY");
static const int DIRECT_JOB_HASH = HashingUtils::HashString("DIRECT_JOB");
static const int MULTIPLE_HASH = HashingUtils::HashString("MULTIPLE");

AnalysisMethod GetAnalysisMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DIRECT_QUERY_HASH) {
    return AnalysisMethod::DIRECT_QUERY;
  } else if (hashCode == DIRECT_JOB_HASH) {
    return AnalysisMethod::DIRECT_JOB;
  } else if (hashCode == MULTIPLE_HASH) {
    return AnalysisMethod::MULTIPLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalysisMethod>(hashCode);
  }

  return AnalysisMethod::NOT_SET;
}

Aws::String GetNameForAnalysisMethod(AnalysisMethod enumValue) {
  switch (enumValue) {
    case AnalysisMethod::NOT_SET:
      return {};
    case AnalysisMethod::DIRECT_QUERY:
      return "DIRECT_QUERY";
    case AnalysisMethod::DIRECT_JOB:
      return "DIRECT_JOB";
    case AnalysisMethod::MULTIPLE:
      return "MULTIPLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalysisMethodMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
