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
#include <aws/worklink/model/IdentityProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API DescribeIdentityProviderConfigurationResult
  {
  public:
    DescribeIdentityProviderConfigurationResult();
    DescribeIdentityProviderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeIdentityProviderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of identity provider.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>The type of identity provider.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderType = value; }

    /**
     * <p>The type of identity provider.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderType = std::move(value); }

    /**
     * <p>The type of identity provider.</p>
     */
    inline DescribeIdentityProviderConfigurationResult& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>The type of identity provider.</p>
     */
    inline DescribeIdentityProviderConfigurationResult& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>The SAML metadata document uploaded to the user’s identity provider.</p>
     */
    inline const Aws::String& GetServiceProviderSamlMetadata() const{ return m_serviceProviderSamlMetadata; }

    /**
     * <p>The SAML metadata document uploaded to the user’s identity provider.</p>
     */
    inline void SetServiceProviderSamlMetadata(const Aws::String& value) { m_serviceProviderSamlMetadata = value; }

    /**
     * <p>The SAML metadata document uploaded to the user’s identity provider.</p>
     */
    inline void SetServiceProviderSamlMetadata(Aws::String&& value) { m_serviceProviderSamlMetadata = std::move(value); }

    /**
     * <p>The SAML metadata document uploaded to the user’s identity provider.</p>
     */
    inline void SetServiceProviderSamlMetadata(const char* value) { m_serviceProviderSamlMetadata.assign(value); }

    /**
     * <p>The SAML metadata document uploaded to the user’s identity provider.</p>
     */
    inline DescribeIdentityProviderConfigurationResult& WithServiceProviderSamlMetadata(const Aws::String& value) { SetServiceProviderSamlMetadata(value); return *this;}

    /**
     * <p>The SAML metadata document uploaded to the user’s identity provider.</p>
     */
    inline DescribeIdentityProviderConfigurationResult& WithServiceProviderSamlMetadata(Aws::String&& value) { SetServiceProviderSamlMetadata(std::move(value)); return *this;}

    /**
     * <p>The SAML metadata document uploaded to the user’s identity provider.</p>
     */
    inline DescribeIdentityProviderConfigurationResult& WithServiceProviderSamlMetadata(const char* value) { SetServiceProviderSamlMetadata(value); return *this;}


    /**
     * <p>The SAML metadata document provided by the user’s identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderSamlMetadata() const{ return m_identityProviderSamlMetadata; }

    /**
     * <p>The SAML metadata document provided by the user’s identity provider.</p>
     */
    inline void SetIdentityProviderSamlMetadata(const Aws::String& value) { m_identityProviderSamlMetadata = value; }

    /**
     * <p>The SAML metadata document provided by the user’s identity provider.</p>
     */
    inline void SetIdentityProviderSamlMetadata(Aws::String&& value) { m_identityProviderSamlMetadata = std::move(value); }

    /**
     * <p>The SAML metadata document provided by the user’s identity provider.</p>
     */
    inline void SetIdentityProviderSamlMetadata(const char* value) { m_identityProviderSamlMetadata.assign(value); }

    /**
     * <p>The SAML metadata document provided by the user’s identity provider.</p>
     */
    inline DescribeIdentityProviderConfigurationResult& WithIdentityProviderSamlMetadata(const Aws::String& value) { SetIdentityProviderSamlMetadata(value); return *this;}

    /**
     * <p>The SAML metadata document provided by the user’s identity provider.</p>
     */
    inline DescribeIdentityProviderConfigurationResult& WithIdentityProviderSamlMetadata(Aws::String&& value) { SetIdentityProviderSamlMetadata(std::move(value)); return *this;}

    /**
     * <p>The SAML metadata document provided by the user’s identity provider.</p>
     */
    inline DescribeIdentityProviderConfigurationResult& WithIdentityProviderSamlMetadata(const char* value) { SetIdentityProviderSamlMetadata(value); return *this;}

  private:

    IdentityProviderType m_identityProviderType;

    Aws::String m_serviceProviderSamlMetadata;

    Aws::String m_identityProviderSamlMetadata;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
