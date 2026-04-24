/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/Authorization.h>
#include <aws/apigatewayv2/model/EndpointConfigurationRequest.h>
#include <aws/apigatewayv2/model/PortalContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>The request body for the patch operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdatePortalRequest">AWS
 * API Reference</a></p>
 */
class UpdatePortalRequest : public ApiGatewayV2Request {
 public:
  AWS_APIGATEWAYV2_API UpdatePortalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePortal"; }

  AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

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
  UpdatePortalRequest& WithAuthorization(AuthorizationT&& value) {
    SetAuthorization(std::forward<AuthorizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents an endpoint configuration.</p>
   */
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
  UpdatePortalRequest& WithIncludedPortalProductArns(IncludedPortalProductArnsT&& value) {
    SetIncludedPortalProductArns(std::forward<IncludedPortalProductArnsT>(value));
    return *this;
  }
  template <typename IncludedPortalProductArnsT = Aws::String>
  UpdatePortalRequest& AddIncludedPortalProductArns(IncludedPortalProductArnsT&& value) {
    m_includedPortalProductArnsHasBeenSet = true;
    m_includedPortalProductArns.emplace_back(std::forward<IncludedPortalProductArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logo URI.</p>
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
  UpdatePortalRequest& WithPortalContent(PortalContentT&& value) {
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
  UpdatePortalRequest& WithPortalId(PortalIdT&& value) {
    SetPortalId(std::forward<PortalIdT>(value));
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
  UpdatePortalRequest& WithRumAppMonitorName(RumAppMonitorNameT&& value) {
    SetRumAppMonitorName(std::forward<RumAppMonitorNameT>(value));
    return *this;
  }
  ///@}
 private:
  Authorization m_authorization;

  EndpointConfigurationRequest m_endpointConfiguration;

  Aws::Vector<Aws::String> m_includedPortalProductArns;

  Aws::String m_logoUri;

  PortalContent m_portalContent;

  Aws::String m_portalId;

  Aws::String m_rumAppMonitorName;
  bool m_authorizationHasBeenSet = false;
  bool m_endpointConfigurationHasBeenSet = false;
  bool m_includedPortalProductArnsHasBeenSet = false;
  bool m_logoUriHasBeenSet = false;
  bool m_portalContentHasBeenSet = false;
  bool m_portalIdHasBeenSet = false;
  bool m_rumAppMonitorNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
