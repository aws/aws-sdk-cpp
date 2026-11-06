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
 * <p>Identifies a case by its case ID or its reference ID. Specify only one
 * member.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseIdentifierUnion">AWS
 * API Reference</a></p>
 */
class CaseIdentifierUnion {
 public:
  AWS_CONNECTCASES_API CaseIdentifierUnion() = default;
  AWS_CONNECTCASES_API CaseIdentifierUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API CaseIdentifierUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CaseIdentifierUnion& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reference ID of the case. Reference IDs are unique within a domain, and
   * uniqueness isn't case sensitive.</p>
   */
  inline const Aws::String& GetReferenceId() const { return m_referenceId; }
  inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
  template <typename ReferenceIdT = Aws::String>
  void SetReferenceId(ReferenceIdT&& value) {
    m_referenceIdHasBeenSet = true;
    m_referenceId = std::forward<ReferenceIdT>(value);
  }
  template <typename ReferenceIdT = Aws::String>
  CaseIdentifierUnion& WithReferenceId(ReferenceIdT&& value) {
    SetReferenceId(std::forward<ReferenceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_caseId;

  Aws::String m_referenceId;
  bool m_caseIdHasBeenSet = false;
  bool m_referenceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
