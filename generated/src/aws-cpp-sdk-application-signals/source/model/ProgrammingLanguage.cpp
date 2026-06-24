/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ProgrammingLanguage.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace ProgrammingLanguageMapper {

static const int Java_HASH = HashingUtils::HashString("Java");
static const int Python_HASH = HashingUtils::HashString("Python");
static const int Javascript_HASH = HashingUtils::HashString("Javascript");

ProgrammingLanguage GetProgrammingLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Java_HASH) {
    return ProgrammingLanguage::Java;
  } else if (hashCode == Python_HASH) {
    return ProgrammingLanguage::Python;
  } else if (hashCode == Javascript_HASH) {
    return ProgrammingLanguage::Javascript;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProgrammingLanguage>(hashCode);
  }

  return ProgrammingLanguage::NOT_SET;
}

Aws::String GetNameForProgrammingLanguage(ProgrammingLanguage enumValue) {
  switch (enumValue) {
    case ProgrammingLanguage::NOT_SET:
      return {};
    case ProgrammingLanguage::Java:
      return "Java";
    case ProgrammingLanguage::Python:
      return "Python";
    case ProgrammingLanguage::Javascript:
      return "Javascript";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProgrammingLanguageMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
