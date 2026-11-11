/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/FieldsConfiguration.h>
#include <aws/connectcases/model/RelatedItemsConfiguration.h>
#include <aws/connectcases/model/UserUnion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ConnectCases {
namespace Model {

/**
 */
class StartMergeCasesRequest : public ConnectCasesRequest {
 public:
  AWS_CONNECTCASES_API StartMergeCasesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartMergeCases"; }

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
  StartMergeCasesRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the primary case. The primary case remains active
   * and receives the merged field values and related items. The cases can use
   * different templates, and the primary case keeps its template.</p>
   */
  inline const Aws::String& GetCaseId() const { return m_caseId; }
  inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
  template <typename CaseIdT = Aws::String>
  void SetCaseId(CaseIdT&& value) {
    m_caseIdHasBeenSet = true;
    m_caseId = std::forward<CaseIdT>(value);
  }
  template <typename CaseIdT = Aws::String>
  StartMergeCasesRequest& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the secondary case to merge into the primary case.
   * The secondary case is closed when the merge finishes. Specify exactly one case
   * ID.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecondaryCaseIds() const { return m_secondaryCaseIds; }
  inline bool SecondaryCaseIdsHasBeenSet() const { return m_secondaryCaseIdsHasBeenSet; }
  template <typename SecondaryCaseIdsT = Aws::Vector<Aws::String>>
  void SetSecondaryCaseIds(SecondaryCaseIdsT&& value) {
    m_secondaryCaseIdsHasBeenSet = true;
    m_secondaryCaseIds = std::forward<SecondaryCaseIdsT>(value);
  }
  template <typename SecondaryCaseIdsT = Aws::Vector<Aws::String>>
  StartMergeCasesRequest& WithSecondaryCaseIds(SecondaryCaseIdsT&& value) {
    SetSecondaryCaseIds(std::forward<SecondaryCaseIdsT>(value));
    return *this;
  }
  template <typename SecondaryCaseIdsT = Aws::String>
  StartMergeCasesRequest& AddSecondaryCaseIds(SecondaryCaseIdsT&& value) {
    m_secondaryCaseIdsHasBeenSet = true;
    m_secondaryCaseIds.emplace_back(std::forward<SecondaryCaseIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fields whose values to take from the secondary case. You can only merge
   * custom fields and the following system fields: <code>assigned_queue</code>,
   * <code>assigned_user</code>, <code>summary</code>, and <code>case_reason</code>.
   * If you select any other system field, the request fails with a
   * <code>ValidationException</code>.</p> <p>For each field that can be merged, the
   * merge works as follows:</p> <ul> <li> <p>If you select the field, the primary
   * case gets the secondary case's value. If the secondary case's value is empty,
   * the primary case's value is cleared.</p> </li> <li> <p>If you don't select the
   * field and the primary case has a value for it, the primary case keeps its
   * value.</p> </li> <li> <p>If you don't select the field and the primary case
   * doesn't have the field, or its value is empty, the primary case gets the
   * secondary case's value. This applies even when the field isn't on the primary
   * case's template.</p> </li> </ul> <p>Field values are read from both cases when
   * the merge runs, so changes that you make to the primary case after you start the
   * merge are taken into account.</p> <p>Specify at most one entry, and set its
   * <code>sourceCaseId</code> to the secondary case ID.</p>
   */
  inline const Aws::Vector<FieldsConfiguration>& GetFieldsConfiguration() const { return m_fieldsConfiguration; }
  inline bool FieldsConfigurationHasBeenSet() const { return m_fieldsConfigurationHasBeenSet; }
  template <typename FieldsConfigurationT = Aws::Vector<FieldsConfiguration>>
  void SetFieldsConfiguration(FieldsConfigurationT&& value) {
    m_fieldsConfigurationHasBeenSet = true;
    m_fieldsConfiguration = std::forward<FieldsConfigurationT>(value);
  }
  template <typename FieldsConfigurationT = Aws::Vector<FieldsConfiguration>>
  StartMergeCasesRequest& WithFieldsConfiguration(FieldsConfigurationT&& value) {
    SetFieldsConfiguration(std::forward<FieldsConfigurationT>(value));
    return *this;
  }
  template <typename FieldsConfigurationT = FieldsConfiguration>
  StartMergeCasesRequest& AddFieldsConfiguration(FieldsConfigurationT&& value) {
    m_fieldsConfigurationHasBeenSet = true;
    m_fieldsConfiguration.emplace_back(std::forward<FieldsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of related items to move from the secondary case to the primary
   * case. Related items of a type that you don't select, or set to
   * <code>false</code>, stay on the closed secondary case. If you omit this
   * parameter, no related items are moved.</p> <p>File, SLA, and work plan related
   * items are never moved. They stay on the secondary case.</p>
   */
  inline const RelatedItemsConfiguration& GetRelatedItemsConfiguration() const { return m_relatedItemsConfiguration; }
  inline bool RelatedItemsConfigurationHasBeenSet() const { return m_relatedItemsConfigurationHasBeenSet; }
  template <typename RelatedItemsConfigurationT = RelatedItemsConfiguration>
  void SetRelatedItemsConfiguration(RelatedItemsConfigurationT&& value) {
    m_relatedItemsConfigurationHasBeenSet = true;
    m_relatedItemsConfiguration = std::forward<RelatedItemsConfigurationT>(value);
  }
  template <typename RelatedItemsConfigurationT = RelatedItemsConfiguration>
  StartMergeCasesRequest& WithRelatedItemsConfiguration(RelatedItemsConfigurationT&& value) {
    SetRelatedItemsConfiguration(std::forward<RelatedItemsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user who performed the merge. If you provide <code>userArn</code>, you
   * must also have <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
   * permission on the ARN of that user.</p>
   */
  inline const UserUnion& GetPerformedBy() const { return m_performedBy; }
  inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
  template <typename PerformedByT = UserUnion>
  void SetPerformedBy(PerformedByT&& value) {
    m_performedByHasBeenSet = true;
    m_performedBy = std::forward<PerformedByT>(value);
  }
  template <typename PerformedByT = UserUnion>
  StartMergeCasesRequest& WithPerformedBy(PerformedByT&& value) {
    SetPerformedBy(std::forward<PerformedByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_caseId;

  Aws::Vector<Aws::String> m_secondaryCaseIds;

  Aws::Vector<FieldsConfiguration> m_fieldsConfiguration;

  RelatedItemsConfiguration m_relatedItemsConfiguration;

  UserUnion m_performedBy;
  bool m_domainIdHasBeenSet = false;
  bool m_caseIdHasBeenSet = false;
  bool m_secondaryCaseIdsHasBeenSet = false;
  bool m_fieldsConfigurationHasBeenSet = false;
  bool m_relatedItemsConfigurationHasBeenSet = false;
  bool m_performedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
