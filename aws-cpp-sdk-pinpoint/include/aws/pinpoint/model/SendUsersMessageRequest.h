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
  class JsonView;
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
    SendUsersMessageRequest(Aws::Utils::Json::JsonView jsonValue);
    SendUsersMessageRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * A map of custom attribute-value pairs. Amazon Pinpoint adds these attributes to
     * the data.pinpoint object in the body of the push notification payload. Amazon
     * Pinpoint also provides these attributes in the events that it generates for
     * users-messages deliveries.
     */
    inline SendUsersMessageRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * Message definitions for the default message and any messages that are tailored
     * for specific channels.
     */
    inline const DirectMessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }

    /**
     * Message definitions for the default message and any messages that are tailored
     * for specific channels.
     */
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }

    /**
     * Message definitions for the default message and any messages that are tailored
     * for specific channels.
     */
    inline void SetMessageConfiguration(const DirectMessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }

    /**
     * Message definitions for the default message and any messages that are tailored
     * for specific channels.
     */
    inline void SetMessageConfiguration(DirectMessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }

    /**
     * Message definitions for the default message and any messages that are tailored
     * for specific channels.
     */
    inline SendUsersMessageRequest& WithMessageConfiguration(const DirectMessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * Message definitions for the default message and any messages that are tailored
     * for specific channels.
     */
    inline SendUsersMessageRequest& WithMessageConfiguration(DirectMessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * A unique ID that you can use to trace a message. This ID is visible to
     * recipients.
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }

    /**
     * A unique ID that you can use to trace a message. This ID is visible to
     * recipients.
     */
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }

    /**
     * A unique ID that you can use to trace a message. This ID is visible to
     * recipients.
     */
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }

    /**
     * A unique ID that you can use to trace a message. This ID is visible to
     * recipients.
     */
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }

    /**
     * A unique ID that you can use to trace a message. This ID is visible to
     * recipients.
     */
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }

    /**
     * A unique ID that you can use to trace a message. This ID is visible to
     * recipients.
     */
    inline SendUsersMessageRequest& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    /**
     * A unique ID that you can use to trace a message. This ID is visible to
     * recipients.
     */
    inline SendUsersMessageRequest& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    /**
     * A unique ID that you can use to trace a message. This ID is visible to
     * recipients.
     */
    inline SendUsersMessageRequest& WithTraceId(const char* value) { SetTraceId(value); return *this;}


    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline const Aws::Map<Aws::String, EndpointSendConfiguration>& GetUsers() const{ return m_users; }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline void SetUsers(const Aws::Map<Aws::String, EndpointSendConfiguration>& value) { m_usersHasBeenSet = true; m_users = value; }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline void SetUsers(Aws::Map<Aws::String, EndpointSendConfiguration>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline SendUsersMessageRequest& WithUsers(const Aws::Map<Aws::String, EndpointSendConfiguration>& value) { SetUsers(value); return *this;}

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline SendUsersMessageRequest& WithUsers(Aws::Map<Aws::String, EndpointSendConfiguration>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline SendUsersMessageRequest& AddUsers(const Aws::String& key, const EndpointSendConfiguration& value) { m_usersHasBeenSet = true; m_users.emplace(key, value); return *this; }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline SendUsersMessageRequest& AddUsers(Aws::String&& key, const EndpointSendConfiguration& value) { m_usersHasBeenSet = true; m_users.emplace(std::move(key), value); return *this; }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline SendUsersMessageRequest& AddUsers(const Aws::String& key, EndpointSendConfiguration&& value) { m_usersHasBeenSet = true; m_users.emplace(key, std::move(value)); return *this; }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline SendUsersMessageRequest& AddUsers(Aws::String&& key, EndpointSendConfiguration&& value) { m_usersHasBeenSet = true; m_users.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline SendUsersMessageRequest& AddUsers(const char* key, EndpointSendConfiguration&& value) { m_usersHasBeenSet = true; m_users.emplace(key, std::move(value)); return *this; }

    /**
     * A map that associates user IDs with EndpointSendConfiguration objects. Within an
     * EndpointSendConfiguration object, you can tailor the message for a user by
     * specifying message overrides or substitutions.
     */
    inline SendUsersMessageRequest& AddUsers(const char* key, const EndpointSendConfiguration& value) { m_usersHasBeenSet = true; m_users.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet;

    DirectMessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet;

    Aws::Map<Aws::String, EndpointSendConfiguration> m_users;
    bool m_usersHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
