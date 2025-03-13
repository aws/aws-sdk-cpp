/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update user attributes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributesRequest">AWS
   * API Reference</a></p>
   */
  class UpdateUserAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserAttributes"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must add a <code>custom:</code> prefix to the attribute
     * name.</p> <p>If you have set an attribute to require verification before Amazon
     * Cognito updates its value, this request doesn’t immediately update the value of
     * that attribute. After your user receives and responds to a verification message
     * to verify the new value, Amazon Cognito updates the attribute value. Your user
     * can sign in and receive messages with the original attribute value until they
     * verify the new value.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const { return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    void SetUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::forward<UserAttributesT>(value); }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    UpdateUserAttributesRequest& WithUserAttributes(UserAttributesT&& value) { SetUserAttributes(std::forward<UserAttributesT>(value)); return *this;}
    template<typename UserAttributesT = AttributeType>
    UpdateUserAttributesRequest& AddUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace_back(std::forward<UserAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the currently signed-in
     * user. Must include a scope claim for
     * <code>aws.cognito.signin.user.admin</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    UpdateUserAttributesRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Using Lambda triggers</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     *  <p>When you use the <code>ClientMetadata</code> parameter, note that
     * Amazon Cognito won't do the following:</p> <ul> <li> <p>Store the
     * <code>ClientMetadata</code> value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the
     * <code>ClientMetadata</code> parameter serves no purpose.</p> </li> <li>
     * <p>Validate the <code>ClientMetadata</code> value.</p> </li> <li> <p>Encrypt the
     * <code>ClientMetadata</code> value. Don't send sensitive information in this
     * parameter.</p> </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const { return m_clientMetadata; }
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }
    template<typename ClientMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetClientMetadata(ClientMetadataT&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::forward<ClientMetadataT>(value); }
    template<typename ClientMetadataT = Aws::Map<Aws::String, Aws::String>>
    UpdateUserAttributesRequest& WithClientMetadata(ClientMetadataT&& value) { SetClientMetadata(std::forward<ClientMetadataT>(value)); return *this;}
    template<typename ClientMetadataKeyT = Aws::String, typename ClientMetadataValueT = Aws::String>
    UpdateUserAttributesRequest& AddClientMetadata(ClientMetadataKeyT&& key, ClientMetadataValueT&& value) {
      m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::forward<ClientMetadataKeyT>(key), std::forward<ClientMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
