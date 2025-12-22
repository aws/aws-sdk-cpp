/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/Authorization.h>
#include <aws/apigatewayv2/model/EndpointConfigurationResponse.h>
#include <aws/apigatewayv2/model/PortalContent.h>
#include <aws/apigatewayv2/model/Preview.h>
#include <aws/apigatewayv2/model/PublishStatus.h>
#include <aws/apigatewayv2/model/StatusException.h>
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
namespace ApiGatewayV2 {
namespace Model {
class UpdatePortalResult {
 public:
  AWS_APIGATEWAYV2_API UpdatePortalResult() = default;
  AWS_APIGATEWAYV2_API UpdatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIGATEWAYV2_API UpdatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The authorization for the portal.</p>
   */
  inline const Authorization& GetAuthorization() const { return m_authorization; }
  template <typename AuthorizationT = Authorization>
  void SetAuthorization(AuthorizationT&& value) {
    m_authorizationHasBeenSet = true;
    m_authorization = std::forward<AuthorizationT>(value);
  }
  template <typename AuthorizationT = Authorization>
  UpdatePortalResult& WithAuthorization(AuthorizationT&& value) {
    SetAuthorization(std::forward<AuthorizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint configuration.</p>
   */
  inline const EndpointConfigurationResponse& GetEndpointConfiguration() const { return m_endpointConfiguration; }
  template <typename EndpointConfigurationT = EndpointConfigurationResponse>
  void SetEndpointConfiguration(EndpointConfigurationT&& value) {
    m_endpointConfigurationHasBeenSet = true;
    m_endpointConfiguration = std::forward<EndpointConfigurationT>(value);
  }
  template <typename EndpointConfigurationT = EndpointConfigurationResponse>
  UpdatePortalResult& WithEndpointConfiguration(EndpointConfigurationT&& value) {
    SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the portal products included in the portal.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedPortalProductArns() const { return m_includedPortalProductArns; }
  template <typename IncludedPortalProductArnsT = Aws::Vector<Aws::String>>
  void SetIncludedPortalProductArns(IncludedPortalProductArnsT&& value) {
    m_includedPortalProductArnsHasBeenSet = true;
    m_includedPortalProductArns = std::forward<IncludedPortalProductArnsT>(value);
  }
  template <typename IncludedPortalProductArnsT = Aws::Vector<Aws::String>>
  UpdatePortalResult& WithIncludedPortalProductArns(IncludedPortalProductArnsT&& value) {
    SetIncludedPortalProductArns(std::forward<IncludedPortalProductArnsT>(value));
    return *this;
  }
  template <typename IncludedPortalProductArnsT = Aws::String>
  UpdatePortalResult& AddIncludedPortalProductArns(IncludedPortalProductArnsT&& value) {
    m_includedPortalProductArnsHasBeenSet = true;
    m_includedPortalProductArns.emplace_back(std::forward<IncludedPortalProductArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the portal was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  UpdatePortalResult& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the portal was last published.</p>
   */
  inline const Aws::Utils::DateTime& GetLastPublished() const { return m_lastPublished; }
  template <typename LastPublishedT = Aws::Utils::DateTime>
  void SetLastPublished(LastPublishedT&& value) {
    m_lastPublishedHasBeenSet = true;
    m_lastPublished = std::forward<LastPublishedT>(value);
  }
  template <typename LastPublishedT = Aws::Utils::DateTime>
  UpdatePortalResult& WithLastPublished(LastPublishedT&& value) {
    SetLastPublished(std::forward<LastPublishedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description associated with the last time the portal was published.</p>
   */
  inline const Aws::String& GetLastPublishedDescription() const { return m_lastPublishedDescription; }
  template <typename LastPublishedDescriptionT = Aws::String>
  void SetLastPublishedDescription(LastPublishedDescriptionT&& value) {
    m_lastPublishedDescriptionHasBeenSet = true;
    m_lastPublishedDescription = std::forward<LastPublishedDescriptionT>(value);
  }
  template <typename LastPublishedDescriptionT = Aws::String>
  UpdatePortalResult& WithLastPublishedDescription(LastPublishedDescriptionT&& value) {
    SetLastPublishedDescription(std::forward<LastPublishedDescriptionT>(value));
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
  UpdatePortalResult& WithPortalArn(PortalArnT&& value) {
    SetPortalArn(std::forward<PortalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains the content that is visible to portal consumers including the
   * themes, display names, and description.</p>
   */
  inline const PortalContent& GetPortalContent() const { return m_portalContent; }
  template <typename PortalContentT = PortalContent>
  void SetPortalContent(PortalContentT&& value) {
    m_portalContentHasBeenSet = true;
    m_portalContent = std::forward<PortalContentT>(value);
  }
  template <typename PortalContentT = PortalContent>
  UpdatePortalResult& WithPortalContent(PortalContentT&& value) {
    SetPortalContent(std::forward<PortalContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The portal identifier.</p>
   */
  inline const Aws::String& GetPortalId() const { return m_portalId; }
  template <typename PortalIdT = Aws::String>
  void SetPortalId(PortalIdT&& value) {
    m_portalIdHasBeenSet = true;
    m_portalId = std::forward<PortalIdT>(value);
  }
  template <typename PortalIdT = Aws::String>
  UpdatePortalResult& WithPortalId(PortalIdT&& value) {
    SetPortalId(std::forward<PortalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the preview endpoint and the any possible error messages during
   * preview generation.</p>
   */
  inline const Preview& GetPreview() const { return m_preview; }
  template <typename PreviewT = Preview>
  void SetPreview(PreviewT&& value) {
    m_previewHasBeenSet = true;
    m_preview = std::forward<PreviewT>(value);
  }
  template <typename PreviewT = Preview>
  UpdatePortalResult& WithPreview(PreviewT&& value) {
    SetPreview(std::forward<PreviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publishStatus.</p>
   */
  inline PublishStatus GetPublishStatus() const { return m_publishStatus; }
  inline void SetPublishStatus(PublishStatus value) {
    m_publishStatusHasBeenSet = true;
    m_publishStatus = value;
  }
  inline UpdatePortalResult& WithPublishStatus(PublishStatus value) {
    SetPublishStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch RUM app monitor name.</p>
   */
  inline const Aws::String& GetRumAppMonitorName() const { return m_rumAppMonitorName; }
  template <typename RumAppMonitorNameT = Aws::String>
  void SetRumAppMonitorName(RumAppMonitorNameT&& value) {
    m_rumAppMonitorNameHasBeenSet = true;
    m_rumAppMonitorName = std::forward<RumAppMonitorNameT>(value);
  }
  template <typename RumAppMonitorNameT = Aws::String>
  UpdatePortalResult& WithRumAppMonitorName(RumAppMonitorNameT&& value) {
    SetRumAppMonitorName(std::forward<RumAppMonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status exception information.</p>
   */
  inline const StatusException& GetStatusException() const { return m_statusException; }
  template <typename StatusExceptionT = StatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = StatusException>
  UpdatePortalResult& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The collection of tags. Each tag element is associated with a given
   * resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  UpdatePortalResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  UpdatePortalResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  UpdatePortalResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Authorization m_authorization;

  EndpointConfigurationResponse m_endpointConfiguration;

  Aws::Vector<Aws::String> m_includedPortalProductArns;

  Aws::Utils::DateTime m_lastModified{};

  Aws::Utils::DateTime m_lastPublished{};

  Aws::String m_lastPublishedDescription;

  Aws::String m_portalArn;

  PortalContent m_portalContent;

  Aws::String m_portalId;

  Preview m_preview;

  PublishStatus m_publishStatus{PublishStatus::NOT_SET};

  Aws::String m_rumAppMonitorName;

  StatusException m_statusException;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  bool m_authorizationHasBeenSet = false;
  bool m_endpointConfigurationHasBeenSet = false;
  bool m_includedPortalProductArnsHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_lastPublishedHasBeenSet = false;
  bool m_lastPublishedDescriptionHasBeenSet = false;
  bool m_portalArnHasBeenSet = false;
  bool m_portalContentHasBeenSet = false;
  bool m_portalIdHasBeenSet = false;
  bool m_previewHasBeenSet = false;
  bool m_publishStatusHasBeenSet = false;
  bool m_rumAppMonitorNameHasBeenSet = false;
  bool m_statusExceptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
