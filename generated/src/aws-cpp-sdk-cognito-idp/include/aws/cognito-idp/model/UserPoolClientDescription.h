/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The description of the user pool client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolClientDescription">AWS
   * API Reference</a></p>
   */
  class UserPoolClientDescription
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolClientDescription();
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolClientDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolClientDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline UserPoolClientDescription& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline UserPoolClientDescription& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline UserPoolClientDescription& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The user pool ID for the user pool where you want to describe the user pool
     * client.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to describe the user pool
     * client.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool where you want to describe the user pool
     * client.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to describe the user pool
     * client.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool where you want to describe the user pool
     * client.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to describe the user pool
     * client.</p>
     */
    inline UserPoolClientDescription& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to describe the user pool
     * client.</p>
     */
    inline UserPoolClientDescription& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to describe the user pool
     * client.</p>
     */
    inline UserPoolClientDescription& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The client name from the user pool client description.</p>
     */
    inline const Aws::String& GetClientName() const{ return m_clientName; }

    /**
     * <p>The client name from the user pool client description.</p>
     */
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }

    /**
     * <p>The client name from the user pool client description.</p>
     */
    inline void SetClientName(const Aws::String& value) { m_clientNameHasBeenSet = true; m_clientName = value; }

    /**
     * <p>The client name from the user pool client description.</p>
     */
    inline void SetClientName(Aws::String&& value) { m_clientNameHasBeenSet = true; m_clientName = std::move(value); }

    /**
     * <p>The client name from the user pool client description.</p>
     */
    inline void SetClientName(const char* value) { m_clientNameHasBeenSet = true; m_clientName.assign(value); }

    /**
     * <p>The client name from the user pool client description.</p>
     */
    inline UserPoolClientDescription& WithClientName(const Aws::String& value) { SetClientName(value); return *this;}

    /**
     * <p>The client name from the user pool client description.</p>
     */
    inline UserPoolClientDescription& WithClientName(Aws::String&& value) { SetClientName(std::move(value)); return *this;}

    /**
     * <p>The client name from the user pool client description.</p>
     */
    inline UserPoolClientDescription& WithClientName(const char* value) { SetClientName(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientName;
    bool m_clientNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
