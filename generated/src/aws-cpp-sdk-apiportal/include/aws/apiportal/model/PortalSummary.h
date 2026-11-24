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
#include <aws/apiportal/model/Preview.h>
#include <aws/apiportal/model/PublishStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace APIPortal {
namespace Model {

/**
 * <p>A summary of a portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/PortalSummary">AWS
 * API Reference</a></p>
 */
class PortalSummary {
 public:
  AWS_APIPORTAL_API PortalSummary() = default;
  AWS_APIPORTAL_API PortalSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API PortalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the portal.</p>
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
   * <p>The domain configuration of the portal.</p>
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
   * <p>How readers sign in to the portal, and whether fine-grained access control is
   * on.</p>
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
   * <p>The portal's display name, description, and theme.</p>
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
   * <p>The ARNs of the products the portal includes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedProductArns() const { return m_includedProductArns; }
  inline bool IncludedProductArnsHasBeenSet() const { return m_includedProductArnsHasBeenSet; }
  template <typename IncludedProductArnsT = Aws::Vector<Aws::String>>
  void SetIncludedProductArns(IncludedProductArnsT&& value) {
    m_includedProductArnsHasBeenSet = true;
    m_includedProductArns = std::forward<IncludedProductArnsT>(value);
  }
  template <typename IncludedProductArnsT = Aws::Vector<Aws::String>>
  PortalSummary& WithIncludedProductArns(IncludedProductArnsT&& value) {
    SetIncludedProductArns(std::forward<IncludedProductArnsT>(value));
    return *this;
  }
  template <typename IncludedProductArnsT = Aws::String>
  PortalSummary& AddIncludedProductArns(IncludedProductArnsT&& value) {
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

  inline const PortalStatusException& GetStatusException() const { return m_statusException; }
  inline bool StatusExceptionHasBeenSet() const { return m_statusExceptionHasBeenSet; }
  template <typename StatusExceptionT = PortalStatusException>
  void SetStatusException(StatusExceptionT&& value) {
    m_statusExceptionHasBeenSet = true;
    m_statusException = std::forward<StatusExceptionT>(value);
  }
  template <typename StatusExceptionT = PortalStatusException>
  PortalSummary& WithStatusException(StatusExceptionT&& value) {
    SetStatusException(std::forward<StatusExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PortalSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the portal was last published.</p>
   */
  inline const Aws::Utils::DateTime& GetPublishedAt() const { return m_publishedAt; }
  inline bool PublishedAtHasBeenSet() const { return m_publishedAtHasBeenSet; }
  template <typename PublishedAtT = Aws::Utils::DateTime>
  void SetPublishedAt(PublishedAtT&& value) {
    m_publishedAtHasBeenSet = true;
    m_publishedAt = std::forward<PublishedAtT>(value);
  }
  template <typename PublishedAtT = Aws::Utils::DateTime>
  PortalSummary& WithPublishedAt(PublishedAtT&& value) {
    SetPublishedAt(std::forward<PublishedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description supplied with the most recent publish request.</p>
   */
  inline const Aws::String& GetPublishDescription() const { return m_publishDescription; }
  inline bool PublishDescriptionHasBeenSet() const { return m_publishDescriptionHasBeenSet; }
  template <typename PublishDescriptionT = Aws::String>
  void SetPublishDescription(PublishDescriptionT&& value) {
    m_publishDescriptionHasBeenSet = true;
    m_publishDescription = std::forward<PublishDescriptionT>(value);
  }
  template <typename PublishDescriptionT = Aws::String>
  PortalSummary& WithPublishDescription(PublishDescriptionT&& value) {
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
   * <p>The most recent preview of the portal. Absent if no preview has been
   * created.</p>
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

  Preview m_preview;
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
  bool m_previewHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
