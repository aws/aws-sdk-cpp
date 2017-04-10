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
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the UnlinkIdentity action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnlinkIdentityInput">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API UnlinkIdentityRequest : public CognitoIdentityRequest
  {
  public:
    UnlinkIdentityRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

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
    inline UnlinkIdentityRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline UnlinkIdentityRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline UnlinkIdentityRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogins() const{ return m_logins; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline void SetLogins(const Aws::Map<Aws::String, Aws::String>& value) { m_loginsHasBeenSet = true; m_logins = value; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline void SetLogins(Aws::Map<Aws::String, Aws::String>&& value) { m_loginsHasBeenSet = true; m_logins = std::move(value); }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& WithLogins(const Aws::Map<Aws::String, Aws::String>& value) { SetLogins(value); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& WithLogins(Aws::Map<Aws::String, Aws::String>&& value) { SetLogins(std::move(value)); return *this;}

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& AddLogins(const Aws::String& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& AddLogins(Aws::String&& key, const Aws::String& value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& AddLogins(const Aws::String& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& AddLogins(Aws::String&& key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& AddLogins(const char* key, Aws::String&& value) { m_loginsHasBeenSet = true; m_logins.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& AddLogins(Aws::String&& key, const char* value) { m_loginsHasBeenSet = true; m_logins.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of optional name-value pairs that map provider names to provider
     * tokens.</p>
     */
    inline UnlinkIdentityRequest& AddLogins(const char* key, const char* value) { m_loginsHasBeenSet = true; m_logins.emplace(key, value); return *this; }

    /**
     * <p>Provider names to unlink from this identity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoginsToRemove() const{ return m_loginsToRemove; }

    /**
     * <p>Provider names to unlink from this identity.</p>
     */
    inline void SetLoginsToRemove(const Aws::Vector<Aws::String>& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove = value; }

    /**
     * <p>Provider names to unlink from this identity.</p>
     */
    inline void SetLoginsToRemove(Aws::Vector<Aws::String>&& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove = std::move(value); }

    /**
     * <p>Provider names to unlink from this identity.</p>
     */
    inline UnlinkIdentityRequest& WithLoginsToRemove(const Aws::Vector<Aws::String>& value) { SetLoginsToRemove(value); return *this;}

    /**
     * <p>Provider names to unlink from this identity.</p>
     */
    inline UnlinkIdentityRequest& WithLoginsToRemove(Aws::Vector<Aws::String>&& value) { SetLoginsToRemove(std::move(value)); return *this;}

    /**
     * <p>Provider names to unlink from this identity.</p>
     */
    inline UnlinkIdentityRequest& AddLoginsToRemove(const Aws::String& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove.push_back(value); return *this; }

    /**
     * <p>Provider names to unlink from this identity.</p>
     */
    inline UnlinkIdentityRequest& AddLoginsToRemove(Aws::String&& value) { m_loginsToRemoveHasBeenSet = true; m_loginsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>Provider names to unlink from this identity.</p>
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
