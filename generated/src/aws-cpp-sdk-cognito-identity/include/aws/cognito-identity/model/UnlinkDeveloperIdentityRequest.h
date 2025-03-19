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
   * <p>Input to the <code>UnlinkDeveloperIdentity</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkDeveloperIdentityInput">AWS
   * API Reference</a></p>
   */
  class UnlinkDeveloperIdentityRequest : public CognitoIdentityRequest
  {
  public:
    AWS_COGNITOIDENTITY_API UnlinkDeveloperIdentityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnlinkDeveloperIdentity"; }

    AWS_COGNITOIDENTITY_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const { return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    template<typename IdentityIdT = Aws::String>
    void SetIdentityId(IdentityIdT&& value) { m_identityIdHasBeenSet = true; m_identityId = std::forward<IdentityIdT>(value); }
    template<typename IdentityIdT = Aws::String>
    UnlinkDeveloperIdentityRequest& WithIdentityId(IdentityIdT&& value) { SetIdentityId(std::forward<IdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    UnlinkDeveloperIdentityRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline const Aws::String& GetDeveloperProviderName() const { return m_developerProviderName; }
    inline bool DeveloperProviderNameHasBeenSet() const { return m_developerProviderNameHasBeenSet; }
    template<typename DeveloperProviderNameT = Aws::String>
    void SetDeveloperProviderName(DeveloperProviderNameT&& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = std::forward<DeveloperProviderNameT>(value); }
    template<typename DeveloperProviderNameT = Aws::String>
    UnlinkDeveloperIdentityRequest& WithDeveloperProviderName(DeveloperProviderNameT&& value) { SetDeveloperProviderName(std::forward<DeveloperProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline const Aws::String& GetDeveloperUserIdentifier() const { return m_developerUserIdentifier; }
    inline bool DeveloperUserIdentifierHasBeenSet() const { return m_developerUserIdentifierHasBeenSet; }
    template<typename DeveloperUserIdentifierT = Aws::String>
    void SetDeveloperUserIdentifier(DeveloperUserIdentifierT&& value) { m_developerUserIdentifierHasBeenSet = true; m_developerUserIdentifier = std::forward<DeveloperUserIdentifierT>(value); }
    template<typename DeveloperUserIdentifierT = Aws::String>
    UnlinkDeveloperIdentityRequest& WithDeveloperUserIdentifier(DeveloperUserIdentifierT&& value) { SetDeveloperUserIdentifier(std::forward<DeveloperUserIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::String m_developerProviderName;
    bool m_developerProviderNameHasBeenSet = false;

    Aws::String m_developerUserIdentifier;
    bool m_developerUserIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
