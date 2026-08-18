/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/DocumentAclMemberRelation.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace DocumentAclMemberRelationMapper {

static const int AND_HASH = HashingUtils::HashString("AND");
static const int OR_HASH = HashingUtils::HashString("OR");

DocumentAclMemberRelation GetDocumentAclMemberRelationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AND_HASH) {
    return DocumentAclMemberRelation::AND;
  } else if (hashCode == OR_HASH) {
    return DocumentAclMemberRelation::OR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DocumentAclMemberRelation>(hashCode);
  }

  return DocumentAclMemberRelation::NOT_SET;
}

Aws::String GetNameForDocumentAclMemberRelation(DocumentAclMemberRelation enumValue) {
  switch (enumValue) {
    case DocumentAclMemberRelation::NOT_SET:
      return {};
    case DocumentAclMemberRelation::AND:
      return "AND";
    case DocumentAclMemberRelation::OR:
      return "OR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DocumentAclMemberRelationMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
