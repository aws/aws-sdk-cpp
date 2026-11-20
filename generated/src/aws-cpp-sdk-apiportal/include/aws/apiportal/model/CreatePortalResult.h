/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/Authorization.h>
#include <aws/apiportal/model/EndpointConfigurationResponse.h>
#include <aws/apiportal/model/PortalContent.h>
#include <aws/apiportal/model/PortalStatusException.h>
#include <aws/apiportal/model/PublishStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {
class CreatePortalResult {
 public:
  AWS_APIPORTAL_API CreatePortalResult() = default;
  AWS_APIPORTAL_API CreatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIPORTAL_API CreatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the portal.</p>
   */
  inline const Aws::String& GetPortalId() const { return m_portalId; }
  template <typename PortalIdT = Aws::String>
  void SetPortalId(PortalIdT&& value) {
    m_portalIdHasBeenSet = true;
    m_portalId = std::forward<PortalIdT>(value);
  }
  template <typename PortalIdT = Aws::String>
  CreatePortalResult& WithPortalId(PortalIdT&& value) {
    SetPortalId(std::forward<PortalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the portal.</p>
   */
  inline const Aws::String& GetPortalArn() const { return m_portalArn; }
  template <typename PortalArnT = Aws::String>
  void SetPortalArn(PortalArnT&& value) {
    m_portalArnHasBeenSet = true;
    m_portalArn = std::forward<PortalArnT>(value);
  }
  template <typename PortalArnT = Aws::String>
  CreatePortalResult& WithPortalArn(PortalArnT&& value) {
    SetPortalArn(std::forward<PortalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain configuration of the portal.</p>
   */
  inline const EndpointConfigurationResponse& GetEndpointConfiguration() const { return m_endpointConfiguration; }
  template <typename EndpointConfigurationT = EndpointConfigurationResponse>
  void SetEndpointConfiguration(EndpointConfigurationT&& value) {
    m_endpointConfigurationHasBeenSet = true;
    m_endpointConfiguration = std::forward<EndpointConfigurationT>(value);
  }
  template <typename EndpointConfigurationT = EndpointConfigurationResponse>
  CreatePortalResult& WithEndpointConfiguration(EndpointConfigurationT&& value) {
    SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How readers sign in to the portal, and whether fine-grained access control is
   * on.</p>
   */
  inline const Authorization& GetAuthorization() const { return m_authorization; }
  template <typename AuthorizationT = Authorization>
  void SetAuthorization(AuthorizationT&& value) {
    m_authorizationHasBeenSet = true;
    m_authorization = std::forward<AuthorizationT>(value);
  }
  template <typename AuthorizationT = Authorization>
  CreatePortalResult& WithAuthorization(AuthorizationT&& value) {
    SetAuthorization(std::forward<AuthorizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The portal's display name, description, and theme.</p>
   */
  inline const PortalContent& GetPortalContent() const { return m_portalContent; }
  template <typename PortalContentT = PortalContent>
  void SetPortalContent(PortalContentT&& value) {
    m_portalContentHasBeenSet = true;
    m_portalContent = std::forward<PortalContentT>(value);
  }
  template <typename PortalContentT = PortalContent>
  CreatePortalResult& WithPortalContent(PortalContentT&& value) {
    SetPortalContent(std::forward<PortalContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the products the portal includes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedProductArns() const { return m_includedProductArns; }
  template <typename IncludedProductArnsT = Aws::Vector<Aws::String>>
  void SetIncludedProductArns(IncludedProductArnsT&& value) {
    m_includedProductArnsHasBeenSet = true;
    m_includedProductArns = std::forward<IncludedProductArnsT>(value);
  }
  template <typename IncludedProductArnsT = Aws::Vector<Aws::String>>
  CreatePortalResult& WithIncludedProductArns(IncludedProductArnsT&& value) {
    SetIncludedProductArns(std::forward<IncludedProductArnsT>(value));
    return *this;
  }
  template <typename IncludedProductArnsT = Aws::String>
  CreatePortalResult& AddIncludedProductArns(IncludedProductArnsT&& value) {
    m_includedProductArnsHasBeenSet = true;
    m_includedProductArns.emplace_back(std::forward<IncludedProductArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publish status of the portal. Absent if the portal has never been
   * published.</p>
   */
  inline PublishStatus GetPublishStatus() const { return m_publishStatus; }
  inline void SetPublishStatus(PublishStatus value) {
    m_publishStatusHasBeenSet = true;
    m_publishStatus = value;
  }
  inline CreatePortalResult& WithPublishStatus(PublishStatus value) {
    SetPublishStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const PortalStatusException& GetStatusException() const { return m_statusException; }
  template <typename StatusExceptionT = PortalStatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = PortalStatusException>
  CreatePortalResult& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreatePortalResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the portal was last published.</p>
   */
  inline const Aws::Utils::DateTime& GetPublishedAt() const { return m_publishedAt; }
  template <typename PublishedAtT = Aws::Utils::DateTime>
  void SetPublishedAt(PublishedAtT&& value) {
    m_publishedAtHasBeenSet = true;
    m_publishedAt = std::forward<PublishedAtT>(value);
  }
  template <typename PublishedAtT = Aws::Utils::DateTime>
  CreatePortalResult& WithPublishedAt(PublishedAtT&& value) {
    SetPublishedAt(std::forward<PublishedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description supplied with the most recent publish request.</p>
   */
  inline const Aws::String& GetPublishDescription() const { return m_publishDescription; }
  template <typename PublishDescriptionT = Aws::String>
  void SetPublishDescription(PublishDescriptionT&& value) {
    m_publishDescriptionHasBeenSet = true;
    m_publishDescription = std::forward<PublishDescriptionT>(value);
  }
  template <typename PublishDescriptionT = Aws::String>
  CreatePortalResult& WithPublishDescription(PublishDescriptionT&& value) {
    SetPublishDescription(std::forward<PublishDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudWatch RUM app monitor that collects reader telemetry for
   * the portal.</p>
   */
  inline const Aws::String& GetRumAppMonitorName() const { return m_rumAppMonitorName; }
  template <typename RumAppMonitorNameT = Aws::String>
  void SetRumAppMonitorName(RumAppMonitorNameT&& value) {
    m_rumAppMonitorNameHasBeenSet = true;
    m_rumAppMonitorName = std::forward<RumAppMonitorNameT>(value);
  }
  template <typename RumAppMonitorNameT = Aws::String>
  CreatePortalResult& WithRumAppMonitorName(RumAppMonitorNameT&& value) {
    SetRumAppMonitorName(std::forward<RumAppMonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreatePortalResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreatePortalResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  CreatePortalResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_portalId;

  Aws::String m_portalArn;

  EndpointConfigurationResponse m_endpointConfiguration;

  Authorization m_authorization;

  PortalContent m_portalContent;

  Aws::Vector<Aws::String> m_includedProductArns;

  PublishStatus m_publishStatus{PublishStatus::NOT_SET};

  PortalStatusException m_statusException;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_publishedAt{};

  Aws::String m_publishDescription;

  Aws::String m_rumAppMonitorName;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_portalIdHasBeenSet = false;
  bool m_portalArnHasBeenSet = false;
  bool m_endpointConfigurationHasBeenSet = false;
  bool m_authorizationHasBeenSet = false;
  bool m_portalContentHasBeenSet = false;
  bool m_includedProductArnsHasBeenSet = false;
  bool m_publishStatusHasBeenSet = false;
  bool m_statusExceptionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_publishedAtHasBeenSet = false;
  bool m_publishDescriptionHasBeenSet = false;
  bool m_rumAppMonitorNameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
