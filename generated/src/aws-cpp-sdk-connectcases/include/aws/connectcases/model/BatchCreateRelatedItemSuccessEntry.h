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
 * <p>Information about a related item that was created.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchCreateRelatedItemSuccessEntry">AWS
 * API Reference</a></p>
 */
class BatchCreateRelatedItemSuccessEntry {
 public:
  AWS_CONNECTCASES_API BatchCreateRelatedItemSuccessEntry() = default;
  AWS_CONNECTCASES_API BatchCreateRelatedItemSuccessEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API BatchCreateRelatedItemSuccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifiers of the case that the related item is associated with.</p>
   */
  inline const CaseIdentifier& GetCaseIdentifier() const { return m_caseIdentifier; }
  inline bool CaseIdentifierHasBeenSet() const { return m_caseIdentifierHasBeenSet; }
  template <typename CaseIdentifierT = CaseIdentifier>
  void SetCaseIdentifier(CaseIdentifierT&& value) {
    m_caseIdentifierHasBeenSet = true;
    m_caseIdentifier = std::forward<CaseIdentifierT>(value);
  }
  template <typename CaseIdentifierT = CaseIdentifier>
  BatchCreateRelatedItemSuccessEntry& WithCaseIdentifier(CaseIdentifierT&& value) {
    SetCaseIdentifier(std::forward<CaseIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the related item.</p>
   */
  inline const Aws::String& GetRelatedItemId() const { return m_relatedItemId; }
  inline bool RelatedItemIdHasBeenSet() const { return m_relatedItemIdHasBeenSet; }
  template <typename RelatedItemIdT = Aws::String>
  void SetRelatedItemId(RelatedItemIdT&& value) {
    m_relatedItemIdHasBeenSet = true;
    m_relatedItemId = std::forward<RelatedItemIdT>(value);
  }
  template <typename RelatedItemIdT = Aws::String>
  BatchCreateRelatedItemSuccessEntry& WithRelatedItemId(RelatedItemIdT&& value) {
    SetRelatedItemId(std::forward<RelatedItemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the related item.</p>
   */
  inline const Aws::String& GetRelatedItemArn() const { return m_relatedItemArn; }
  inline bool RelatedItemArnHasBeenSet() const { return m_relatedItemArnHasBeenSet; }
  template <typename RelatedItemArnT = Aws::String>
  void SetRelatedItemArn(RelatedItemArnT&& value) {
    m_relatedItemArnHasBeenSet = true;
    m_relatedItemArn = std::forward<RelatedItemArnT>(value);
  }
  template <typename RelatedItemArnT = Aws::String>
  BatchCreateRelatedItemSuccessEntry& WithRelatedItemArn(RelatedItemArnT&& value) {
    SetRelatedItemArn(std::forward<RelatedItemArnT>(value));
    return *this;
  }
  ///@}
 private:
  CaseIdentifier m_caseIdentifier;

  Aws::String m_relatedItemId;

  Aws::String m_relatedItemArn;
  bool m_caseIdentifierHasBeenSet = false;
  bool m_relatedItemIdHasBeenSet = false;
  bool m_relatedItemArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
