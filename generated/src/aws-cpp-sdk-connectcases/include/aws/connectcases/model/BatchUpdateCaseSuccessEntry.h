/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CaseIdentifier.h>

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
 * <p>Information about a case that was updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchUpdateCaseSuccessEntry">AWS
 * API Reference</a></p>
 */
class BatchUpdateCaseSuccessEntry {
 public:
  AWS_CONNECTCASES_API BatchUpdateCaseSuccessEntry() = default;
  AWS_CONNECTCASES_API BatchUpdateCaseSuccessEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API BatchUpdateCaseSuccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifiers of the updated case.</p>
   */
  inline const CaseIdentifier& GetCaseIdentifier() const { return m_caseIdentifier; }
  inline bool CaseIdentifierHasBeenSet() const { return m_caseIdentifierHasBeenSet; }
  template <typename CaseIdentifierT = CaseIdentifier>
  void SetCaseIdentifier(CaseIdentifierT&& value) {
    m_caseIdentifierHasBeenSet = true;
    m_caseIdentifier = std::forward<CaseIdentifierT>(value);
  }
  template <typename CaseIdentifierT = CaseIdentifier>
  BatchUpdateCaseSuccessEntry& WithCaseIdentifier(CaseIdentifierT&& value) {
    SetCaseIdentifier(std::forward<CaseIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  CaseIdentifier m_caseIdentifier;
  bool m_caseIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
