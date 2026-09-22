/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/QueryLanguage.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace QueryLanguageMapper {

static const int SQL_HASH = HashingUtils::HashString("SQL");
static const int PROMQL_HASH = HashingUtils::HashString("PROMQL");

QueryLanguage GetQueryLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SQL_HASH) {
    return QueryLanguage::SQL;
  } else if (hashCode == PROMQL_HASH) {
    return QueryLanguage::PROMQL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QueryLanguage>(hashCode);
  }

  return QueryLanguage::NOT_SET;
}

Aws::String GetNameForQueryLanguage(QueryLanguage enumValue) {
  switch (enumValue) {
    case QueryLanguage::NOT_SET:
      return {};
    case QueryLanguage::SQL:
      return "SQL";
    case QueryLanguage::PROMQL:
      return "PROMQL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QueryLanguageMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
