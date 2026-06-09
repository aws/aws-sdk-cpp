/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/DictionaryStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace DictionaryStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int REFERENCED_HASH = HashingUtils::HashString("REFERENCED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

DictionaryStatus GetDictionaryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return DictionaryStatus::CREATING;
  } else if (hashCode == AVAILABLE_HASH) {
    return DictionaryStatus::AVAILABLE;
  } else if (hashCode == REFERENCED_HASH) {
    return DictionaryStatus::REFERENCED;
  } else if (hashCode == DELETING_HASH) {
    return DictionaryStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return DictionaryStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DictionaryStatus>(hashCode);
  }

  return DictionaryStatus::NOT_SET;
}

Aws::String GetNameForDictionaryStatus(DictionaryStatus enumValue) {
  switch (enumValue) {
    case DictionaryStatus::NOT_SET:
      return {};
    case DictionaryStatus::CREATING:
      return "CREATING";
    case DictionaryStatus::AVAILABLE:
      return "AVAILABLE";
    case DictionaryStatus::REFERENCED:
      return "REFERENCED";
    case DictionaryStatus::DELETING:
      return "DELETING";
    case DictionaryStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DictionaryStatusMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
