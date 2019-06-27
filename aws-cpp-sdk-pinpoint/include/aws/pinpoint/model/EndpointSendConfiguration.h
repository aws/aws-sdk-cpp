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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the content, including message variables and attributes, to use in
   * a message that's sent directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointSendConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointSendConfiguration
  {
  public:
    EndpointSendConfiguration();
    EndpointSendConfiguration(Aws::Utils::Json::JsonView jsonValue);
    EndpointSendConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline const Aws::String& GetBodyOverride() const{ return m_bodyOverride; }

    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline bool BodyOverrideHasBeenSet() const { return m_bodyOverrideHasBeenSet; }

    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline void SetBodyOverride(const Aws::String& value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride = value; }

    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline void SetBodyOverride(Aws::String&& value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride = std::move(value); }

    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline void SetBodyOverride(const char* value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride.assign(value); }

    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline EndpointSendConfiguration& WithBodyOverride(const Aws::String& value) { SetBodyOverride(value); return *this;}

    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline EndpointSendConfiguration& WithBodyOverride(Aws::String&& value) { SetBodyOverride(std::move(value)); return *this;}

    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline EndpointSendConfiguration& WithBodyOverride(const char* value) { SetBodyOverride(value); return *this;}


    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message for the address. For a
     * push notification, this payload is added to the data.pinpoint object. For an
     * email or text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline EndpointSendConfiguration& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides the message.</p>
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides the message.</p>
     */
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides the message.</p>
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides the message.</p>
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides the message.</p>
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides the message.</p>
     */
    inline EndpointSendConfiguration& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides the message.</p>
     */
    inline EndpointSendConfiguration& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides the message.</p>
     */
    inline EndpointSendConfiguration& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline EndpointSendConfiguration& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline EndpointSendConfiguration& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline EndpointSendConfiguration& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline EndpointSendConfiguration& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline EndpointSendConfiguration& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline EndpointSendConfiguration& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline EndpointSendConfiguration& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline EndpointSendConfiguration& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline const Aws::String& GetTitleOverride() const{ return m_titleOverride; }

    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline bool TitleOverrideHasBeenSet() const { return m_titleOverrideHasBeenSet; }

    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline void SetTitleOverride(const Aws::String& value) { m_titleOverrideHasBeenSet = true; m_titleOverride = value; }

    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline void SetTitleOverride(Aws::String&& value) { m_titleOverrideHasBeenSet = true; m_titleOverride = std::move(value); }

    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline void SetTitleOverride(const char* value) { m_titleOverrideHasBeenSet = true; m_titleOverride.assign(value); }

    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline EndpointSendConfiguration& WithTitleOverride(const Aws::String& value) { SetTitleOverride(value); return *this;}

    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline EndpointSendConfiguration& WithTitleOverride(Aws::String&& value) { SetTitleOverride(std::move(value)); return *this;}

    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline EndpointSendConfiguration& WithTitleOverride(const char* value) { SetTitleOverride(value); return *this;}

  private:

    Aws::String m_bodyOverride;
    bool m_bodyOverrideHasBeenSet;

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
