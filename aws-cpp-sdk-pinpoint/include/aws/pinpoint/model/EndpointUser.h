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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * Endpoint user specific custom userAttributes<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointUser">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointUser
  {
  public:
    EndpointUser();
    EndpointUser(const Aws::Utils::Json::JsonValue& jsonValue);
    EndpointUser& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline void SetUserAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline void SetUserAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline EndpointUser& WithUserAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetUserAttributes(value); return *this;}

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline EndpointUser& WithUserAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline EndpointUser& AddUserAttributes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline EndpointUser& AddUserAttributes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline EndpointUser& AddUserAttributes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline EndpointUser& AddUserAttributes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline EndpointUser& AddUserAttributes(const char* key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that describe an end user by associating a name with an array
     * of values. For example, an attribute named "interests" might have the values
     * ["science", "politics", "travel"]. You can use these attributes as selection
     * criteria when you create a segment of users to engage with a messaging
     * campaign.

The following characters are not recommended in attribute names: # :
     * ? \ /. The Amazon Pinpoint console does not display attributes that include
     * these characters in the name. This limitation does not apply to attribute
     * values.
     */
    inline EndpointUser& AddUserAttributes(const char* key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }


    /**
     * The unique ID of the user.
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * The unique ID of the user.
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * The unique ID of the user.
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * The unique ID of the user.
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * The unique ID of the user.
     */
    inline EndpointUser& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * The unique ID of the user.
     */
    inline EndpointUser& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * The unique ID of the user.
     */
    inline EndpointUser& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_userAttributes;
    bool m_userAttributesHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
