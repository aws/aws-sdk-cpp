/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ProgrammingLanguage.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Identifies a code location to instrument, including the programming language,
 * code unit, class, method, file path, and optional line number.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/CodeLocation">AWS
 * API Reference</a></p>
 */
class CodeLocation {
 public:
  AWS_APPLICATIONSIGNALS_API CodeLocation() = default;
  AWS_APPLICATIONSIGNALS_API CodeLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API CodeLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The programming language for this instrumentation point, such as Java,
   * Python, or JavaScript.</p>
   */
  inline ProgrammingLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(ProgrammingLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline CodeLocation& WithLanguage(ProgrammingLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The package, module, or namespace that contains the target code, for example
   * <code>com.amazon.payment</code> or <code>payment_service</code>.</p>
   */
  inline const Aws::String& GetCodeUnit() const { return m_codeUnit; }
  inline bool CodeUnitHasBeenSet() const { return m_codeUnitHasBeenSet; }
  template <typename CodeUnitT = Aws::String>
  void SetCodeUnit(CodeUnitT&& value) {
    m_codeUnitHasBeenSet = true;
    m_codeUnit = std::forward<CodeUnitT>(value);
  }
  template <typename CodeUnitT = Aws::String>
  CodeLocation& WithCodeUnit(CodeUnitT&& value) {
    SetCodeUnit(std::forward<CodeUnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The class or type name that contains the method. This is required for Java
   * and optional for Python module-level functions.</p>
   */
  inline const Aws::String& GetClassName() const { return m_className; }
  inline bool ClassNameHasBeenSet() const { return m_classNameHasBeenSet; }
  template <typename ClassNameT = Aws::String>
  void SetClassName(ClassNameT&& value) {
    m_classNameHasBeenSet = true;
    m_className = std::forward<ClassNameT>(value);
  }
  template <typename ClassNameT = Aws::String>
  CodeLocation& WithClassName(ClassNameT&& value) {
    SetClassName(std::forward<ClassNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method or function name to instrument, such as
   * <code>validateCreditCard</code> or <code>__init__</code>.</p>
   */
  inline const Aws::String& GetMethodName() const { return m_methodName; }
  inline bool MethodNameHasBeenSet() const { return m_methodNameHasBeenSet; }
  template <typename MethodNameT = Aws::String>
  void SetMethodName(MethodNameT&& value) {
    m_methodNameHasBeenSet = true;
    m_methodName = std::forward<MethodNameT>(value);
  }
  template <typename MethodNameT = Aws::String>
  CodeLocation& WithMethodName(MethodNameT&& value) {
    SetMethodName(std::forward<MethodNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source file path relative to the project or source root, such as
   * <code>src/payment/PaymentProcessor.java</code> or
   * <code>src/payment/PaymentProcessor.py</code>.</p>
   */
  inline const Aws::String& GetFilePath() const { return m_filePath; }
  inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
  template <typename FilePathT = Aws::String>
  void SetFilePath(FilePathT&& value) {
    m_filePathHasBeenSet = true;
    m_filePath = std::forward<FilePathT>(value);
  }
  template <typename FilePathT = Aws::String>
  CodeLocation& WithFilePath(FilePathT&& value) {
    SetFilePath(std::forward<FilePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The line number to instrument. Provide this to disambiguate overloaded
   * methods and to target a specific line when needed.</p>
   */
  inline int GetLineNumber() const { return m_lineNumber; }
  inline bool LineNumberHasBeenSet() const { return m_lineNumberHasBeenSet; }
  inline void SetLineNumber(int value) {
    m_lineNumberHasBeenSet = true;
    m_lineNumber = value;
  }
  inline CodeLocation& WithLineNumber(int value) {
    SetLineNumber(value);
    return *this;
  }
  ///@}
 private:
  ProgrammingLanguage m_language{ProgrammingLanguage::NOT_SET};

  Aws::String m_codeUnit;

  Aws::String m_className;

  Aws::String m_methodName;

  Aws::String m_filePath;

  int m_lineNumber{0};
  bool m_languageHasBeenSet = false;
  bool m_codeUnitHasBeenSet = false;
  bool m_classNameHasBeenSet = false;
  bool m_methodNameHasBeenSet = false;
  bool m_filePathHasBeenSet = false;
  bool m_lineNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
