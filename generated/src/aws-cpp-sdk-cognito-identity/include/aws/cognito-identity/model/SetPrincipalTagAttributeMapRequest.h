/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   */
  class SetPrincipalTagAttributeMapRequest : public CognitoIdentityRequest
  {
  public:
    AWS_COGNITOIDENTITY_API SetPrincipalTagAttributeMapRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetPrincipalTagAttributeMap"; }

    AWS_COGNITOIDENTITY_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Identity Pool you want to set attribute mappings for.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    SetPrincipalTagAttributeMapRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider name you want to use for attribute mappings.</p>
     */
    inline const Aws::String& GetIdentityProviderName() const { return m_identityProviderName; }
    inline bool IdentityProviderNameHasBeenSet() const { return m_identityProviderNameHasBeenSet; }
    template<typename IdentityProviderNameT = Aws::String>
    void SetIdentityProviderName(IdentityProviderNameT&& value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName = std::forward<IdentityProviderNameT>(value); }
    template<typename IdentityProviderNameT = Aws::String>
    SetPrincipalTagAttributeMapRequest& WithIdentityProviderName(IdentityProviderNameT&& value) { SetIdentityProviderName(std::forward<IdentityProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this operation to use default (username and clientID) attribute
     * mappings.</p>
     */
    inline bool GetUseDefaults() const { return m_useDefaults; }
    inline bool UseDefaultsHasBeenSet() const { return m_useDefaultsHasBeenSet; }
    inline void SetUseDefaults(bool value) { m_useDefaultsHasBeenSet = true; m_useDefaults = value; }
    inline SetPrincipalTagAttributeMapRequest& WithUseDefaults(bool value) { SetUseDefaults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this operation to add principal tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipalTags() const { return m_principalTags; }
    inline bool PrincipalTagsHasBeenSet() const { return m_principalTagsHasBeenSet; }
    template<typename PrincipalTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetPrincipalTags(PrincipalTagsT&& value) { m_principalTagsHasBeenSet = true; m_principalTags = std::forward<PrincipalTagsT>(value); }
    template<typename PrincipalTagsT = Aws::Map<Aws::String, Aws::String>>
    SetPrincipalTagAttributeMapRequest& WithPrincipalTags(PrincipalTagsT&& value) { SetPrincipalTags(std::forward<PrincipalTagsT>(value)); return *this;}
    template<typename PrincipalTagsKeyT = Aws::String, typename PrincipalTagsValueT = Aws::String>
    SetPrincipalTagAttributeMapRequest& AddPrincipalTags(PrincipalTagsKeyT&& key, PrincipalTagsValueT&& value) {
      m_principalTagsHasBeenSet = true; m_principalTags.emplace(std::forward<PrincipalTagsKeyT>(key), std::forward<PrincipalTagsValueT>(value)); return *this;
    }
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
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
