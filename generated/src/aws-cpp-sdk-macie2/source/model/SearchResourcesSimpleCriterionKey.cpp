﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/macie2/model/SearchResourcesSimpleCriterionKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace Macie2 {
namespace Model {
namespace SearchResourcesSimpleCriterionKeyMapper {

static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
static const int S3_BUCKET_NAME_HASH = HashingUtils::HashString("S3_BUCKET_NAME");
static const int S3_BUCKET_EFFECTIVE_PERMISSION_HASH = HashingUtils::HashString("S3_BUCKET_EFFECTIVE_PERMISSION");
static const int S3_BUCKET_SHARED_ACCESS_HASH = HashingUtils::HashString("S3_BUCKET_SHARED_ACCESS");
static const int AUTOMATED_DISCOVERY_MONITORING_STATUS_HASH = HashingUtils::HashString("AUTOMATED_DISCOVERY_MONITORING_STATUS");

SearchResourcesSimpleCriterionKey GetSearchResourcesSimpleCriterionKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_ID_HASH) {
    return SearchResourcesSimpleCriterionKey::ACCOUNT_ID;
  } else if (hashCode == S3_BUCKET_NAME_HASH) {
    return SearchResourcesSimpleCriterionKey::S3_BUCKET_NAME;
  } else if (hashCode == S3_BUCKET_EFFECTIVE_PERMISSION_HASH) {
    return SearchResourcesSimpleCriterionKey::S3_BUCKET_EFFECTIVE_PERMISSION;
  } else if (hashCode == S3_BUCKET_SHARED_ACCESS_HASH) {
    return SearchResourcesSimpleCriterionKey::S3_BUCKET_SHARED_ACCESS;
  } else if (hashCode == AUTOMATED_DISCOVERY_MONITORING_STATUS_HASH) {
    return SearchResourcesSimpleCriterionKey::AUTOMATED_DISCOVERY_MONITORING_STATUS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchResourcesSimpleCriterionKey>(hashCode);
  }

  return SearchResourcesSimpleCriterionKey::NOT_SET;
}

Aws::String GetNameForSearchResourcesSimpleCriterionKey(SearchResourcesSimpleCriterionKey enumValue) {
  switch (enumValue) {
    case SearchResourcesSimpleCriterionKey::NOT_SET:
      return {};
    case SearchResourcesSimpleCriterionKey::ACCOUNT_ID:
      return "ACCOUNT_ID";
    case SearchResourcesSimpleCriterionKey::S3_BUCKET_NAME:
      return "S3_BUCKET_NAME";
    case SearchResourcesSimpleCriterionKey::S3_BUCKET_EFFECTIVE_PERMISSION:
      return "S3_BUCKET_EFFECTIVE_PERMISSION";
    case SearchResourcesSimpleCriterionKey::S3_BUCKET_SHARED_ACCESS:
      return "S3_BUCKET_SHARED_ACCESS";
    case SearchResourcesSimpleCriterionKey::AUTOMATED_DISCOVERY_MONITORING_STATUS:
      return "AUTOMATED_DISCOVERY_MONITORING_STATUS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchResourcesSimpleCriterionKeyMapper
}  // namespace Model
}  // namespace Macie2
}  // namespace Aws
