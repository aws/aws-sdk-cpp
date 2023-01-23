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


    /**
     * <p>The API mapping selection expression.</p>
     */
    inline const Aws::String& GetApiMappingSelectionExpression() const{ return m_apiMappingSelectionExpression; }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline bool ApiMappingSelectionExpressionHasBeenSet() const { return m_apiMappingSelectionExpressionHasBeenSet; }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(const Aws::String& value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression = value; }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(Aws::String&& value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression = std::move(value); }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(const char* value) { m_apiMappingSelectionExpressionHasBeenSet = true; m_apiMappingSelectionExpression.assign(value); }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline DomainName& WithApiMappingSelectionExpression(const Aws::String& value) { SetApiMappingSelectionExpression(value); return *this;}

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline DomainName& WithApiMappingSelectionExpression(Aws::String&& value) { SetApiMappingSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline DomainName& WithApiMappingSelectionExpression(const char* value) { SetApiMappingSelectionExpression(value); return *this;}


    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline DomainName& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline DomainName& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline DomainName& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The domain name configurations.</p>
     */
    inline const Aws::Vector<DomainNameConfiguration>& GetDomainNameConfigurations() const{ return m_domainNameConfigurations; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline bool DomainNameConfigurationsHasBeenSet() const { return m_domainNameConfigurationsHasBeenSet; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline void SetDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations = value; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline void SetDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations = std::move(value); }

    /**
     * <p>The domain name configurations.</p>
     */
    inline DomainName& WithDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { SetDomainNameConfigurations(value); return *this;}

    /**
     * <p>The domain name configurations.</p>
     */
    inline DomainName& WithDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { SetDomainNameConfigurations(std::move(value)); return *this;}

    /**
     * <p>The domain name configurations.</p>
     */
    inline DomainName& AddDomainNameConfigurations(const DomainNameConfiguration& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.push_back(value); return *this; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline DomainName& AddDomainNameConfigurations(DomainNameConfiguration&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const{ return m_mutualTlsAuthentication; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline void SetMutualTlsAuthentication(const MutualTlsAuthentication& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = value; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline void SetMutualTlsAuthentication(MutualTlsAuthentication&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::move(value); }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline DomainName& WithMutualTlsAuthentication(const MutualTlsAuthentication& value) { SetMutualTlsAuthentication(value); return *this;}

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline DomainName& WithMutualTlsAuthentication(MutualTlsAuthentication&& value) { SetMutualTlsAuthentication(std::move(value)); return *this;}


    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline DomainName& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
