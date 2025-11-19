/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/ResponseTransferMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {
namespace ResponseTransferModeMapper {

static const int BUFFERED_HASH = HashingUtils::HashString("BUFFERED");
static const int STREAM_HASH = HashingUtils::HashString("STREAM");

ResponseTransferMode GetResponseTransferModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BUFFERED_HASH) {
    return ResponseTransferMode::BUFFERED;
  } else if (hashCode == STREAM_HASH) {
    return ResponseTransferMode::STREAM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResponseTransferMode>(hashCode);
  }

  return ResponseTransferMode::NOT_SET;
}

Aws::String GetNameForResponseTransferMode(ResponseTransferMode enumValue) {
  switch (enumValue) {
    case ResponseTransferMode::NOT_SET:
      return {};
    case ResponseTransferMode::BUFFERED:
      return "BUFFERED";
    case ResponseTransferMode::STREAM:
      return "STREAM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResponseTransferModeMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
