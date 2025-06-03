/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/MutualTlsAuthentication.h>
#include <aws/apigatewayv2/model/RoutingMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/DomainNameConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DomainName">AWS
   * API Reference</a></p>
   */
  class DomainName
  {
  public:
    AWS_APIGATEWAYV2_API DomainName() = default;
    AWS_APIGATEWAYV2_API DomainName(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API DomainName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API mapping selection expression.</p>
     */
    inline const Aws::String& GetApiMappingSelectionExpression() const { return m_apiMappingSelectionExpression; }
    inline bool ApiMappingSelectionExpressionHasBeenSet() const { return m_apiMappingSelectionExpressionHasBeenSet; }
    template<typename ApiMappingSelectionExpressionT = Aws::String>
    void SetApiMappingSelectionExpression(ApiMappingSelectionExpressionT&& value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression = std::forward<ApiMappingSelectionExpressionT>(value); }
    template<typename ApiMappingSelectionExpressionT = Aws::String>
    DomainName& WithApiMappingSelectionExpression(ApiMappingSelectionExpressionT&& value) { SetApiMappingSelectionExpression(std::forward<ApiMappingSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainName& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDomainNameArn() const { return m_domainNameArn; }
    inline bool DomainNameArnHasBeenSet() const { return m_domainNameArnHasBeenSet; }
    template<typename DomainNameArnT = Aws::String>
    void SetDomainNameArn(DomainNameArnT&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::forward<DomainNameArnT>(value); }
    template<typename DomainNameArnT = Aws::String>
    DomainName& WithDomainNameArn(DomainNameArnT&& value) { SetDomainNameArn(std::forward<DomainNameArnT>(value)); return *this;}
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
    DomainName& WithDomainNameConfigurations(DomainNameConfigurationsT&& value) { SetDomainNameConfigurations(std::forward<DomainNameConfigurationsT>(value)); return *this;}
    template<typename DomainNameConfigurationsT = DomainNameConfiguration>
    DomainName& AddDomainNameConfigurations(DomainNameConfigurationsT&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.emplace_back(std::forward<DomainNameConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const { return m_mutualTlsAuthentication; }
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthentication>
    void SetMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::forward<MutualTlsAuthenticationT>(value); }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthentication>
    DomainName& WithMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { SetMutualTlsAuthentication(std::forward<MutualTlsAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing mode.</p>
     */
    inline RoutingMode GetRoutingMode() const { return m_routingMode; }
    inline bool RoutingModeHasBeenSet() const { return m_routingModeHasBeenSet; }
    inline void SetRoutingMode(RoutingMode value) { m_routingModeHasBeenSet = true; m_routingMode = value; }
    inline DomainName& WithRoutingMode(RoutingMode value) { SetRoutingMode(value); return *this;}
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
    DomainName& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DomainName& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_apiMappingSelectionExpression;
    bool m_apiMappingSelectionExpressionHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainNameArn;
    bool m_domainNameArnHasBeenSet = false;

    Aws::Vector<DomainNameConfiguration> m_domainNameConfigurations;
    bool m_domainNameConfigurationsHasBeenSet = false;

    MutualTlsAuthentication m_mutualTlsAuthentication;
    bool m_mutualTlsAuthenticationHasBeenSet = false;

    RoutingMode m_routingMode{RoutingMode::NOT_SET};
    bool m_routingModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
