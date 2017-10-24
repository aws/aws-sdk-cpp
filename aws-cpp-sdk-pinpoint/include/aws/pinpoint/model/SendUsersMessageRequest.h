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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/DirectMessageConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/EndpointSendConfiguration.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Send message request.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SendUsersMessageRequest
  {
  public:
    SendUsersMessageRequest();
    SendUsersMessageRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    SendUsersMessageRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline SendUsersMessageRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * Message configuration.
     */
    inline const DirectMessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }

    /**
     * Message configuration.
     */
    inline void SetMessageConfiguration(const DirectMessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }

    /**
     * Message configuration.
     */
    inline void SetMessageConfiguration(DirectMessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }

    /**
     * Message configuration.
     */
    inline SendUsersMessageRequest& WithMessageConfiguration(const DirectMessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * Message configuration.
     */
    inline SendUsersMessageRequest& WithMessageConfiguration(DirectMessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline const Aws::Map<Aws::String, EndpointSendConfiguration>& GetUsers() const{ return m_users; }

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline void SetUsers(const Aws::Map<Aws::String, EndpointSendConfiguration>& value) { m_usersHasBeenSet = true; m_users = value; }

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline void SetUsers(Aws::Map<Aws::String, EndpointSendConfiguration>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline SendUsersMessageRequest& WithUsers(const Aws::Map<Aws::String, EndpointSendConfiguration>& value) { SetUsers(value); return *this;}

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline SendUsersMessageRequest& WithUsers(Aws::Map<Aws::String, EndpointSendConfiguration>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline SendUsersMessageRequest& AddUsers(const Aws::String& key, const EndpointSendConfiguration& value) { m_usersHasBeenSet = true; m_users.emplace(key, value); return *this; }

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline SendUsersMessageRequest& AddUsers(Aws::String&& key, const EndpointSendConfiguration& value) { m_usersHasBeenSet = true; m_users.emplace(std::move(key), value); return *this; }

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline SendUsersMessageRequest& AddUsers(const Aws::String& key, EndpointSendConfiguration&& value) { m_usersHasBeenSet = true; m_users.emplace(key, std::move(value)); return *this; }

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline SendUsersMessageRequest& AddUsers(Aws::String&& key, EndpointSendConfiguration&& value) { m_usersHasBeenSet = true; m_users.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline SendUsersMessageRequest& AddUsers(const char* key, EndpointSendConfiguration&& value) { m_usersHasBeenSet = true; m_users.emplace(key, std::move(value)); return *this; }

    /**
     * A map of destination endpoints, with the EndpointId as the key Endpoint Message
     * Configuration as the value.
     */
    inline SendUsersMessageRequest& AddUsers(const char* key, const EndpointSendConfiguration& value) { m_usersHasBeenSet = true; m_users.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet;

    DirectMessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet;

    Aws::Map<Aws::String, EndpointSendConfiguration> m_users;
    bool m_usersHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
