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
    AWS_APIGATEWAYV2_API CreateDomainNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomainName"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name.</p>
     */
    inline CreateDomainNameRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


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
    inline CreateDomainNameRequest& WithDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { SetDomainNameConfigurations(value); return *this;}

    /**
     * <p>The domain name configurations.</p>
     */
    inline CreateDomainNameRequest& WithDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { SetDomainNameConfigurations(std::move(value)); return *this;}

    /**
     * <p>The domain name configurations.</p>
     */
    inline CreateDomainNameRequest& AddDomainNameConfigurations(const DomainNameConfiguration& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.push_back(value); return *this; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline CreateDomainNameRequest& AddDomainNameConfigurations(DomainNameConfiguration&& value) { m_domainNameConfigurationsHasBeenSet = true; m_domainNameConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline const MutualTlsAuthenticationInput& GetMutualTlsAuthentication() const{ return m_mutualTlsAuthentication; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline bool MutualTlsAuthenticationHasBeenSet() const { return m_mutualTlsAuthenticationHasBeenSet; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline void SetMutualTlsAuthentication(const MutualTlsAuthenticationInput& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = value; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline void SetMutualTlsAuthentication(MutualTlsAuthenticationInput&& value) { m_mutualTlsAuthenticationHasBeenSet = true; m_mutualTlsAuthentication = std::move(value); }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline CreateDomainNameRequest& WithMutualTlsAuthentication(const MutualTlsAuthenticationInput& value) { SetMutualTlsAuthentication(value); return *this;}

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline CreateDomainNameRequest& WithMutualTlsAuthentication(MutualTlsAuthenticationInput&& value) { SetMutualTlsAuthentication(std::move(value)); return *this;}


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
    inline CreateDomainNameRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline CreateDomainNameRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline CreateDomainNameRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline CreateDomainNameRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline CreateDomainNameRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline CreateDomainNameRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline CreateDomainNameRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<DomainNameConfiguration> m_domainNameConfigurations;
    bool m_domainNameConfigurationsHasBeenSet = false;

    MutualTlsAuthenticationInput m_mutualTlsAuthentication;
    bool m_mutualTlsAuthenticationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
