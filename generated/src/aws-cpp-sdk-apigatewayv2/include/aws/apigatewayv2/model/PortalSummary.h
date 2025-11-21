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
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Represents a portal summary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/PortalSummary">AWS
 * API Reference</a></p>
 */
class PortalSummary {
 public:
  AWS_APIGATEWAYV2_API PortalSummary() = default;
  AWS_APIGATEWAYV2_API PortalSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API PortalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authorization of the portal.</p>
   */
  inline const Authorization& GetAuthorization() const { return m_authorization; }
  inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
  template <typename AuthorizationT = Authorization>
  void SetAuthorization(AuthorizationT&& value) {
    m_authorizationHasBeenSet = true;
    m_authorization = std::forward<AuthorizationT>(value);
  }
  template <typename AuthorizationT = Authorization>
  PortalSummary& WithAuthorization(AuthorizationT&& value) {
    SetAuthorization(std::forward<AuthorizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint configuration of the portal.</p>
   */
  inline const EndpointConfigurationResponse& GetEndpointConfiguration() const { return m_endpointConfiguration; }
  inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
  template <typename EndpointConfigurationT = EndpointConfigurationResponse>
  void SetEndpointConfiguration(EndpointConfigurationT&& value) {
    m_endpointConfigurationHasBeenSet = true;
    m_endpointConfiguration = std::forward<EndpointConfigurationT>(value);
  }
  template <typename EndpointConfigurationT = EndpointConfigurationResponse>
  PortalSummary& WithEndpointConfiguration(EndpointConfigurationT&& value) {
    SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the portal products included in the portal.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedPortalProductArns() const { return m_includedPortalProductArns; }
  inline bool IncludedPortalProductArnsHasBeenSet() const { return m_includedPortalProductArnsHasBeenSet; }
  template <typename IncludedPortalProductArnsT = Aws::Vector<Aws::String>>
  void SetIncludedPortalProductArns(IncludedPortalProductArnsT&& value) {
    m_includedPortalProductArnsHasBeenSet = true;
    m_includedPortalProductArns = std::forward<IncludedPortalProductArnsT>(value);
  }
  template <typename IncludedPortalProductArnsT = Aws::Vector<Aws::String>>
  PortalSummary& WithIncludedPortalProductArns(IncludedPortalProductArnsT&& value) {
    SetIncludedPortalProductArns(std::forward<IncludedPortalProductArnsT>(value));
    return *this;
  }
  template <typename IncludedPortalProductArnsT = Aws::String>
  PortalSummary& AddIncludedPortalProductArns(IncludedPortalProductArnsT&& value) {
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
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  PortalSummary& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the portal was last published.</p>
   */
  inline const Aws::Utils::DateTime& GetLastPublished() const { return m_lastPublished; }
  inline bool LastPublishedHasBeenSet() const { return m_lastPublishedHasBeenSet; }
  template <typename LastPublishedT = Aws::Utils::DateTime>
  void SetLastPublished(LastPublishedT&& value) {
    m_lastPublishedHasBeenSet = true;
    m_lastPublished = std::forward<LastPublishedT>(value);
  }
  template <typename LastPublishedT = Aws::Utils::DateTime>
  PortalSummary& WithLastPublished(LastPublishedT&& value) {
    SetLastPublished(std::forward<LastPublishedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the portal the last time it was published.</p>
   */
  inline const Aws::String& GetLastPublishedDescription() const { return m_lastPublishedDescription; }
  inline bool LastPublishedDescriptionHasBeenSet() const { return m_lastPublishedDescriptionHasBeenSet; }
  template <typename LastPublishedDescriptionT = Aws::String>
  void SetLastPublishedDescription(LastPublishedDescriptionT&& value) {
    m_lastPublishedDescriptionHasBeenSet = true;
    m_lastPublishedDescription = std::forward<LastPublishedDescriptionT>(value);
  }
  template <typename LastPublishedDescriptionT = Aws::String>
  PortalSummary& WithLastPublishedDescription(LastPublishedDescriptionT&& value) {
    SetLastPublishedDescription(std::forward<LastPublishedDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the portal.</p>
   */
  inline const Aws::String& GetPortalArn() const { return m_portalArn; }
  inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }
  template <typename PortalArnT = Aws::String>
  void SetPortalArn(PortalArnT&& value) {
    m_portalArnHasBeenSet = true;
    m_portalArn = std::forward<PortalArnT>(value);
  }
  template <typename PortalArnT = Aws::String>
  PortalSummary& WithPortalArn(PortalArnT&& value) {
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
  inline bool PortalContentHasBeenSet() const { return m_portalContentHasBeenSet; }
  template <typename PortalContentT = PortalContent>
  void SetPortalContent(PortalContentT&& value) {
    m_portalContentHasBeenSet = true;
    m_portalContent = std::forward<PortalContentT>(value);
  }
  template <typename PortalContentT = PortalContent>
  PortalSummary& WithPortalContent(PortalContentT&& value) {
    SetPortalContent(std::forward<PortalContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The portal identifier.</p>
   */
  inline const Aws::String& GetPortalId() const { return m_portalId; }
  inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }
  template <typename PortalIdT = Aws::String>
  void SetPortalId(PortalIdT&& value) {
    m_portalIdHasBeenSet = true;
    m_portalId = std::forward<PortalIdT>(value);
  }
  template <typename PortalIdT = Aws::String>
  PortalSummary& WithPortalId(PortalIdT&& value) {
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
  inline bool PreviewHasBeenSet() const { return m_previewHasBeenSet; }
  template <typename PreviewT = Preview>
  void SetPreview(PreviewT&& value) {
    m_previewHasBeenSet = true;
    m_preview = std::forward<PreviewT>(value);
  }
  template <typename PreviewT = Preview>
  PortalSummary& WithPreview(PreviewT&& value) {
    SetPreview(std::forward<PreviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publish status.</p>
   */
  inline PublishStatus GetPublishStatus() const { return m_publishStatus; }
  inline bool PublishStatusHasBeenSet() const { return m_publishStatusHasBeenSet; }
  inline void SetPublishStatus(PublishStatus value) {
    m_publishStatusHasBeenSet = true;
    m_publishStatus = value;
  }
  inline PortalSummary& WithPublishStatus(PublishStatus value) {
    SetPublishStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch RUM app monitor name.</p>
   */
  inline const Aws::String& GetRumAppMonitorName() const { return m_rumAppMonitorName; }
  inline bool RumAppMonitorNameHasBeenSet() const { return m_rumAppMonitorNameHasBeenSet; }
  template <typename RumAppMonitorNameT = Aws::String>
  void SetRumAppMonitorName(RumAppMonitorNameT&& value) {
    m_rumAppMonitorNameHasBeenSet = true;
    m_rumAppMonitorName = std::forward<RumAppMonitorNameT>(value);
  }
  template <typename RumAppMonitorNameT = Aws::String>
  PortalSummary& WithRumAppMonitorName(RumAppMonitorNameT&& value) {
    SetRumAppMonitorName(std::forward<RumAppMonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status exception information.</p>
   */
  inline const StatusException& GetStatusException() const { return m_statusException; }
  inline bool StatusExceptionHasBeenSet() const { return m_statusExceptionHasBeenSet; }
  template <typename StatusExceptionT = StatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = StatusException>
  PortalSummary& WithStatusException(StatusExceptionT&& value) {
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
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PortalSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PortalSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Authorization m_authorization;
  bool m_authorizationHasBeenSet = false;

  EndpointConfigurationResponse m_endpointConfiguration;
  bool m_endpointConfigurationHasBeenSet = false;

  Aws::Vector<Aws::String> m_includedPortalProductArns;
  bool m_includedPortalProductArnsHasBeenSet = false;

  Aws::Utils::DateTime m_lastModified{};
  bool m_lastModifiedHasBeenSet = false;

  Aws::Utils::DateTime m_lastPublished{};
  bool m_lastPublishedHasBeenSet = false;

  Aws::String m_lastPublishedDescription;
  bool m_lastPublishedDescriptionHasBeenSet = false;

  Aws::String m_portalArn;
  bool m_portalArnHasBeenSet = false;

  PortalContent m_portalContent;
  bool m_portalContentHasBeenSet = false;

  Aws::String m_portalId;
  bool m_portalIdHasBeenSet = false;

  Preview m_preview;
  bool m_previewHasBeenSet = false;

  PublishStatus m_publishStatus{PublishStatus::NOT_SET};
  bool m_publishStatusHasBeenSet = false;

  Aws::String m_rumAppMonitorName;
  bool m_rumAppMonitorNameHasBeenSet = false;

  StatusException m_statusException;
  bool m_statusExceptionHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
