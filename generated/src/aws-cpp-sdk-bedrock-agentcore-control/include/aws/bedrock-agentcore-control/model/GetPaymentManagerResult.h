/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/PaymentManagerStatus.h>
#include <aws/bedrock-agentcore-control/model/PaymentsAuthorizerType.h>
#include <aws/bedrock-agentcore-control/model/WorkloadIdentityDetails.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class GetPaymentManagerResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentManagerResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentManagerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetPaymentManagerResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerArn() const { return m_paymentManagerArn; }
  template <typename PaymentManagerArnT = Aws::String>
  void SetPaymentManagerArn(PaymentManagerArnT&& value) {
    m_paymentManagerArnHasBeenSet = true;
    m_paymentManagerArn = std::forward<PaymentManagerArnT>(value);
  }
  template <typename PaymentManagerArnT = Aws::String>
  GetPaymentManagerResult& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerId() const { return m_paymentManagerId; }
  template <typename PaymentManagerIdT = Aws::String>
  void SetPaymentManagerId(PaymentManagerIdT&& value) {
    m_paymentManagerIdHasBeenSet = true;
    m_paymentManagerId = std::forward<PaymentManagerIdT>(value);
  }
  template <typename PaymentManagerIdT = Aws::String>
  GetPaymentManagerResult& WithPaymentManagerId(PaymentManagerIdT&& value) {
    SetPaymentManagerId(std::forward<PaymentManagerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the payment manager.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetPaymentManagerResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the payment manager.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetPaymentManagerResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of authorizer used by the payment manager.</p> <ul> <li> <p>
   * <code>CUSTOM_JWT</code> - Authorize with a bearer token.</p> </li> <li> <p>
   * <code>AWS_IAM</code> - Authorize with your Amazon Web Services IAM
   * credentials.</p> </li> </ul>
   */
  inline PaymentsAuthorizerType GetAuthorizerType() const { return m_authorizerType; }
  inline void SetAuthorizerType(PaymentsAuthorizerType value) {
    m_authorizerTypeHasBeenSet = true;
    m_authorizerType = value;
  }
  inline GetPaymentManagerResult& WithAuthorizerType(PaymentsAuthorizerType value) {
    SetAuthorizerType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    m_authorizerConfigurationHasBeenSet = true;
    m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value);
  }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  GetPaymentManagerResult& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role associated with the payment
   * manager.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetPaymentManagerResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const WorkloadIdentityDetails& GetWorkloadIdentityDetails() const { return m_workloadIdentityDetails; }
  template <typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
  void SetWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) {
    m_workloadIdentityDetailsHasBeenSet = true;
    m_workloadIdentityDetails = std::forward<WorkloadIdentityDetailsT>(value);
  }
  template <typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
  GetPaymentManagerResult& WithWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) {
    SetWorkloadIdentityDetails(std::forward<WorkloadIdentityDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment manager was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetPaymentManagerResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment manager was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  GetPaymentManagerResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the payment manager. Possible values include
   * <code>CREATING</code>, <code>READY</code>, <code>UPDATING</code>,
   * <code>DELETING</code>, <code>CREATE_FAILED</code>, <code>UPDATE_FAILED</code>,
   * and <code>DELETE_FAILED</code>.</p>
   */
  inline PaymentManagerStatus GetStatus() const { return m_status; }
  inline void SetStatus(PaymentManagerStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetPaymentManagerResult& WithStatus(PaymentManagerStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the payment manager.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetPaymentManagerResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetPaymentManagerResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetPaymentManagerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_paymentManagerArn;

  Aws::String m_paymentManagerId;

  Aws::String m_name;

  Aws::String m_description;

  PaymentsAuthorizerType m_authorizerType{PaymentsAuthorizerType::NOT_SET};

  AuthorizerConfiguration m_authorizerConfiguration;

  Aws::String m_roleArn;

  WorkloadIdentityDetails m_workloadIdentityDetails;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  PaymentManagerStatus m_status{PaymentManagerStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentManagerIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_authorizerTypeHasBeenSet = false;
  bool m_authorizerConfigurationHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_workloadIdentityDetailsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
