/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/DocumentOutputFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace DocumentOutputFormatMapper {

static const int RAW_HASH = HashingUtils::HashString("RAW");
static const int EXTRACTED_HASH = HashingUtils::HashString("EXTRACTED");

DocumentOutputFormat GetDocumentOutputFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RAW_HASH) {
    return DocumentOutputFormat::RAW;
  } else if (hashCode == EXTRACTED_HASH) {
    return DocumentOutputFormat::EXTRACTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DocumentOutputFormat>(hashCode);
  }

  return DocumentOutputFormat::NOT_SET;
}

Aws::String GetNameForDocumentOutputFormat(DocumentOutputFormat enumValue) {
  switch (enumValue) {
    case DocumentOutputFormat::NOT_SET:
      return {};
    case DocumentOutputFormat::RAW:
      return "RAW";
    case DocumentOutputFormat::EXTRACTED:
      return "EXTRACTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DocumentOutputFormatMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
