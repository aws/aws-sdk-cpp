/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/LibraryIngestionJobOperationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace LibraryIngestionJobOperationTypeMapper {

static const int UPSERT_HASH = HashingUtils::HashString("UPSERT");
static const int DELETE__HASH = HashingUtils::HashString("DELETE");

LibraryIngestionJobOperationType GetLibraryIngestionJobOperationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UPSERT_HASH) {
    return LibraryIngestionJobOperationType::UPSERT;
  } else if (hashCode == DELETE__HASH) {
    return LibraryIngestionJobOperationType::DELETE_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LibraryIngestionJobOperationType>(hashCode);
  }

  return LibraryIngestionJobOperationType::NOT_SET;
}

Aws::String GetNameForLibraryIngestionJobOperationType(LibraryIngestionJobOperationType enumValue) {
  switch (enumValue) {
    case LibraryIngestionJobOperationType::NOT_SET:
      return {};
    case LibraryIngestionJobOperationType::UPSERT:
      return "UPSERT";
    case LibraryIngestionJobOperationType::DELETE_:
      return "DELETE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LibraryIngestionJobOperationTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
