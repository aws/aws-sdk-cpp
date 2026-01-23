/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TestCaseEntryPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

TestCaseEntryPoint::TestCaseEntryPoint(JsonView jsonValue) { *this = jsonValue; }

TestCaseEntryPoint& TestCaseEntryPoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = TestCaseEntryPointTypeMapper::GetTestCaseEntryPointTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VoiceCallEntryPointParameters")) {
    m_voiceCallEntryPointParameters = jsonValue.GetObject("VoiceCallEntryPointParameters");
    m_voiceCallEntryPointParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue TestCaseEntryPoint::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", TestCaseEntryPointTypeMapper::GetNameForTestCaseEntryPointType(m_type));
  }

  if (m_voiceCallEntryPointParametersHasBeenSet) {
    payload.WithObject("VoiceCallEntryPointParameters", m_voiceCallEntryPointParameters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
