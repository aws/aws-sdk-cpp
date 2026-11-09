/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/BatchUpdateCaseIdentifier.h>
#include <aws/connectcases/model/FieldValueInput.h>
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
class BatchUpdateCaseRequest : public ConnectCasesRequest {
 public:
  AWS_CONNECTCASES_API BatchUpdateCaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateCase"; }

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
  BatchUpdateCaseRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of cases to update. All cases must belong to the same domain.</p>
   */
  inline const Aws::Vector<BatchUpdateCaseIdentifier>& GetCases() const { return m_cases; }
  inline bool CasesHasBeenSet() const { return m_casesHasBeenSet; }
  template <typename CasesT = Aws::Vector<BatchUpdateCaseIdentifier>>
  void SetCases(CasesT&& value) {
    m_casesHasBeenSet = true;
    m_cases = std::forward<CasesT>(value);
  }
  template <typename CasesT = Aws::Vector<BatchUpdateCaseIdentifier>>
  BatchUpdateCaseRequest& WithCases(CasesT&& value) {
    SetCases(std::forward<CasesT>(value));
    return *this;
  }
  template <typename CasesT = BatchUpdateCaseIdentifier>
  BatchUpdateCaseRequest& AddCases(CasesT&& value) {
    m_casesHasBeenSet = true;
    m_cases.emplace_back(std::forward<CasesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of objects, each with a <code>fieldIdentifier</code> and a
   * <code>value</code>. You can identify each field by its ID or by its name;
   * identifying a field by name is supported only in <code>BatchUpdateCase</code>.
   * The same field values are applied to every case in the request. This field must
   * be present, but can be an empty list when you provide the top-level
   * <code>title</code>, <code>status</code>, or <code>customerId</code> parameters.
   * Do not include <code>title</code>, <code>status</code>, or
   * <code>customerId</code> in this list; set those values only through their
   * top-level parameters. Duplicating them in <code>fields</code> results in a
   * validation error.</p>
   */
  inline const Aws::Vector<FieldValueInput>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<FieldValueInput>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<FieldValueInput>>
  BatchUpdateCaseRequest& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = FieldValueInput>
  BatchUpdateCaseRequest& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that performed the action.</p>
   */
  inline const UserUnion& GetPerformedBy() const { return m_performedBy; }
  inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
  template <typename PerformedByT = UserUnion>
  void SetPerformedBy(PerformedByT&& value) {
    m_performedByHasBeenSet = true;
    m_performedBy = std::forward<PerformedByT>(value);
  }
  template <typename PerformedByT = UserUnion>
  BatchUpdateCaseRequest& WithPerformedBy(PerformedByT&& value) {
    SetPerformedBy(std::forward<PerformedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title to apply to all cases in the request.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  BatchUpdateCaseRequest& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status to apply to all cases in the request.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  BatchUpdateCaseRequest& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the customer profile to associate with all cases in the
   * request.</p>
   */
  inline const Aws::String& GetCustomerId() const { return m_customerId; }
  inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
  template <typename CustomerIdT = Aws::String>
  void SetCustomerId(CustomerIdT&& value) {
    m_customerIdHasBeenSet = true;
    m_customerId = std::forward<CustomerIdT>(value);
  }
  template <typename CustomerIdT = Aws::String>
  BatchUpdateCaseRequest& WithCustomerId(CustomerIdT&& value) {
    SetCustomerId(std::forward<CustomerIdT>(value));
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
  BatchUpdateCaseRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::Vector<BatchUpdateCaseIdentifier> m_cases;

  Aws::Vector<FieldValueInput> m_fields;

  UserUnion m_performedBy;

  Aws::String m_title;

  Aws::String m_status;

  Aws::String m_customerId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdHasBeenSet = false;
  bool m_casesHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
  bool m_performedByHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_customerIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
