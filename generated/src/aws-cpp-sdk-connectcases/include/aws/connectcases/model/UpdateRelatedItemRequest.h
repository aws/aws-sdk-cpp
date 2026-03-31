/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/RelatedItemUpdateContent.h>
#include <aws/connectcases/model/UserUnion.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectCases {
namespace Model {

/**
 */
class UpdateRelatedItemRequest : public ConnectCasesRequest {
 public:
  AWS_CONNECTCASES_API UpdateRelatedItemRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRelatedItem"; }

  AWS_CONNECTCASES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the Cases domain. </p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  UpdateRelatedItemRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier of the case.</p>
   */
  inline const Aws::String& GetCaseId() const { return m_caseId; }
  inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
  template <typename CaseIdT = Aws::String>
  void SetCaseId(CaseIdT&& value) {
    m_caseIdHasBeenSet = true;
    m_caseId = std::forward<CaseIdT>(value);
  }
  template <typename CaseIdT = Aws::String>
  UpdateRelatedItemRequest& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier of a related item.</p>
   */
  inline const Aws::String& GetRelatedItemId() const { return m_relatedItemId; }
  inline bool RelatedItemIdHasBeenSet() const { return m_relatedItemIdHasBeenSet; }
  template <typename RelatedItemIdT = Aws::String>
  void SetRelatedItemId(RelatedItemIdT&& value) {
    m_relatedItemIdHasBeenSet = true;
    m_relatedItemId = std::forward<RelatedItemIdT>(value);
  }
  template <typename RelatedItemIdT = Aws::String>
  UpdateRelatedItemRequest& WithRelatedItemId(RelatedItemIdT&& value) {
    SetRelatedItemId(std::forward<RelatedItemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of a related item to be updated.</p>
   */
  inline const RelatedItemUpdateContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = RelatedItemUpdateContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = RelatedItemUpdateContent>
  UpdateRelatedItemRequest& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the user who performed the update of the related item.</p>
   */
  inline const UserUnion& GetPerformedBy() const { return m_performedBy; }
  inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
  template <typename PerformedByT = UserUnion>
  void SetPerformedBy(PerformedByT&& value) {
    m_performedByHasBeenSet = true;
    m_performedBy = std::forward<PerformedByT>(value);
  }
  template <typename PerformedByT = UserUnion>
  UpdateRelatedItemRequest& WithPerformedBy(PerformedByT&& value) {
    SetPerformedBy(std::forward<PerformedByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_caseId;

  Aws::String m_relatedItemId;

  RelatedItemUpdateContent m_content;

  UserUnion m_performedBy;
  bool m_domainIdHasBeenSet = false;
  bool m_caseIdHasBeenSet = false;
  bool m_relatedItemIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_performedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
