/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/TopicPreference.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A contact is the end-user who is receiving the email.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Contact">AWS API
   * Reference</a></p>
   */
  class Contact
  {
  public:
    AWS_SESV2_API Contact();
    AWS_SESV2_API Contact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Contact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The contact's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The contact's email address.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The contact's email address.</p>
     */
    inline Contact& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The contact's email address.</p>
     */
    inline Contact& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The contact's email address.</p>
     */
    inline Contact& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicPreferences() const{ return m_topicPreferences; }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline bool TopicPreferencesHasBeenSet() const { return m_topicPreferencesHasBeenSet; }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline void SetTopicPreferences(const Aws::Vector<TopicPreference>& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = value; }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline void SetTopicPreferences(Aws::Vector<TopicPreference>&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = std::move(value); }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline Contact& WithTopicPreferences(const Aws::Vector<TopicPreference>& value) { SetTopicPreferences(value); return *this;}

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline Contact& WithTopicPreferences(Aws::Vector<TopicPreference>&& value) { SetTopicPreferences(std::move(value)); return *this;}

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline Contact& AddTopicPreferences(const TopicPreference& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.push_back(value); return *this; }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a topic.</p>
     */
    inline Contact& AddTopicPreferences(TopicPreference&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.push_back(std::move(value)); return *this; }


    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicDefaultPreferences() const{ return m_topicDefaultPreferences; }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline bool TopicDefaultPreferencesHasBeenSet() const { return m_topicDefaultPreferencesHasBeenSet; }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline void SetTopicDefaultPreferences(const Aws::Vector<TopicPreference>& value) { m_topicDefaultPreferencesHasBeenSet = true; m_topicDefaultPreferences = value; }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline void SetTopicDefaultPreferences(Aws::Vector<TopicPreference>&& value) { m_topicDefaultPreferencesHasBeenSet = true; m_topicDefaultPreferences = std::move(value); }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline Contact& WithTopicDefaultPreferences(const Aws::Vector<TopicPreference>& value) { SetTopicDefaultPreferences(value); return *this;}

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline Contact& WithTopicDefaultPreferences(Aws::Vector<TopicPreference>&& value) { SetTopicDefaultPreferences(std::move(value)); return *this;}

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline Contact& AddTopicDefaultPreferences(const TopicPreference& value) { m_topicDefaultPreferencesHasBeenSet = true; m_topicDefaultPreferences.push_back(value); return *this; }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline Contact& AddTopicDefaultPreferences(TopicPreference&& value) { m_topicDefaultPreferencesHasBeenSet = true; m_topicDefaultPreferences.push_back(std::move(value)); return *this; }


    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool GetUnsubscribeAll() const{ return m_unsubscribeAll; }

    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool UnsubscribeAllHasBeenSet() const { return m_unsubscribeAllHasBeenSet; }

    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline void SetUnsubscribeAll(bool value) { m_unsubscribeAllHasBeenSet = true; m_unsubscribeAll = value; }

    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline Contact& WithUnsubscribeAll(bool value) { SetUnsubscribeAll(value); return *this;}


    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline Contact& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline Contact& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::Vector<TopicPreference> m_topicPreferences;
    bool m_topicPreferencesHasBeenSet = false;

    Aws::Vector<TopicPreference> m_topicDefaultPreferences;
    bool m_topicDefaultPreferencesHasBeenSet = false;

    bool m_unsubscribeAll;
    bool m_unsubscribeAllHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
