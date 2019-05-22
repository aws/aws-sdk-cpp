/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/WorkLinkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/AuthorizationProviderType.h>
#include <utility>

namespace Aws
{
namespace WorkLink
{
namespace Model
{

  /**
   */
  class AWS_WORKLINK_API AssociateWebsiteAuthorizationProviderRequest : public WorkLinkRequest
  {
  public:
    AssociateWebsiteAuthorizationProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateWebsiteAuthorizationProvider"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline AssociateWebsiteAuthorizationProviderRequest& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline AssociateWebsiteAuthorizationProviderRequest& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline AssociateWebsiteAuthorizationProviderRequest& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The authorization provider type.</p>
     */
    inline const AuthorizationProviderType& GetAuthorizationProviderType() const{ return m_authorizationProviderType; }

    /**
     * <p>The authorization provider type.</p>
     */
    inline bool AuthorizationProviderTypeHasBeenSet() const { return m_authorizationProviderTypeHasBeenSet; }

    /**
     * <p>The authorization provider type.</p>
     */
    inline void SetAuthorizationProviderType(const AuthorizationProviderType& value) { m_authorizationProviderTypeHasBeenSet = true; m_authorizationProviderType = value; }

    /**
     * <p>The authorization provider type.</p>
     */
    inline void SetAuthorizationProviderType(AuthorizationProviderType&& value) { m_authorizationProviderTypeHasBeenSet = true; m_authorizationProviderType = std::move(value); }

    /**
     * <p>The authorization provider type.</p>
     */
    inline AssociateWebsiteAuthorizationProviderRequest& WithAuthorizationProviderType(const AuthorizationProviderType& value) { SetAuthorizationProviderType(value); return *this;}

    /**
     * <p>The authorization provider type.</p>
     */
    inline AssociateWebsiteAuthorizationProviderRequest& WithAuthorizationProviderType(AuthorizationProviderType&& value) { SetAuthorizationProviderType(std::move(value)); return *this;}


    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline AssociateWebsiteAuthorizationProviderRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline AssociateWebsiteAuthorizationProviderRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline AssociateWebsiteAuthorizationProviderRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    AuthorizationProviderType m_authorizationProviderType;
    bool m_authorizationProviderTypeHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
