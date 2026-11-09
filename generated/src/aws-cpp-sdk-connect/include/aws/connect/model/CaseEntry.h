/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about a case associated with a contact.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CaseEntry">AWS
 * API Reference</a></p>
 */
class CaseEntry {
 public:
  AWS_CONNECT_API CaseEntry() = default;
  AWS_CONNECT_API CaseEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API CaseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the case in UUID format.</p>
   */
  inline const Aws::String& GetCaseId() const { return m_caseId; }
  inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
  template <typename CaseIdT = Aws::String>
  void SetCaseId(CaseIdT&& value) {
    m_caseIdHasBeenSet = true;
    m_caseId = std::forward<CaseIdT>(value);
  }
  template <typename CaseIdT = Aws::String>
  CaseEntry& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A friendly number for the case. Reference numbers are not guaranteed to be
   * unique.</p>
   */
  inline const Aws::String& GetCaseReferenceNumber() const { return m_caseReferenceNumber; }
  inline bool CaseReferenceNumberHasBeenSet() const { return m_caseReferenceNumberHasBeenSet; }
  template <typename CaseReferenceNumberT = Aws::String>
  void SetCaseReferenceNumber(CaseReferenceNumberT&& value) {
    m_caseReferenceNumberHasBeenSet = true;
    m_caseReferenceNumber = std::forward<CaseReferenceNumberT>(value);
  }
  template <typename CaseReferenceNumberT = Aws::String>
  CaseEntry& WithCaseReferenceNumber(CaseReferenceNumberT&& value) {
    SetCaseReferenceNumber(std::forward<CaseReferenceNumberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_caseId;

  Aws::String m_caseReferenceNumber;
  bool m_caseIdHasBeenSet = false;
  bool m_caseReferenceNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
