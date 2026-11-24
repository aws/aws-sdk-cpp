/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/Authorization.h>
#include <aws/apiportal/model/EndpointConfigurationRequest.h>
#include <aws/apiportal/model/PortalContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class UpdatePortalRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API UpdatePortalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePortal"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

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
  UpdatePortalRequest& WithPortalId(PortalIdT&& value) {
    SetPortalId(std::forward<PortalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new display name, description, and theme. Omit it to keep the current
   * values.</p>
   */
  inline const PortalContent& GetPortalContent() const { return m_portalContent; }
  inline bool PortalContentHasBeenSet() const { return m_portalContentHasBeenSet; }
  template <typename PortalContentT = PortalContent>
  void SetPortalContent(PortalContentT&& value) {
    m_portalContentHasBeenSet = true;
    m_portalContent = std::forward<PortalContentT>(value);
  }
  template <typename PortalContentT = PortalContent>
  UpdatePortalRequest& WithPortalContent(PortalContentT&& value) {
    SetPortalContent(std::forward<PortalContentT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EndpointConfigurationRequest& GetEndpointConfiguration() const { return m_endpointConfiguration; }
  inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
  template <typename EndpointConfigurationT = EndpointConfigurationRequest>
  void SetEndpointConfiguration(EndpointConfigurationT&& value) {
    m_endpointConfigurationHasBeenSet = true;
    m_endpointConfiguration = std::forward<EndpointConfigurationT>(value);
  }
  template <typename EndpointConfigurationT = EndpointConfigurationRequest>
  UpdatePortalRequest& WithEndpointConfiguration(EndpointConfigurationT&& value) {
    SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new authorization settings. Omit it to keep the current settings.</p>
   */
  inline const Authorization& GetAuthorization() const { return m_authorization; }
  inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
  template <typename AuthorizationT = Authorization>
  void SetAuthorization(AuthorizationT&& value) {
    m_authorizationHasBeenSet = true;
    m_authorization = std::forward<AuthorizationT>(value);
  }
  template <typename AuthorizationT = Authorization>
  UpdatePortalRequest& WithAuthorization(AuthorizationT&& value) {
    SetAuthorization(std::forward<AuthorizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new CloudWatch RUM app monitor name. Omit it to keep the current
   * value.</p>
   */
  inline const Aws::String& GetRumAppMonitorName() const { return m_rumAppMonitorName; }
  inline bool RumAppMonitorNameHasBeenSet() const { return m_rumAppMonitorNameHasBeenSet; }
  template <typename RumAppMonitorNameT = Aws::String>
  void SetRumAppMonitorName(RumAppMonitorNameT&& value) {
    m_rumAppMonitorNameHasBeenSet = true;
    m_rumAppMonitorName = std::forward<RumAppMonitorNameT>(value);
  }
  template <typename RumAppMonitorNameT = Aws::String>
  UpdatePortalRequest& WithRumAppMonitorName(RumAppMonitorNameT&& value) {
    SetRumAppMonitorName(std::forward<RumAppMonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new list of product ARNs, up to 200. It replaces the current list. Omit
   * it to keep the current list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedProductArns() const { return m_includedProductArns; }
  inline bool IncludedProductArnsHasBeenSet() const { return m_includedProductArnsHasBeenSet; }
  template <typename IncludedProductArnsT = Aws::Vector<Aws::String>>
  void SetIncludedProductArns(IncludedProductArnsT&& value) {
    m_includedProductArnsHasBeenSet = true;
    m_includedProductArns = std::forward<IncludedProductArnsT>(value);
  }
  template <typename IncludedProductArnsT = Aws::Vector<Aws::String>>
  UpdatePortalRequest& WithIncludedProductArns(IncludedProductArnsT&& value) {
    SetIncludedProductArns(std::forward<IncludedProductArnsT>(value));
    return *this;
  }
  template <typename IncludedProductArnsT = Aws::String>
  UpdatePortalRequest& AddIncludedProductArns(IncludedProductArnsT&& value) {
    m_includedProductArnsHasBeenSet = true;
    m_includedProductArns.emplace_back(std::forward<IncludedProductArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new S3 location of the portal logo, in the form
   * <code>s3://bucket/key</code>. An empty string removes the logo. Omit it to keep
   * the current logo.</p>
   */
  inline const Aws::String& GetLogoUri() const { return m_logoUri; }
  inline bool LogoUriHasBeenSet() const { return m_logoUriHasBeenSet; }
  template <typename LogoUriT = Aws::String>
  void SetLogoUri(LogoUriT&& value) {
    m_logoUriHasBeenSet = true;
    m_logoUri = std::forward<LogoUriT>(value);
  }
  template <typename LogoUriT = Aws::String>
  UpdatePortalRequest& WithLogoUri(LogoUriT&& value) {
    SetLogoUri(std::forward<LogoUriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_portalId;

  PortalContent m_portalContent;

  EndpointConfigurationRequest m_endpointConfiguration;

  Authorization m_authorization;

  Aws::String m_rumAppMonitorName;

  Aws::Vector<Aws::String> m_includedProductArns;

  Aws::String m_logoUri;
  bool m_portalIdHasBeenSet = false;
  bool m_portalContentHasBeenSet = false;
  bool m_endpointConfigurationHasBeenSet = false;
  bool m_authorizationHasBeenSet = false;
  bool m_rumAppMonitorNameHasBeenSet = false;
  bool m_includedProductArnsHasBeenSet = false;
  bool m_logoUriHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
