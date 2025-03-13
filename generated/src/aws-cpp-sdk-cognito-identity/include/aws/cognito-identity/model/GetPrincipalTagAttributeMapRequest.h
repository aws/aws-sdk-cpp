/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   */
  class GetPrincipalTagAttributeMapRequest : public CognitoIdentityRequest
  {
  public:
    AWS_COGNITOIDENTITY_API GetPrincipalTagAttributeMapRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPrincipalTagAttributeMap"; }

    AWS_COGNITOIDENTITY_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>You can use this operation to get the ID of the Identity Pool you setup
     * attribute mappings for.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    GetPrincipalTagAttributeMapRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this operation to get the provider name.</p>
     */
    inline const Aws::String& GetIdentityProviderName() const { return m_identityProviderName; }
    inline bool IdentityProviderNameHasBeenSet() const { return m_identityProviderNameHasBeenSet; }
    template<typename IdentityProviderNameT = Aws::String>
    void SetIdentityProviderName(IdentityProviderNameT&& value) { m_identityProviderNameHasBeenSet = true; m_identityProviderName = std::forward<IdentityProviderNameT>(value); }
    template<typename IdentityProviderNameT = Aws::String>
    GetPrincipalTagAttributeMapRequest& WithIdentityProviderName(IdentityProviderNameT&& value) { SetIdentityProviderName(std::forward<IdentityProviderNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_identityProviderName;
    bool m_identityProviderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
