/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EwsAvailabilityProvider.h>
#include <aws/workmail/model/LambdaAvailabilityProvider.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class CreateAvailabilityConfigurationRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API CreateAvailabilityConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAvailabilityConfiguration"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An idempotent token that ensures that an API request is executed only
     * once.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>An idempotent token that ensures that an API request is executed only
     * once.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>An idempotent token that ensures that an API request is executed only
     * once.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>An idempotent token that ensures that an API request is executed only
     * once.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>An idempotent token that ensures that an API request is executed only
     * once.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>An idempotent token that ensures that an API request is executed only
     * once.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>An idempotent token that ensures that an API request is executed only
     * once.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>An idempotent token that ensures that an API request is executed only
     * once.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The WorkMail organization for which the
     * <code>AvailabilityConfiguration</code> will be created.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The WorkMail organization for which the
     * <code>AvailabilityConfiguration</code> will be created.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The WorkMail organization for which the
     * <code>AvailabilityConfiguration</code> will be created.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The WorkMail organization for which the
     * <code>AvailabilityConfiguration</code> will be created.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The WorkMail organization for which the
     * <code>AvailabilityConfiguration</code> will be created.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The WorkMail organization for which the
     * <code>AvailabilityConfiguration</code> will be created.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The WorkMail organization for which the
     * <code>AvailabilityConfiguration</code> will be created.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail organization for which the
     * <code>AvailabilityConfiguration</code> will be created.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The domain to which the provider applies.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain to which the provider applies.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain to which the provider applies.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain to which the provider applies.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain to which the provider applies.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain to which the provider applies.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain to which the provider applies.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain to which the provider applies.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Exchange Web Services (EWS) availability provider definition. The request
     * must contain exactly one provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline const EwsAvailabilityProvider& GetEwsProvider() const{ return m_ewsProvider; }

    /**
     * <p>Exchange Web Services (EWS) availability provider definition. The request
     * must contain exactly one provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline bool EwsProviderHasBeenSet() const { return m_ewsProviderHasBeenSet; }

    /**
     * <p>Exchange Web Services (EWS) availability provider definition. The request
     * must contain exactly one provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline void SetEwsProvider(const EwsAvailabilityProvider& value) { m_ewsProviderHasBeenSet = true; m_ewsProvider = value; }

    /**
     * <p>Exchange Web Services (EWS) availability provider definition. The request
     * must contain exactly one provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline void SetEwsProvider(EwsAvailabilityProvider&& value) { m_ewsProviderHasBeenSet = true; m_ewsProvider = std::move(value); }

    /**
     * <p>Exchange Web Services (EWS) availability provider definition. The request
     * must contain exactly one provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithEwsProvider(const EwsAvailabilityProvider& value) { SetEwsProvider(value); return *this;}

    /**
     * <p>Exchange Web Services (EWS) availability provider definition. The request
     * must contain exactly one provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithEwsProvider(EwsAvailabilityProvider&& value) { SetEwsProvider(std::move(value)); return *this;}


    /**
     * <p>Lambda availability provider definition. The request must contain exactly one
     * provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline const LambdaAvailabilityProvider& GetLambdaProvider() const{ return m_lambdaProvider; }

    /**
     * <p>Lambda availability provider definition. The request must contain exactly one
     * provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline bool LambdaProviderHasBeenSet() const { return m_lambdaProviderHasBeenSet; }

    /**
     * <p>Lambda availability provider definition. The request must contain exactly one
     * provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline void SetLambdaProvider(const LambdaAvailabilityProvider& value) { m_lambdaProviderHasBeenSet = true; m_lambdaProvider = value; }

    /**
     * <p>Lambda availability provider definition. The request must contain exactly one
     * provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline void SetLambdaProvider(LambdaAvailabilityProvider&& value) { m_lambdaProviderHasBeenSet = true; m_lambdaProvider = std::move(value); }

    /**
     * <p>Lambda availability provider definition. The request must contain exactly one
     * provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithLambdaProvider(const LambdaAvailabilityProvider& value) { SetLambdaProvider(value); return *this;}

    /**
     * <p>Lambda availability provider definition. The request must contain exactly one
     * provider definition, either <code>EwsProvider</code> or
     * <code>LambdaProvider</code>.</p>
     */
    inline CreateAvailabilityConfigurationRequest& WithLambdaProvider(LambdaAvailabilityProvider&& value) { SetLambdaProvider(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    EwsAvailabilityProvider m_ewsProvider;
    bool m_ewsProviderHasBeenSet = false;

    LambdaAvailabilityProvider m_lambdaProvider;
    bool m_lambdaProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
