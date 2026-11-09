/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CaseIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Information about a related item that wasn't created.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchCreateRelatedItemErrorEntry">AWS
 * API Reference</a></p>
 */
class BatchCreateRelatedItemErrorEntry {
 public:
  AWS_CONNECTCASES_API BatchCreateRelatedItemErrorEntry() = default;
  AWS_CONNECTCASES_API BatchCreateRelatedItemErrorEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API BatchCreateRelatedItemErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifiers of the case that the related item wasn't created for.</p>
   */
  inline const CaseIdentifier& GetCaseIdentifier() const { return m_caseIdentifier; }
  inline bool CaseIdentifierHasBeenSet() const { return m_caseIdentifierHasBeenSet; }
  template <typename CaseIdentifierT = CaseIdentifier>
  void SetCaseIdentifier(CaseIdentifierT&& value) {
    m_caseIdentifierHasBeenSet = true;
    m_caseIdentifier = std::forward<CaseIdentifierT>(value);
  }
  template <typename CaseIdentifierT = CaseIdentifier>
  BatchCreateRelatedItemErrorEntry& WithCaseIdentifier(CaseIdentifierT&& value) {
    SetCaseIdentifier(std::forward<CaseIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code. For possible values, see <code>failedItems</code>.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  BatchCreateRelatedItemErrorEntry& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that describes the error.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  BatchCreateRelatedItemErrorEntry& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  CaseIdentifier m_caseIdentifier;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;
  bool m_caseIdentifierHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
