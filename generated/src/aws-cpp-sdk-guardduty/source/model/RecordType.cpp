/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/RecordType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace RecordTypeMapper {

static const int OBSERVATION_HASH = HashingUtils::HashString("OBSERVATION");
static const int ANALYSIS_HASH = HashingUtils::HashString("ANALYSIS");
static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
static const int FETCH_HASH = HashingUtils::HashString("FETCH");
static const int METADATA_HASH = HashingUtils::HashString("METADATA");

RecordType GetRecordTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OBSERVATION_HASH) {
    return RecordType::OBSERVATION;
  } else if (hashCode == ANALYSIS_HASH) {
    return RecordType::ANALYSIS;
  } else if (hashCode == UPDATE_HASH) {
    return RecordType::UPDATE;
  } else if (hashCode == FETCH_HASH) {
    return RecordType::FETCH;
  } else if (hashCode == METADATA_HASH) {
    return RecordType::METADATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecordType>(hashCode);
  }

  return RecordType::NOT_SET;
}

Aws::String GetNameForRecordType(RecordType enumValue) {
  switch (enumValue) {
    case RecordType::NOT_SET:
      return {};
    case RecordType::OBSERVATION:
      return "OBSERVATION";
    case RecordType::ANALYSIS:
      return "ANALYSIS";
    case RecordType::UPDATE:
      return "UPDATE";
    case RecordType::FETCH:
      return "FETCH";
    case RecordType::METADATA:
      return "METADATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecordTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
