/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CaseIdentifierUnion.h>

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
 * <p>Identifies a case to update in a <code>BatchUpdateCase</code>
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchUpdateCaseIdentifier">AWS
 * API Reference</a></p>
 */
class BatchUpdateCaseIdentifier {
 public:
  AWS_CONNECTCASES_API BatchUpdateCaseIdentifier() = default;
  AWS_CONNECTCASES_API BatchUpdateCaseIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API BatchUpdateCaseIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the case to update. Specify either the case ID or the
   * reference ID.</p>
   */
  inline const CaseIdentifierUnion& GetCaseIdentifier() const { return m_caseIdentifier; }
  inline bool CaseIdentifierHasBeenSet() const { return m_caseIdentifierHasBeenSet; }
  template <typename CaseIdentifierT = CaseIdentifierUnion>
  void SetCaseIdentifier(CaseIdentifierT&& value) {
    m_caseIdentifierHasBeenSet = true;
    m_caseIdentifier = std::forward<CaseIdentifierT>(value);
  }
  template <typename CaseIdentifierT = CaseIdentifierUnion>
  BatchUpdateCaseIdentifier& WithCaseIdentifier(CaseIdentifierT&& value) {
    SetCaseIdentifier(std::forward<CaseIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  CaseIdentifierUnion m_caseIdentifier;
  bool m_caseIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
