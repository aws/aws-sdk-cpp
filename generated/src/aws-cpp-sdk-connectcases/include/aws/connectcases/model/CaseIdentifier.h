/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
 * <p>The identifiers of a case that a batch operation returns.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseIdentifier">AWS
 * API Reference</a></p>
 */
class CaseIdentifier {
 public:
  AWS_CONNECTCASES_API CaseIdentifier() = default;
  AWS_CONNECTCASES_API CaseIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API CaseIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the case.</p>
   */
  inline const Aws::String& GetCaseId() const { return m_caseId; }
  inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
  template <typename CaseIdT = Aws::String>
  void SetCaseId(CaseIdT&& value) {
    m_caseIdHasBeenSet = true;
    m_caseId = std::forward<CaseIdT>(value);
  }
  template <typename CaseIdT = Aws::String>
  CaseIdentifier& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reference number of the case. Reference numbers aren't guaranteed to be
   * unique. <code>BatchUpdateCase</code> and <code>BatchCreateRelatedItem</code>
   * don't return this value.</p>
   */
  inline const Aws::String& GetReferenceNumber() const { return m_referenceNumber; }
  inline bool ReferenceNumberHasBeenSet() const { return m_referenceNumberHasBeenSet; }
  template <typename ReferenceNumberT = Aws::String>
  void SetReferenceNumber(ReferenceNumberT&& value) {
    m_referenceNumberHasBeenSet = true;
    m_referenceNumber = std::forward<ReferenceNumberT>(value);
  }
  template <typename ReferenceNumberT = Aws::String>
  CaseIdentifier& WithReferenceNumber(ReferenceNumberT&& value) {
    SetReferenceNumber(std::forward<ReferenceNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reference ID of the case. Cases created before reference IDs were
   * available don't have one.</p>
   */
  inline const Aws::String& GetReferenceId() const { return m_referenceId; }
  inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
  template <typename ReferenceIdT = Aws::String>
  void SetReferenceId(ReferenceIdT&& value) {
    m_referenceIdHasBeenSet = true;
    m_referenceId = std::forward<ReferenceIdT>(value);
  }
  template <typename ReferenceIdT = Aws::String>
  CaseIdentifier& WithReferenceId(ReferenceIdT&& value) {
    SetReferenceId(std::forward<ReferenceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_caseId;

  Aws::String m_referenceNumber;

  Aws::String m_referenceId;
  bool m_caseIdHasBeenSet = false;
  bool m_referenceNumberHasBeenSet = false;
  bool m_referenceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
