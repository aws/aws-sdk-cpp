/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/DomainChallenge.h>
#include <aws/agent-registry-control/model/Identifier.h>
#include <aws/agent-registry-control/model/IdentifierType.h>
#include <aws/agent-registry-control/model/VerificationStatus.h>
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
namespace AgentRegistryControl {
namespace Model {
/**
 * <p>The new publisher, in ACTION_REQUIRED, with the domainChallenge to publish as
 * a DNS TXT record. A retry with the original clientToken returns the existing
 * publisher.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CreatePublisherResponse">AWS
 * API Reference</a></p>
 */
class CreatePublisherResult {
 public:
  AWS_AGENTREGISTRYCONTROL_API CreatePublisherResult() = default;
  AWS_AGENTREGISTRYCONTROL_API CreatePublisherResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGENTREGISTRYCONTROL_API CreatePublisherResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Identifier& GetValue() const { return m_value; }
  template <typename ValueT = Identifier>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Identifier>
  CreatePublisherResult& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier type. <code>DOMAIN</code> is the only supported value.</p>
   */
  inline IdentifierType GetIdentifierType() const { return m_identifierType; }
  inline void SetIdentifierType(IdentifierType value) {
    m_identifierTypeHasBeenSet = true;
    m_identifierType = value;
  }
  inline CreatePublisherResult& WithIdentifierType(IdentifierType value) {
    SetIdentifierType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain verification status of the publisher:</p> <ul>
   * <li><code>ACTION_REQUIRED</code>: The registry is waiting to find the DNS TXT
   * record described by <code>domainChallenge</code>.</li> <li><code>ACTIVE</code>:
   * The domain is verified. You can associate registry records with the
   * publisher.</li> <li><code>SUSPENDED</code>: The domain was verified, but a later
   * check found the TXT record missing or changed. The publisher returns to
   * <code>ACTIVE</code> when the record is found again, and becomes
   * <code>FAILED</code> if the record stays missing.</li> <li><code>FAILED</code>:
   * Verification didn't succeed, for example because the TXT record wasn't found in
   * time or another account verified the domain first. Call
   * <code>ValidatePublisher</code> to try again.</li> <li><code>DELETING</code>: A
   * delete is in progress.</li> </ul>
   */
  inline VerificationStatus GetStatus() const { return m_status; }
  inline void SetStatus(VerificationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreatePublisherResult& WithStatus(VerificationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the publisher's current status, such as why verification
   * failed. Present only when a reason is available.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  CreatePublisherResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DomainChallenge& GetDomainChallenge() const { return m_domainChallenge; }
  template <typename DomainChallengeT = DomainChallenge>
  void SetDomainChallenge(DomainChallengeT&& value) {
    m_domainChallengeHasBeenSet = true;
    m_domainChallenge = std::forward<DomainChallengeT>(value);
  }
  template <typename DomainChallengeT = DomainChallenge>
  CreatePublisherResult& WithDomainChallenge(DomainChallengeT&& value) {
    SetDomainChallenge(std::forward<DomainChallengeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags attached to the publisher.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreatePublisherResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreatePublisherResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the publisher was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreatePublisherResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the publisher was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreatePublisherResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPublisherArn() const { return m_publisherArn; }
  template <typename PublisherArnT = Aws::String>
  void SetPublisherArn(PublisherArnT&& value) {
    m_publisherArnHasBeenSet = true;
    m_publisherArn = std::forward<PublisherArnT>(value);
  }
  template <typename PublisherArnT = Aws::String>
  CreatePublisherResult& WithPublisherArn(PublisherArnT&& value) {
    SetPublisherArn(std::forward<PublisherArnT>(value));
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
  CreatePublisherResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Identifier m_value;

  IdentifierType m_identifierType{IdentifierType::NOT_SET};

  VerificationStatus m_status{VerificationStatus::NOT_SET};

  Aws::String m_statusReason;

  DomainChallenge m_domainChallenge;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_publisherArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_valueHasBeenSet = false;
  bool m_identifierTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_domainChallengeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_publisherArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
