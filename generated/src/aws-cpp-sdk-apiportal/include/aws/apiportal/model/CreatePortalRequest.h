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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class CreatePortalRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API CreatePortalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePortal"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

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
  CreatePortalRequest& WithPortalContent(PortalContentT&& value) {
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
  CreatePortalRequest& WithEndpointConfiguration(EndpointConfigurationT&& value) {
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
  CreatePortalRequest& WithAuthorization(AuthorizationT&& value) {
    SetAuthorization(std::forward<AuthorizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the products the portal includes, up to 200.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedProductArns() const { return m_includedProductArns; }
  inline bool IncludedProductArnsHasBeenSet() const { return m_includedProductArnsHasBeenSet; }
  template <typename IncludedProductArnsT = Aws::Vector<Aws::String>>
  void SetIncludedProductArns(IncludedProductArnsT&& value) {
    m_includedProductArnsHasBeenSet = true;
    m_includedProductArns = std::forward<IncludedProductArnsT>(value);
  }
  template <typename IncludedProductArnsT = Aws::Vector<Aws::String>>
  CreatePortalRequest& WithIncludedProductArns(IncludedProductArnsT&& value) {
    SetIncludedProductArns(std::forward<IncludedProductArnsT>(value));
    return *this;
  }
  template <typename IncludedProductArnsT = Aws::String>
  CreatePortalRequest& AddIncludedProductArns(IncludedProductArnsT&& value) {
    m_includedProductArnsHasBeenSet = true;
    m_includedProductArns.emplace_back(std::forward<IncludedProductArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 location of the portal logo, in the form
   * <code>s3://bucket/key</code>.</p>
   */
  inline const Aws::String& GetLogoUri() const { return m_logoUri; }
  inline bool LogoUriHasBeenSet() const { return m_logoUriHasBeenSet; }
  template <typename LogoUriT = Aws::String>
  void SetLogoUri(LogoUriT&& value) {
    m_logoUriHasBeenSet = true;
    m_logoUri = std::forward<LogoUriT>(value);
  }
  template <typename LogoUriT = Aws::String>
  CreatePortalRequest& WithLogoUri(LogoUriT&& value) {
    SetLogoUri(std::forward<LogoUriT>(value));
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
  CreatePortalRequest& WithRumAppMonitorName(RumAppMonitorNameT&& value) {
    SetRumAppMonitorName(std::forward<RumAppMonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreatePortalRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreatePortalRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  PortalContent m_portalContent;

  EndpointConfigurationRequest m_endpointConfiguration;

  Authorization m_authorization;

  Aws::Vector<Aws::String> m_includedProductArns;

  Aws::String m_logoUri;

  Aws::String m_rumAppMonitorName;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_portalContentHasBeenSet = false;
  bool m_endpointConfigurationHasBeenSet = false;
  bool m_authorizationHasBeenSet = false;
  bool m_includedProductArnsHasBeenSet = false;
  bool m_logoUriHasBeenSet = false;
  bool m_rumAppMonitorNameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
