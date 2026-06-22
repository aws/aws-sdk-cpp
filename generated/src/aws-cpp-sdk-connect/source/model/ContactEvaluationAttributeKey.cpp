/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactEvaluationAttributeKey.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ContactEvaluationAttributeKeyMapper {

static const int ContactAgentId_HASH = HashingUtils::HashString("ContactAgentId");

ContactEvaluationAttributeKey GetContactEvaluationAttributeKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ContactAgentId_HASH) {
    return ContactEvaluationAttributeKey::ContactAgentId;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactEvaluationAttributeKey>(hashCode);
  }

  return ContactEvaluationAttributeKey::NOT_SET;
}

Aws::String GetNameForContactEvaluationAttributeKey(ContactEvaluationAttributeKey enumValue) {
  switch (enumValue) {
    case ContactEvaluationAttributeKey::NOT_SET:
      return {};
    case ContactEvaluationAttributeKey::ContactAgentId:
      return "ContactAgentId";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactEvaluationAttributeKeyMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
