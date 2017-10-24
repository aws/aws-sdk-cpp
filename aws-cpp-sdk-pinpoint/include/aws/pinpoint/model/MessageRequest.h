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
#include <aws/pinpoint/model/AddressConfiguration.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API MessageRequest
  {
  public:
    MessageRequest();
    MessageRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    MessageRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline const Aws::Map<Aws::String, AddressConfiguration>& GetAddresses() const{ return m_addresses; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline void SetAddresses(const Aws::Map<Aws::String, AddressConfiguration>& value) { m_addressesHasBeenSet = true; m_addresses = value; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline void SetAddresses(Aws::Map<Aws::String, AddressConfiguration>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& WithAddresses(const Aws::Map<Aws::String, AddressConfiguration>& value) { SetAddresses(value); return *this;}

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& WithAddresses(Aws::Map<Aws::String, AddressConfiguration>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddAddresses(const Aws::String& key, const AddressConfiguration& value) { m_addressesHasBeenSet = true; m_addresses.emplace(key, value); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddAddresses(Aws::String&& key, const AddressConfiguration& value) { m_addressesHasBeenSet = true; m_addresses.emplace(std::move(key), value); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddAddresses(const Aws::String& key, AddressConfiguration&& value) { m_addressesHasBeenSet = true; m_addresses.emplace(key, std::move(value)); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddAddresses(Aws::String&& key, AddressConfiguration&& value) { m_addressesHasBeenSet = true; m_addresses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddAddresses(const char* key, AddressConfiguration&& value) { m_addressesHasBeenSet = true; m_addresses.emplace(key, std::move(value)); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddAddresses(const char* key, const AddressConfiguration& value) { m_addressesHasBeenSet = true; m_addresses.emplace(key, value); return *this; }


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
    inline MessageRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline MessageRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline MessageRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline MessageRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline MessageRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline MessageRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline MessageRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline MessageRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message. This
     * payload is added to the push notification's 'data.pinpoint' object or added to
     * the email/sms delivery receipt event attributes.
     */
    inline MessageRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline const Aws::Map<Aws::String, EndpointSendConfiguration>& GetEndpoints() const{ return m_endpoints; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline void SetEndpoints(const Aws::Map<Aws::String, EndpointSendConfiguration>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline void SetEndpoints(Aws::Map<Aws::String, EndpointSendConfiguration>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& WithEndpoints(const Aws::Map<Aws::String, EndpointSendConfiguration>& value) { SetEndpoints(value); return *this;}

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& WithEndpoints(Aws::Map<Aws::String, EndpointSendConfiguration>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddEndpoints(const Aws::String& key, const EndpointSendConfiguration& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddEndpoints(Aws::String&& key, const EndpointSendConfiguration& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddEndpoints(const Aws::String& key, EndpointSendConfiguration&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddEndpoints(Aws::String&& key, EndpointSendConfiguration&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddEndpoints(const char* key, EndpointSendConfiguration&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * A map of destination addresses, with the address as the key(Email address, phone
     * number or push token) and the Address Configuration as the value.
     */
    inline MessageRequest& AddEndpoints(const char* key, const EndpointSendConfiguration& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }


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
    inline MessageRequest& WithMessageConfiguration(const DirectMessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * Message configuration.
     */
    inline MessageRequest& WithMessageConfiguration(DirectMessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, AddressConfiguration> m_addresses;
    bool m_addressesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet;

    Aws::Map<Aws::String, EndpointSendConfiguration> m_endpoints;
    bool m_endpointsHasBeenSet;

    DirectMessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
