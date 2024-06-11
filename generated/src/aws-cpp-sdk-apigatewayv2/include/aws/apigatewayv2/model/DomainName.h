/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/MutualTlsAuthentication.h>
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
    AWS_APIGATEWAYV2_API DomainName();
    AWS_APIGATEWAYV2_API DomainName(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API DomainName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API mapping selection expression.</p>
     */
    inline const Aws::String& GetApiMappingSelectionExpression() const{ return m_apiMappingSelectionExpression; }
    inline bool ApiMappingSelectionExpressionHasBeenSet() const { return m_apiMappingSelectionExpressionHasBeenSet; }
    inline void SetApiMappingSelectionExpression(const Aws::String& value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression = value; }
    inline void SetApiMappingSelectionExpression(Aws::String&& value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression = std::move(value); }
    inline void SetApiMappingSelectionExpression(const char* value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression.assign(value); }
    inline DomainName& WithApiMappingSelectionExpression(const Aws::String& value) { SetApiMappingSelectionExpression(value); return *this;}
    inline DomainName& WithApiMappingSelectionExpression(Aws::String&& value) { SetApiMappingSelectionExpression(std::move(value)); return *this;}
    inline DomainName& WithApiMappingSelectionExpression(const char* value) { SetApiMappingSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DomainName& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DomainName& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DomainName& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name configurations.</p>
     */
    inline const Aws::Vector<DomainNameConfiguration>& GetDomainNameConfigurations() const{ return m_domainNameConfigurations; }
    inline bool DomainNameConfigurationsHasBeenSet() const { return m_domainNameConfigurationsHasBeenSet; }
    inline void SetDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations = value; }
    inline void SetDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations = std::move(value); }
    inline DomainName& WithDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { SetDomainNameConfigurations(value); return *this;}
    inline DomainName& WithDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { SetDomainNameConfigurations(std::move(value)); return *this;}
    inline DomainName& AddDomainNameConfigurations(const DomainNameConfiguration& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.push_back(value); return *this; }
    inline DomainName& AddDomainNameConfigurations(DomainNameConfiguration&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const{ return m_mutualTlsAuthentication; }
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }
    inline void SetMutualTlsAuthentication(const MutualTlsAuthentication& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = value; }
    inline void SetMutualTlsAuthentication(MutualTlsAuthentication&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::move(value); }
    inline DomainName& WithMutualTlsAuthentication(const MutualTlsAuthentication& value) { SetMutualTlsAuthentication(value); return *this;}
    inline DomainName& WithMutualTlsAuthentication(MutualTlsAuthentication&& value) { SetMutualTlsAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DomainName& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DomainName& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DomainName& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline DomainName& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DomainName& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DomainName& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DomainName& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DomainName& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DomainName& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_apiMappingSelectionExpression;
    bool m_apiMappingSelectionExpressionHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<DomainNameConfiguration> m_domainNameConfigurations;
    bool m_domainNameConfigurationsHasBeenSet = false;

    MutualTlsAuthentication m_mutualTlsAuthentication;
    bool m_mutualTlsAuthenticationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
