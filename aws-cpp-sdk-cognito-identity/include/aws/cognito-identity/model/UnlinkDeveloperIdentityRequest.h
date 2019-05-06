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
  class AWS_COGNITOIDENTITY_API UnlinkDeveloperIdentityRequest : public CognitoIdentityRequest
  {
  public:
    UnlinkDeveloperIdentityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnlinkDeveloperIdentity"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline const Aws::String& GetDeveloperProviderName() const{ return m_developerProviderName; }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline bool DeveloperProviderNameHasBeenSet() const { return m_developerProviderNameHasBeenSet; }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline void SetDeveloperProviderName(const Aws::String& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = value; }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline void SetDeveloperProviderName(Aws::String&& value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName = std::move(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline void SetDeveloperProviderName(const char* value) { m_developerProviderNameHasBeenSet = true; m_developerProviderName.assign(value); }

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithDeveloperProviderName(const Aws::String& value) { SetDeveloperProviderName(value); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithDeveloperProviderName(Aws::String&& value) { SetDeveloperProviderName(std::move(value)); return *this;}

    /**
     * <p>The "domain" by which Cognito will refer to your users.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithDeveloperProviderName(const char* value) { SetDeveloperProviderName(value); return *this;}


    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline const Aws::String& GetDeveloperUserIdentifier() const{ return m_developerUserIdentifier; }

    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline bool DeveloperUserIdentifierHasBeenSet() const { return m_developerUserIdentifierHasBeenSet; }

    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline void SetDeveloperUserIdentifier(const Aws::String& value) { m_developerUserIdentifierHasBeenSet = true; m_developerUserIdentifier = value; }

    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline void SetDeveloperUserIdentifier(Aws::String&& value) { m_developerUserIdentifierHasBeenSet = true; m_developerUserIdentifier = std::move(value); }

    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline void SetDeveloperUserIdentifier(const char* value) { m_developerUserIdentifierHasBeenSet = true; m_developerUserIdentifier.assign(value); }

    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithDeveloperUserIdentifier(const Aws::String& value) { SetDeveloperUserIdentifier(value); return *this;}

    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithDeveloperUserIdentifier(Aws::String&& value) { SetDeveloperUserIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique ID used by your backend authentication process to identify a
     * user.</p>
     */
    inline UnlinkDeveloperIdentityRequest& WithDeveloperUserIdentifier(const char* value) { SetDeveloperUserIdentifier(value); return *this;}

  private:

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;

    Aws::String m_developerProviderName;
    bool m_developerProviderNameHasBeenSet;

    Aws::String m_developerUserIdentifier;
    bool m_developerUserIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
