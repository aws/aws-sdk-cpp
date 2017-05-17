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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/SessionState.h>
#include <aws/appstream/model/AuthenticationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Contains the parameters for a streaming session.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Session">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API Session
  {
  public:
    Session();
    Session(const Aws::Utils::Json::JsonValue& jsonValue);
    Session& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique ID for a streaming session.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID for a streaming session.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID for a streaming session.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID for a streaming session.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID for a streaming session.</p>
     */
    inline Session& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID for a streaming session.</p>
     */
    inline Session& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for a streaming session.</p>
     */
    inline Session& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline Session& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline Session& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user for whom the session was created.</p>
     */
    inline Session& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p>The name of the stack for which the streaming session was created.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack for which the streaming session was created.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack for which the streaming session was created.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack for which the streaming session was created.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack for which the streaming session was created.</p>
     */
    inline Session& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack for which the streaming session was created.</p>
     */
    inline Session& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack for which the streaming session was created.</p>
     */
    inline Session& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the fleet for which the streaming session was created.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet for which the streaming session was created.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet for which the streaming session was created.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }

    /**
     * <p>The name of the fleet for which the streaming session was created.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet for which the streaming session was created.</p>
     */
    inline Session& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet for which the streaming session was created.</p>
     */
    inline Session& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet for which the streaming session was created.</p>
     */
    inline Session& WithFleetName(const char* value) { SetFleetName(value); return *this;}

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline const SessionState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline void SetState(const SessionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline void SetState(SessionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline Session& WithState(const SessionState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the streaming session.</p>
     */
    inline Session& WithState(SessionState&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The authentication method of the user for whom the session was created. It
     * can be <code>API</code> for a user authenticated using a streaming url or
     * <code>SAML</code> for a SAML federated user.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication method of the user for whom the session was created. It
     * can be <code>API</code> for a user authenticated using a streaming url or
     * <code>SAML</code> for a SAML federated user.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication method of the user for whom the session was created. It
     * can be <code>API</code> for a user authenticated using a streaming url or
     * <code>SAML</code> for a SAML federated user.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication method of the user for whom the session was created. It
     * can be <code>API</code> for a user authenticated using a streaming url or
     * <code>SAML</code> for a SAML federated user.</p>
     */
    inline Session& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication method of the user for whom the session was created. It
     * can be <code>API</code> for a user authenticated using a streaming url or
     * <code>SAML</code> for a SAML federated user.</p>
     */
    inline Session& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet;
    SessionState m_state;
    bool m_stateHasBeenSet;
    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
