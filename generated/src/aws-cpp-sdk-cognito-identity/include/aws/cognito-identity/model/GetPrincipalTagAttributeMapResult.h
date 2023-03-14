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
  class GetPrincipalTagAttributeMapResult
  {
  public:
    AWS_COGNITOIDENTITY_API GetPrincipalTagAttributeMapResult();
    AWS_COGNITOIDENTITY_API GetPrincipalTagAttributeMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API GetPrincipalTagAttributeMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }

    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = std::move(value); }

    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }

    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline GetPrincipalTagAttributeMapResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline GetPrincipalTagAttributeMapResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline GetPrincipalTagAttributeMapResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline const Aws::String& GetIdentityProviderName() const{ return m_identityProviderName; }

    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline void SetIdentityProviderName(const Aws::String& value) { m_identityProviderName = value; }

    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline void SetIdentityProviderName(Aws::String&& value) { m_identityProviderName = std::move(value); }

    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline void SetIdentityProviderName(const char* value) { m_identityProviderName.assign(value); }

    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline GetPrincipalTagAttributeMapResult& WithIdentityProviderName(const Aws::String& value) { SetIdentityProviderName(value); return *this;}

    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline GetPrincipalTagAttributeMapResult& WithIdentityProviderName(Aws::String&& value) { SetIdentityProviderName(std::move(value)); return *this;}

    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline GetPrincipalTagAttributeMapResult& WithIdentityProviderName(const char* value) { SetIdentityProviderName(value); return *this;}


    /**
     * <p>You can use this operation to list </p>
     */
    inline bool GetUseDefaults() const{ return m_useDefaults; }

    /**
     * <p>You can use this operation to list </p>
     */
    inline void SetUseDefaults(bool value) { m_useDefaults = value; }

    /**
     * <p>You can use this operation to list </p>
     */
    inline GetPrincipalTagAttributeMapResult& WithUseDefaults(bool value) { SetUseDefaults(value); return *this;}


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
    inline GetPrincipalTagAttributeMapResult& WithPrincipalTags(const Aws::Map<Aws::String, Aws::String>& value) { SetPrincipalTags(value); return *this;}

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline GetPrincipalTagAttributeMapResult& WithPrincipalTags(Aws::Map<Aws::String, Aws::String>&& value) { SetPrincipalTags(std::move(value)); return *this;}

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline GetPrincipalTagAttributeMapResult& AddPrincipalTags(const Aws::String& key, const Aws::String& value) { m_principalTags.emplace(key, value); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline GetPrincipalTagAttributeMapResult& AddPrincipalTags(Aws::String&& key, const Aws::String& value) { m_principalTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline GetPrincipalTagAttributeMapResult& AddPrincipalTags(const Aws::String& key, Aws::String&& value) { m_principalTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline GetPrincipalTagAttributeMapResult& AddPrincipalTags(Aws::String&& key, Aws::String&& value) { m_principalTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline GetPrincipalTagAttributeMapResult& AddPrincipalTags(const char* key, Aws::String&& value) { m_principalTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline GetPrincipalTagAttributeMapResult& AddPrincipalTags(Aws::String&& key, const char* value) { m_principalTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline GetPrincipalTagAttributeMapResult& AddPrincipalTags(const char* key, const char* value) { m_principalTags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPrincipalTagAttributeMapResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPrincipalTagAttributeMapResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPrincipalTagAttributeMapResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_identityPoolId;

    Aws::String m_identityProviderName;

    bool m_useDefaults;

    Aws::Map<Aws::String, Aws::String> m_principalTags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
