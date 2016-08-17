/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * Input to the UnlinkIdentity action.
   */
  class AWS_COGNITOIDENTITY_API UnlinkIdentityRequest : public CognitoIdentityRequest
  {
  public:
    UnlinkIdentityRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline UnlinkIdentityRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline UnlinkIdentityRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(value); return *this;}

    /**
     * A unique identifier in the format REGION:GUID.
     */
    inline UnlinkIdentityRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline void SetLogins(const Aws::Map<Aws::String, Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline void SetLogins(Aws::Map<Aws::String, Aws::String>&& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& WithLogins(const Aws::Map<Aws::String, Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& WithLogins(Aws::Map<Aws::String, Aws::String>&& value) { SetLogins(value); return *this;}

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& AddLogins(const Aws::String& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& AddLogins(Aws::String&& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& AddLogins(const Aws::String& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& AddLogins(Aws::String&& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& AddLogins(const char* key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& AddLogins(Aws::String&& key, const char* value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * A set of optional name-value pairs that map provider names to provider tokens.
     */
    inline UnlinkIdentityRequest& AddLogins(const char* key, const char* value) { m_loginsHasBeenSet = true; m_logins[key] = value; return *this; }

    /**
     * Provider names to unlink from this identity.
     */
    inline const Aws::Vector<Aws::String>& GetLoginsToRemove() const{ return m_loginsToRemove; }

    /**
     * Provider names to unlink from this identity.
     */
    inline void SetLoginsToRemove(const Aws::Vector<Aws::String>& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove = value; }

    /**
     * Provider names to unlink from this identity.
     */
    inline void SetLoginsToRemove(Aws::Vector<Aws::String>&& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove = value; }

    /**
     * Provider names to unlink from this identity.
     */
    inline UnlinkIdentityRequest& WithLoginsToRemove(const Aws::Vector<Aws::String>& value) { SetLoginsToRemove(value); return *this;}

    /**
     * Provider names to unlink from this identity.
     */
    inline UnlinkIdentityRequest& WithLoginsToRemove(Aws::Vector<Aws::String>&& value) { SetLoginsToRemove(value); return *this;}

    /**
     * Provider names to unlink from this identity.
     */
    inline UnlinkIdentityRequest& AddLoginsToRemove(const Aws::String& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove.push_back(value); return *this; }

    /**
     * Provider names to unlink from this identity.
     */
    inline UnlinkIdentityRequest& AddLoginsToRemove(Aws::String&& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove.push_back(value); return *this; }

    /**
     * Provider names to unlink from this identity.
     */
    inline UnlinkIdentityRequest& AddLoginsToRemove(const char* value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove.push_back(value); return *this; }

  private:
    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_logins;
    bool m_loginsHasBeenSet;
    Aws::Vector<Aws::String> m_loginsToRemove;
    bool m_loginsToRemoveHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
