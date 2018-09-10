﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ChannelType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * Address configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/AddressConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API AddressConfiguration
  {
  public:
    AddressConfiguration();
    AddressConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AddressConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Body override. If specified will override default body.
     */
    inline const Aws::String& GetBodyOverride() const{ return m_bodyOverride; }

    /**
     * Body override. If specified will override default body.
     */
    inline void SetBodyOverride(const Aws::String& value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride = value; }

    /**
     * Body override. If specified will override default body.
     */
    inline void SetBodyOverride(Aws::String&& value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride = std::move(value); }

    /**
     * Body override. If specified will override default body.
     */
    inline void SetBodyOverride(const char* value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride.assign(value); }

    /**
     * Body override. If specified will override default body.
     */
    inline AddressConfiguration& WithBodyOverride(const Aws::String& value) { SetBodyOverride(value); return *this;}

    /**
     * Body override. If specified will override default body.
     */
    inline AddressConfiguration& WithBodyOverride(Aws::String&& value) { SetBodyOverride(std::move(value)); return *this;}

    /**
     * Body override. If specified will override default body.
     */
    inline AddressConfiguration& WithBodyOverride(const char* value) { SetBodyOverride(value); return *this;}


    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline AddressConfiguration& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}

    /**
     * The channel type.

Valid values: GCM | APNS | APNS_SANDBOX | APNS_VOIP |
     * APNS_VOIP_SANDBOX | ADM | SMS | EMAIL | BAIDU
     */
    inline AddressConfiguration& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}


    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * A map of custom attributes to attributes to be attached to the message for this
     * address. This payload is added to the push notification's 'data.pinpoint' object
     * or added to the email/sms delivery receipt event attributes.
     */
    inline AddressConfiguration& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline AddressConfiguration& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline AddressConfiguration& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * The Raw JSON formatted string to be used as the payload. This value overrides
     * the message.
     */
    inline AddressConfiguration& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline AddressConfiguration& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline AddressConfiguration& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline AddressConfiguration& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline AddressConfiguration& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline AddressConfiguration& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline AddressConfiguration& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline AddressConfiguration& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * A map of substitution values for the message to be merged with the
     * DefaultMessage's substitutions. Substitutions on this map take precedence over
     * the all other substitutions.
     */
    inline AddressConfiguration& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * Title override. If specified will override default title if applicable.
     */
    inline const Aws::String& GetTitleOverride() const{ return m_titleOverride; }

    /**
     * Title override. If specified will override default title if applicable.
     */
    inline void SetTitleOverride(const Aws::String& value) { m_titleOverrideHasBeenSet = true; m_titleOverride = value; }

    /**
     * Title override. If specified will override default title if applicable.
     */
    inline void SetTitleOverride(Aws::String&& value) { m_titleOverrideHasBeenSet = true; m_titleOverride = std::move(value); }

    /**
     * Title override. If specified will override default title if applicable.
     */
    inline void SetTitleOverride(const char* value) { m_titleOverrideHasBeenSet = true; m_titleOverride.assign(value); }

    /**
     * Title override. If specified will override default title if applicable.
     */
    inline AddressConfiguration& WithTitleOverride(const Aws::String& value) { SetTitleOverride(value); return *this;}

    /**
     * Title override. If specified will override default title if applicable.
     */
    inline AddressConfiguration& WithTitleOverride(Aws::String&& value) { SetTitleOverride(std::move(value)); return *this;}

    /**
     * Title override. If specified will override default title if applicable.
     */
    inline AddressConfiguration& WithTitleOverride(const char* value) { SetTitleOverride(value); return *this;}

  private:

    Aws::String m_bodyOverride;
    bool m_bodyOverrideHasBeenSet;

    ChannelType m_channelType;
    bool m_channelTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;

    Aws::String m_titleOverride;
    bool m_titleOverrideHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
