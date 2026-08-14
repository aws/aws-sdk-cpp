/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/DocumentAclMembershipType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace DocumentAclMembershipTypeMapper {

static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");
static const int DATA_SOURCE_HASH = HashingUtils::HashString("DATA_SOURCE");

DocumentAclMembershipType GetDocumentAclMembershipTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KNOWLEDGE_BASE_HASH) {
    return DocumentAclMembershipType::KNOWLEDGE_BASE;
  } else if (hashCode == DATA_SOURCE_HASH) {
    return DocumentAclMembershipType::DATA_SOURCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DocumentAclMembershipType>(hashCode);
  }

  return DocumentAclMembershipType::NOT_SET;
}

Aws::String GetNameForDocumentAclMembershipType(DocumentAclMembershipType enumValue) {
  switch (enumValue) {
    case DocumentAclMembershipType::NOT_SET:
      return {};
    case DocumentAclMembershipType::KNOWLEDGE_BASE:
      return "KNOWLEDGE_BASE";
    case DocumentAclMembershipType::DATA_SOURCE:
      return "DATA_SOURCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DocumentAclMembershipTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
