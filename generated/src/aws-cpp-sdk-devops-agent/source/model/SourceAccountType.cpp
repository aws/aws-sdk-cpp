/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/SourceAccountType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace SourceAccountTypeMapper {

static const int source_HASH = HashingUtils::HashString("source");

SourceAccountType GetSourceAccountTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == source_HASH) {
    return SourceAccountType::source;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceAccountType>(hashCode);
  }

  return SourceAccountType::NOT_SET;
}

Aws::String GetNameForSourceAccountType(SourceAccountType enumValue) {
  switch (enumValue) {
    case SourceAccountType::NOT_SET:
      return {};
    case SourceAccountType::source:
      return "source";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceAccountTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
