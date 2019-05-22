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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/AuthorizationProviderType.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkLink
{
namespace Model
{

  /**
   * <p>The summary of the website authorization provider.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/WebsiteAuthorizationProviderSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WORKLINK_API WebsiteAuthorizationProviderSummary
  {
  public:
    WebsiteAuthorizationProviderSummary();
    WebsiteAuthorizationProviderSummary(Aws::Utils::Json::JsonView jsonValue);
    WebsiteAuthorizationProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline const Aws::String& GetAuthorizationProviderId() const{ return m_authorizationProviderId; }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline bool AuthorizationProviderIdHasBeenSet() const { return m_authorizationProviderIdHasBeenSet; }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline void SetAuthorizationProviderId(const Aws::String& value) { m_authorizationProviderIdHasBeenSet = true; m_authorizationProviderId = value; }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline void SetAuthorizationProviderId(Aws::String&& value) { m_authorizationProviderIdHasBeenSet = true; m_authorizationProviderId = std::move(value); }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline void SetAuthorizationProviderId(const char* value) { m_authorizationProviderIdHasBeenSet = true; m_authorizationProviderId.assign(value); }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderId(const Aws::String& value) { SetAuthorizationProviderId(value); return *this;}

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderId(Aws::String&& value) { SetAuthorizationProviderId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderId(const char* value) { SetAuthorizationProviderId(value); return *this;}


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
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderType(const AuthorizationProviderType& value) { SetAuthorizationProviderType(value); return *this;}

    /**
     * <p>The authorization provider type.</p>
     */
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderType(AuthorizationProviderType&& value) { SetAuthorizationProviderType(std::move(value)); return *this;}


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
    inline WebsiteAuthorizationProviderSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline WebsiteAuthorizationProviderSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline WebsiteAuthorizationProviderSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The time of creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time of creation.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time of creation.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time of creation.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time of creation.</p>
     */
    inline WebsiteAuthorizationProviderSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time of creation.</p>
     */
    inline WebsiteAuthorizationProviderSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_authorizationProviderId;
    bool m_authorizationProviderIdHasBeenSet;

    AuthorizationProviderType m_authorizationProviderType;
    bool m_authorizationProviderTypeHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
