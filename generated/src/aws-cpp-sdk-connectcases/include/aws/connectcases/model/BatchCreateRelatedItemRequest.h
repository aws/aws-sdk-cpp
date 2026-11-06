/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/BatchCreateRelatedItemIdentifier.h>
#include <aws/connectcases/model/RelatedItemInputContent.h>
#include <aws/connectcases/model/UserUnion.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ConnectCases {
namespace Model {

/**
 */
class BatchCreateRelatedItemRequest : public ConnectCasesRequest {
 public:
  AWS_CONNECTCASES_API BatchCreateRelatedItemRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchCreateRelatedItem"; }

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
  BatchCreateRelatedItemRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the related item to be created. The same content is applied to
   * every case in the request. Only comment content is supported for batch
   * creation.</p>
   */
  inline const RelatedItemInputContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = RelatedItemInputContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = RelatedItemInputContent>
  BatchCreateRelatedItemRequest& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of cases to associate the related item with. All cases must belong
   * to the same domain.</p>
   */
  inline const Aws::Vector<BatchCreateRelatedItemIdentifier>& GetCases() const { return m_cases; }
  inline bool CasesHasBeenSet() const { return m_casesHasBeenSet; }
  template <typename CasesT = Aws::Vector<BatchCreateRelatedItemIdentifier>>
  void SetCases(CasesT&& value) {
    m_casesHasBeenSet = true;
    m_cases = std::forward<CasesT>(value);
  }
  template <typename CasesT = Aws::Vector<BatchCreateRelatedItemIdentifier>>
  BatchCreateRelatedItemRequest& WithCases(CasesT&& value) {
    SetCases(std::forward<CasesT>(value));
    return *this;
  }
  template <typename CasesT = BatchCreateRelatedItemIdentifier>
  BatchCreateRelatedItemRequest& AddCases(CasesT&& value) {
    m_casesHasBeenSet = true;
    m_cases.emplace_back(std::forward<CasesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that created the related item.</p>
   */
  inline const UserUnion& GetPerformedBy() const { return m_performedBy; }
  inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
  template <typename PerformedByT = UserUnion>
  void SetPerformedBy(PerformedByT&& value) {
    m_performedByHasBeenSet = true;
    m_performedBy = std::forward<PerformedByT>(value);
  }
  template <typename PerformedByT = UserUnion>
  BatchCreateRelatedItemRequest& WithPerformedBy(PerformedByT&& value) {
    SetPerformedBy(std::forward<PerformedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p> <p>If you retry a request with the
   * same client token, the service returns the original response instead of
   * processing the request again. If you reuse a client token with different request
   * parameters, the request fails with a <code>ConflictException</code>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchCreateRelatedItemRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  RelatedItemInputContent m_content;

  Aws::Vector<BatchCreateRelatedItemIdentifier> m_cases;

  UserUnion m_performedBy;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_casesHasBeenSet = false;
  bool m_performedByHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
