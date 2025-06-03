/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/MutualTlsAuthenticationInput.h>
#include <aws/apigatewayv2/model/RoutingMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/DomainNameConfiguration.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Creates a new DomainName resource to represent a domain name.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDomainNameRequest">AWS
   * API Reference</a></p>
   */
  class CreateDomainNameRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API CreateDomainNameRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomainName"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateDomainNameRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name configurations.</p>
     */
    inline const Aws::Vector<DomainNameConfiguration>& GetDomainNameConfigurations() const { return m_domainNameConfigurations; }
    inline bool DomainNameConfigurationsHasBeenSet() const { return m_domainNameConfigurationsHasBeenSet; }
    template<typename DomainNameConfigurationsT = Aws::Vector<DomainNameConfiguration>>
    void SetDomainNameConfigurations(DomainNameConfigurationsT&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations = std::forward<DomainNameConfigurationsT>(value); }
    template<typename DomainNameConfigurationsT = Aws::Vector<DomainNameConfiguration>>
    CreateDomainNameRequest& WithDomainNameConfigurations(DomainNameConfigurationsT&& value) { SetDomainNameConfigurations(std::forward<DomainNameConfigurationsT>(value)); return *this;}
    template<typename DomainNameConfigurationsT = DomainNameConfiguration>
    CreateDomainNameRequest& AddDomainNameConfigurations(DomainNameConfigurationsT&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.emplace_back(std::forward<DomainNameConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline const MutualTlsAuthenticationInput& GetMutualTlsAuthentication() const { return m_mutualTlsAuthentication; }
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthenticationInput>
    void SetMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::forward<MutualTlsAuthenticationT>(value); }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthenticationInput>
    CreateDomainNameRequest& WithMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { SetMutualTlsAuthentication(std::forward<MutualTlsAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing mode.</p>
     */
    inline RoutingMode GetRoutingMode() const { return m_routingMode; }
    inline bool RoutingModeHasBeenSet() const { return m_routingModeHasBeenSet; }
    inline void SetRoutingMode(RoutingMode value) { m_routingModeHasBeenSet = true; m_routingMode = value; }
    inline CreateDomainNameRequest& WithRoutingMode(RoutingMode value) { SetRoutingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDomainNameRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDomainNameRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<DomainNameConfiguration> m_domainNameConfigurations;
    bool m_domainNameConfigurationsHasBeenSet = false;

    MutualTlsAuthenticationInput m_mutualTlsAuthentication;
    bool m_mutualTlsAuthenticationHasBeenSet = false;

    RoutingMode m_routingMode{RoutingMode::NOT_SET};
    bool m_routingModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
