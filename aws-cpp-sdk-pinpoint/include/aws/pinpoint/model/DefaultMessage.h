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
   * <p>Specifies the default message to use for all channels.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DefaultMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API DefaultMessage
  {
  public:
    DefaultMessage();
    DefaultMessage(Aws::Utils::Json::JsonView jsonValue);
    DefaultMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default message body of the push notification, email, or SMS message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The default message body of the push notification, email, or SMS message.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The default message body of the push notification, email, or SMS message.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The default message body of the push notification, email, or SMS message.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The default message body of the push notification, email, or SMS message.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The default message body of the push notification, email, or SMS message.</p>
     */
    inline DefaultMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The default message body of the push notification, email, or SMS message.</p>
     */
    inline DefaultMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The default message body of the push notification, email, or SMS message.</p>
     */
    inline DefaultMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline DefaultMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline DefaultMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline DefaultMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline DefaultMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline DefaultMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline DefaultMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline DefaultMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the push notification, email, or SMS
     * message. You can override these default variables with individual address
     * variables.</p>
     */
    inline DefaultMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
