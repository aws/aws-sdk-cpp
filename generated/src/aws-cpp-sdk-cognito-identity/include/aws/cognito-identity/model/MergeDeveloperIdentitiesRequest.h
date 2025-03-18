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
   * <p>Input to the <code>MergeDeveloperIdentities</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/MergeDeveloperIdentitiesInput">AWS
   * API Reference</a></p>
   */
  class MergeDeveloperIdentitiesRequest : public CognitoIdentityRequest
  {
  public:
    AWS_COGNITOIDENTITY_API MergeDeveloperIdentitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergeDeveloperIdentities"; }

    AWS_COGNITOIDENTITY_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>User identifier for the source user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline const Aws::String& GetSourceUserIdentifier() const { return m_sourceUserIdentifier; }
    inline bool SourceUserIdentifierHasBeenSet() const { return m_sourceUserIdentifierHasBeenSet; }
    template<typename SourceUserIdentifierT = Aws::String>
    void SetSourceUserIdentifier(SourceUserIdentifierT&& value) { m_sourceUserIdentifierHasBeenSet = true; m_sourceUserIdentifier = std::forward<SourceUserIdentifierT>(value); }
    template<typename SourceUserIdentifierT = Aws::String>
    MergeDeveloperIdentitiesRequest& WithSourceUserIdentifier(SourceUserIdentifierT&& value) { SetSourceUserIdentifier(std::forward<SourceUserIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User identifier for the destination user. The value should be a
     * <code>DeveloperUserIdentifier</code>.</p>
     */
    inline const Aws::String& GetDestinationUserIdentifier() const { return m_destinationUserIdentifier; }
    inline bool DestinationUserIdentifierHasBeenSet() const { return m_destinationUserIdentifierHasBeenSet; }
    template<typename DestinationUserIdentifierT = Aws::String>
    void SetDestinationUserIdentifier(DestinationUserIdentifierT&& value) { m_destinationUserIdentifierHasBeenSet = true; m_destinationUserIdentifier = std::forward<DestinationUserIdentifierT>(value); }
    template<typename DestinationUserIdentifierT = Aws::String>
    MergeDeveloperIdentitiesRequest& WithDestinationUserIdentifier(DestinationUserIdentifierT&& value) { SetDestinationUserIdentifier(std::forward<DestinationUserIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The "domain" by which Cognito will refer to your users. This is a (pseudo)
     * domain name that you provide while creating an identity pool. This name acts as
     * a placeholder that allows your backend and the Cognito service to communicate
     * about the developer provider. For the <code>DeveloperProviderName</code>, you
     * can use letters as well as period (.), underscore (_), and dash (-).</p>
     */
    inline const Aws::String& GetDeveloperProviderName() const { return m_developerProviderName; }
    inline bool DeveloperProviderNameHasBeenSet() const { return m_developerProviderNameHasBeenSet; }
    template<typename DeveloperProviderNameT = Aws::String>
    void SetDeveloperProviderName(DeveloperProviderNameT&& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = std::forward<DeveloperProviderNameT>(value); }
    template<typename DeveloperProviderNameT = Aws::String>
    MergeDeveloperIdentitiesRequest& WithDeveloperProviderName(DeveloperProviderNameT&& value) { SetDeveloperProviderName(std::forward<DeveloperProviderNameT>(value)); return *this;}
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
    MergeDeveloperIdentitiesRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceUserIdentifier;
    bool m_sourceUserIdentifierHasBeenSet = false;

    Aws::String m_destinationUserIdentifier;
    bool m_destinationUserIdentifierHasBeenSet = false;

    Aws::String m_developerProviderName;
    bool m_developerProviderNameHasBeenSet = false;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
