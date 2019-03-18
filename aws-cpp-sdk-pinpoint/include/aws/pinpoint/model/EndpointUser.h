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
  class JsonView;
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
    EndpointUser(Aws::Utils::Json::JsonView jsonValue);
    EndpointUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline void SetUserAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline void SetUserAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointUser& WithUserAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetUserAttributes(value); return *this;}

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointUser& WithUserAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointUser& AddUserAttributes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointUser& AddUserAttributes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointUser& AddUserAttributes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointUser& AddUserAttributes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointUser& AddUserAttributes(const char* key, Aws::Vector<Aws::String>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that describe the user by associating a name with an array of
     * values. For example, an attribute named "interests" might have the following
     * values: ["science", "politics", "travel"]. You can use these attributes as
     * selection criteria when you create segments.

The Amazon Pinpoint console can't
     * display attribute names that include the following characters: hash/pound sign
     * (#), colon (:), question mark (?), backslash (\), and forward slash (/). For
     * this reason, you should avoid using these characters in the names of custom
     * attributes.
     */
    inline EndpointUser& AddUserAttributes(const char* key, const Aws::Vector<Aws::String>& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace(key, value); return *this; }


    /**
     * The unique ID of the user.
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * The unique ID of the user.
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

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
