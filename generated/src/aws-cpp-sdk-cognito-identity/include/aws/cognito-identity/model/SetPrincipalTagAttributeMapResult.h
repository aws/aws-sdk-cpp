/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CognitoIdentity
{
namespace Model
{
  class SetPrincipalTagAttributeMapResult
  {
  public:
    AWS_COGNITOIDENTITY_API SetPrincipalTagAttributeMapResult();
    AWS_COGNITOIDENTITY_API SetPrincipalTagAttributeMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API SetPrincipalTagAttributeMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Identity Pool you want to set attribute mappings for.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>The ID of the Identity Pool you want to set attribute mappings for.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }

    /**
     * <p>The ID of the Identity Pool you want to set attribute mappings for.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = std::move(value); }

    /**
     * <p>The ID of the Identity Pool you want to set attribute mappings for.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }

    /**
     * <p>The ID of the Identity Pool you want to set attribute mappings for.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>The ID of the Identity Pool you want to set attribute mappings for.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Identity Pool you want to set attribute mappings for.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>The provider name you want to use for attribute mappings.</p>
     */
    inline const Aws::String& GetIdentityProviderName() const{ return m_identityProviderName; }

    /**
     * <p>The provider name you want to use for attribute mappings.</p>
     */
    inline void SetIdentityProviderName(const Aws::String& value) { m_identityProviderName = value; }

    /**
     * <p>The provider name you want to use for attribute mappings.</p>
     */
    inline void SetIdentityProviderName(Aws::String&& value) { m_identityProviderName = std::move(value); }

    /**
     * <p>The provider name you want to use for attribute mappings.</p>
     */
    inline void SetIdentityProviderName(const char* value) { m_identityProviderName.assign(value); }

    /**
     * <p>The provider name you want to use for attribute mappings.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithIdentityProviderName(const Aws::String& value) { SetIdentityProviderName(value); return *this;}

    /**
     * <p>The provider name you want to use for attribute mappings.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithIdentityProviderName(Aws::String&& value) { SetIdentityProviderName(std::move(value)); return *this;}

    /**
     * <p>The provider name you want to use for attribute mappings.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithIdentityProviderName(const char* value) { SetIdentityProviderName(value); return *this;}


    /**
     * <p>You can use this operation to select default (username and clientID)
     * attribute mappings.</p>
     */
    inline bool GetUseDefaults() const{ return m_useDefaults; }

    /**
     * <p>You can use this operation to select default (username and clientID)
     * attribute mappings.</p>
     */
    inline void SetUseDefaults(bool value) { m_useDefaults = value; }

    /**
     * <p>You can use this operation to select default (username and clientID)
     * attribute mappings.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithUseDefaults(bool value) { SetUseDefaults(value); return *this;}


    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipalTags() const{ return m_principalTags; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline void SetPrincipalTags(const Aws::Map<Aws::String, Aws::String>& value) { m_principalTags = value; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline void SetPrincipalTags(Aws::Map<Aws::String, Aws::String>&& value) { m_principalTags = std::move(value); }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithPrincipalTags(const Aws::Map<Aws::String, Aws::String>& value) { SetPrincipalTags(value); return *this;}

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& WithPrincipalTags(Aws::Map<Aws::String, Aws::String>&& value) { SetPrincipalTags(std::move(value)); return *this;}

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& AddPrincipalTags(const Aws::String& key, const Aws::String& value) { m_principalTags.emplace(key, value); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& AddPrincipalTags(Aws::String&& key, const Aws::String& value) { m_principalTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& AddPrincipalTags(const Aws::String& key, Aws::String&& value) { m_principalTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& AddPrincipalTags(Aws::String&& key, Aws::String&& value) { m_principalTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& AddPrincipalTags(const char* key, Aws::String&& value) { m_principalTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& AddPrincipalTags(Aws::String&& key, const char* value) { m_principalTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline SetPrincipalTagAttributeMapResult& AddPrincipalTags(const char* key, const char* value) { m_principalTags.emplace(key, value); return *this; }

  private:

    Aws::String m_identityPoolId;

    Aws::String m_identityProviderName;

    bool m_useDefaults;

    Aws::Map<Aws::String, Aws::String> m_principalTags;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
