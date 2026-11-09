/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dynamodb/model/BulkOperationInputFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace BulkOperationInputFormatMapper {

static const int DYNAMODB_JSON_HASH = HashingUtils::HashString("DYNAMODB_JSON");
static const int ION_HASH = HashingUtils::HashString("ION");

BulkOperationInputFormat GetBulkOperationInputFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DYNAMODB_JSON_HASH) {
    return BulkOperationInputFormat::DYNAMODB_JSON;
  } else if (hashCode == ION_HASH) {
    return BulkOperationInputFormat::ION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BulkOperationInputFormat>(hashCode);
  }

  return BulkOperationInputFormat::NOT_SET;
}

Aws::String GetNameForBulkOperationInputFormat(BulkOperationInputFormat enumValue) {
  switch (enumValue) {
    case BulkOperationInputFormat::NOT_SET:
      return {};
    case BulkOperationInputFormat::DYNAMODB_JSON:
      return "DYNAMODB_JSON";
    case BulkOperationInputFormat::ION:
      return "ION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BulkOperationInputFormatMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
