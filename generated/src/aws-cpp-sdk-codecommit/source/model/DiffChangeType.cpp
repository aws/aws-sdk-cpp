/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DiffChangeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CodeCommit {
namespace Model {
namespace DiffChangeTypeMapper {

static const int CONTEXT_HASH = HashingUtils::HashString("CONTEXT");
static const int ADD_HASH = HashingUtils::HashString("ADD");
static const int DELETE__HASH = HashingUtils::HashString("DELETE");

DiffChangeType GetDiffChangeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTEXT_HASH) {
    return DiffChangeType::CONTEXT;
  } else if (hashCode == ADD_HASH) {
    return DiffChangeType::ADD;
  } else if (hashCode == DELETE__HASH) {
    return DiffChangeType::DELETE_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiffChangeType>(hashCode);
  }

  return DiffChangeType::NOT_SET;
}

Aws::String GetNameForDiffChangeType(DiffChangeType enumValue) {
  switch (enumValue) {
    case DiffChangeType::NOT_SET:
      return {};
    case DiffChangeType::CONTEXT:
      return "CONTEXT";
    case DiffChangeType::ADD:
      return "ADD";
    case DiffChangeType::DELETE_:
      return "DELETE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiffChangeTypeMapper
}  // namespace Model
}  // namespace CodeCommit
}  // namespace Aws
