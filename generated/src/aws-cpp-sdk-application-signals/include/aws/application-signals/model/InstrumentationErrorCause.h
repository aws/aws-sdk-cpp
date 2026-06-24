/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApplicationSignals {
namespace Model {
enum class InstrumentationErrorCause {
  NOT_SET,
  FILE_NOT_FOUND,
  METHOD_NOT_FOUND,
  LINE_NOT_EXECUTABLE,
  OVERLOADED_METHODS,
  LANGUAGE_MISMATCH,
  RUNTIME_ERROR
};

namespace InstrumentationErrorCauseMapper {
AWS_APPLICATIONSIGNALS_API InstrumentationErrorCause GetInstrumentationErrorCauseForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForInstrumentationErrorCause(InstrumentationErrorCause value);
}  // namespace InstrumentationErrorCauseMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
