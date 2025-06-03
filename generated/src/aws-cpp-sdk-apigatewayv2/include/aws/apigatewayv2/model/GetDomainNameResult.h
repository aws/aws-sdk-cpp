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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{
  class GetDomainNameResult
  {
  public:
    AWS_APIGATEWAYV2_API GetDomainNameResult() = default;
    AWS_APIGATEWAYV2_API GetDomainNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API GetDomainNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The API mapping selection expression.</p>
     */
    inline const Aws::String& GetApiMappingSelectionExpression() const { return m_apiMappingSelectionExpression; }
    template<typename ApiMappingSelectionExpressionT = Aws::String>
    void SetApiMappingSelectionExpression(ApiMappingSelectionExpressionT&& value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression = std::forward<ApiMappingSelectionExpressionT>(value); }
    template<typename ApiMappingSelectionExpressionT = Aws::String>
    GetDomainNameResult& WithApiMappingSelectionExpression(ApiMappingSelectionExpressionT&& value) { SetApiMappingSelectionExpression(std::forward<ApiMappingSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetDomainNameResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDomainNameArn() const { return m_domainNameArn; }
    template<typename DomainNameArnT = Aws::String>
    void SetDomainNameArn(DomainNameArnT&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::forward<DomainNameArnT>(value); }
    template<typename DomainNameArnT = Aws::String>
    GetDomainNameResult& WithDomainNameArn(DomainNameArnT&& value) { SetDomainNameArn(std::forward<DomainNameArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name configurations.</p>
     */
    inline const Aws::Vector<DomainNameConfiguration>& GetDomainNameConfigurations() const { return m_domainNameConfigurations; }
    template<typename DomainNameConfigurationsT = Aws::Vector<DomainNameConfiguration>>
    void SetDomainNameConfigurations(DomainNameConfigurationsT&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations = std::forward<DomainNameConfigurationsT>(value); }
    template<typename DomainNameConfigurationsT = Aws::Vector<DomainNameConfiguration>>
    GetDomainNameResult& WithDomainNameConfigurations(DomainNameConfigurationsT&& value) { SetDomainNameConfigurations(std::forward<DomainNameConfigurationsT>(value)); return *this;}
    template<typename DomainNameConfigurationsT = DomainNameConfiguration>
    GetDomainNameResult& AddDomainNameConfigurations(DomainNameConfigurationsT&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.emplace_back(std::forward<DomainNameConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const { return m_mutualTlsAuthentication; }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthentication>
    void SetMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::forward<MutualTlsAuthenticationT>(value); }
    template<typename MutualTlsAuthenticationT = MutualTlsAuthentication>
    GetDomainNameResult& WithMutualTlsAuthentication(MutualTlsAuthenticationT&& value) { SetMutualTlsAuthentication(std::forward<MutualTlsAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing mode.</p>
     */
    inline RoutingMode GetRoutingMode() const { return m_routingMode; }
    inline void SetRoutingMode(RoutingMode value) { m_routingModeHasBeenSet = true; m_routingMode = value; }
    inline GetDomainNameResult& WithRoutingMode(RoutingMode value) { SetRoutingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetDomainNameResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetDomainNameResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainNameResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
