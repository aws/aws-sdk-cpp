/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/InstrumentationErrorCause.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace InstrumentationErrorCauseMapper {

static const int FILE_NOT_FOUND_HASH = HashingUtils::HashString("FILE_NOT_FOUND");
static const int METHOD_NOT_FOUND_HASH = HashingUtils::HashString("METHOD_NOT_FOUND");
static const int LINE_NOT_EXECUTABLE_HASH = HashingUtils::HashString("LINE_NOT_EXECUTABLE");
static const int OVERLOADED_METHODS_HASH = HashingUtils::HashString("OVERLOADED_METHODS");
static const int LANGUAGE_MISMATCH_HASH = HashingUtils::HashString("LANGUAGE_MISMATCH");
static const int RUNTIME_ERROR_HASH = HashingUtils::HashString("RUNTIME_ERROR");

InstrumentationErrorCause GetInstrumentationErrorCauseForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FILE_NOT_FOUND_HASH) {
    return InstrumentationErrorCause::FILE_NOT_FOUND;
  } else if (hashCode == METHOD_NOT_FOUND_HASH) {
    return InstrumentationErrorCause::METHOD_NOT_FOUND;
  } else if (hashCode == LINE_NOT_EXECUTABLE_HASH) {
    return InstrumentationErrorCause::LINE_NOT_EXECUTABLE;
  } else if (hashCode == OVERLOADED_METHODS_HASH) {
    return InstrumentationErrorCause::OVERLOADED_METHODS;
  } else if (hashCode == LANGUAGE_MISMATCH_HASH) {
    return InstrumentationErrorCause::LANGUAGE_MISMATCH;
  } else if (hashCode == RUNTIME_ERROR_HASH) {
    return InstrumentationErrorCause::RUNTIME_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstrumentationErrorCause>(hashCode);
  }

  return InstrumentationErrorCause::NOT_SET;
}

Aws::String GetNameForInstrumentationErrorCause(InstrumentationErrorCause enumValue) {
  switch (enumValue) {
    case InstrumentationErrorCause::NOT_SET:
      return {};
    case InstrumentationErrorCause::FILE_NOT_FOUND:
      return "FILE_NOT_FOUND";
    case InstrumentationErrorCause::METHOD_NOT_FOUND:
      return "METHOD_NOT_FOUND";
    case InstrumentationErrorCause::LINE_NOT_EXECUTABLE:
      return "LINE_NOT_EXECUTABLE";
    case InstrumentationErrorCause::OVERLOADED_METHODS:
      return "OVERLOADED_METHODS";
    case InstrumentationErrorCause::LANGUAGE_MISMATCH:
      return "LANGUAGE_MISMATCH";
    case InstrumentationErrorCause::RUNTIME_ERROR:
      return "RUNTIME_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstrumentationErrorCauseMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
