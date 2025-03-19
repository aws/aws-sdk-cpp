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
    AWS_COGNITOIDENTITY_API GetPrincipalTagAttributeMapResult() = default;
    AWS_COGNITOIDENTITY_API GetPrincipalTagAttributeMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API GetPrincipalTagAttributeMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    GetPrincipalTagAttributeMapResult& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline const Aws::String& GetIdentityProviderName() const { return m_identityProviderName; }
    template<typename IdentityProviderNameT = Aws::String>
    void SetIdentityProviderName(IdentityProviderNameT&& value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName = std::forward<IdentityProviderNameT>(value); }
    template<typename IdentityProviderNameT = Aws::String>
    GetPrincipalTagAttributeMapResult& WithIdentityProviderName(IdentityProviderNameT&& value) { SetIdentityProviderName(std::forward<IdentityProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this operation to list </p>
     */
    inline bool GetUseDefaults() const { return m_useDefaults; }
    inline void SetUseDefaults(bool value) { m_useDefaultsHasBeenSet = true; m_useDefaults = value; }
    inline GetPrincipalTagAttributeMapResult& WithUseDefaults(bool value) { SetUseDefaults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this operation to add principal tags. The
     * <code>PrincipalTags</code>operation enables you to reference user attributes in
     * your IAM permissions policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipalTags() const { return m_principalTags; }
    template<typename PrincipalTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetPrincipalTags(PrincipalTagsT&& value) { m_principalTagsHasBeenSet = true; m_principalTags = std::forward<PrincipalTagsT>(value); }
    template<typename PrincipalTagsT = Aws::Map<Aws::String, Aws::String>>
    GetPrincipalTagAttributeMapResult& WithPrincipalTags(PrincipalTagsT&& value) { SetPrincipalTags(std::forward<PrincipalTagsT>(value)); return *this;}
    template<typename PrincipalTagsKeyT = Aws::String, typename PrincipalTagsValueT = Aws::String>
    GetPrincipalTagAttributeMapResult& AddPrincipalTags(PrincipalTagsKeyT&& key, PrincipalTagsValueT&& value) {
      m_principalTagsHasBeenSet = true; m_principalTags.emplace(std::forward<PrincipalTagsKeyT>(key), std::forward<PrincipalTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPrincipalTagAttributeMapResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_identityProviderName;
    bool m_identityProviderNameHasBeenSet = false;

    bool m_useDefaults{false};
    bool m_useDefaultsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_principalTags;
    bool m_principalTagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
