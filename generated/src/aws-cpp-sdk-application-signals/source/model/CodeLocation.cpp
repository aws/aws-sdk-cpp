/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CodeLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

CodeLocation::CodeLocation(JsonView jsonValue) { *this = jsonValue; }

CodeLocation& CodeLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Language")) {
    m_language = ProgrammingLanguageMapper::GetProgrammingLanguageForName(jsonValue.GetString("Language"));
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CodeUnit")) {
    m_codeUnit = jsonValue.GetString("CodeUnit");
    m_codeUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClassName")) {
    m_className = jsonValue.GetString("ClassName");
    m_classNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MethodName")) {
    m_methodName = jsonValue.GetString("MethodName");
    m_methodNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FilePath")) {
    m_filePath = jsonValue.GetString("FilePath");
    m_filePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LineNumber")) {
    m_lineNumber = jsonValue.GetInteger("LineNumber");
    m_lineNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeLocation::Jsonize() const {
  JsonValue payload;

  if (m_languageHasBeenSet) {
    payload.WithString("Language", ProgrammingLanguageMapper::GetNameForProgrammingLanguage(m_language));
  }

  if (m_codeUnitHasBeenSet) {
    payload.WithString("CodeUnit", m_codeUnit);
  }

  if (m_classNameHasBeenSet) {
    payload.WithString("ClassName", m_className);
  }

  if (m_methodNameHasBeenSet) {
    payload.WithString("MethodName", m_methodName);
  }

  if (m_filePathHasBeenSet) {
    payload.WithString("FilePath", m_filePath);
  }

  if (m_lineNumberHasBeenSet) {
    payload.WithInteger("LineNumber", m_lineNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
