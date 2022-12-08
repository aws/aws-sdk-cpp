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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  class GetContactResult
  {
  public:
    AWS_SESV2_API GetContactResult();
    AWS_SESV2_API GetContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }

    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline void SetContactListName(const Aws::String& value) { m_contactListName = value; }

    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline void SetContactListName(Aws::String&& value) { m_contactListName = std::move(value); }

    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline void SetContactListName(const char* value) { m_contactListName.assign(value); }

    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline GetContactResult& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}

    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline GetContactResult& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact list to which the contact belongs.</p>
     */
    inline GetContactResult& WithContactListName(const char* value) { SetContactListName(value); return *this;}


    /**
     * <p>The contact's email addres.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The contact's email addres.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }

    /**
     * <p>The contact's email addres.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }

    /**
     * <p>The contact's email addres.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }

    /**
     * <p>The contact's email addres.</p>
     */
    inline GetContactResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The contact's email addres.</p>
     */
    inline GetContactResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The contact's email addres.</p>
     */
    inline GetContactResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicPreferences() const{ return m_topicPreferences; }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline void SetTopicPreferences(const Aws::Vector<TopicPreference>& value) { m_topicPreferences = value; }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline void SetTopicPreferences(Aws::Vector<TopicPreference>&& value) { m_topicPreferences = std::move(value); }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline GetContactResult& WithTopicPreferences(const Aws::Vector<TopicPreference>& value) { SetTopicPreferences(value); return *this;}

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline GetContactResult& WithTopicPreferences(Aws::Vector<TopicPreference>&& value) { SetTopicPreferences(std::move(value)); return *this;}

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline GetContactResult& AddTopicPreferences(const TopicPreference& value) { m_topicPreferences.push_back(value); return *this; }

    /**
     * <p>The contact's preference for being opted-in to or opted-out of a
     * topic.&gt;</p>
     */
    inline GetContactResult& AddTopicPreferences(TopicPreference&& value) { m_topicPreferences.push_back(std::move(value)); return *this; }


    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicDefaultPreferences() const{ return m_topicDefaultPreferences; }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline void SetTopicDefaultPreferences(const Aws::Vector<TopicPreference>& value) { m_topicDefaultPreferences = value; }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline void SetTopicDefaultPreferences(Aws::Vector<TopicPreference>&& value) { m_topicDefaultPreferences = std::move(value); }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline GetContactResult& WithTopicDefaultPreferences(const Aws::Vector<TopicPreference>& value) { SetTopicDefaultPreferences(value); return *this;}

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline GetContactResult& WithTopicDefaultPreferences(Aws::Vector<TopicPreference>&& value) { SetTopicDefaultPreferences(std::move(value)); return *this;}

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline GetContactResult& AddTopicDefaultPreferences(const TopicPreference& value) { m_topicDefaultPreferences.push_back(value); return *this; }

    /**
     * <p>The default topic preferences applied to the contact.</p>
     */
    inline GetContactResult& AddTopicDefaultPreferences(TopicPreference&& value) { m_topicDefaultPreferences.push_back(std::move(value)); return *this; }


    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool GetUnsubscribeAll() const{ return m_unsubscribeAll; }

    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline void SetUnsubscribeAll(bool value) { m_unsubscribeAll = value; }

    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline GetContactResult& WithUnsubscribeAll(bool value) { SetUnsubscribeAll(value); return *this;}


    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline const Aws::String& GetAttributesData() const{ return m_attributesData; }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline void SetAttributesData(const Aws::String& value) { m_attributesData = value; }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline void SetAttributesData(Aws::String&& value) { m_attributesData = std::move(value); }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline void SetAttributesData(const char* value) { m_attributesData.assign(value); }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline GetContactResult& WithAttributesData(const Aws::String& value) { SetAttributesData(value); return *this;}

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline GetContactResult& WithAttributesData(Aws::String&& value) { SetAttributesData(std::move(value)); return *this;}

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline GetContactResult& WithAttributesData(const char* value) { SetAttributesData(value); return *this;}


    /**
     * <p>A timestamp noting when the contact was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>A timestamp noting when the contact was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>A timestamp noting when the contact was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>A timestamp noting when the contact was created.</p>
     */
    inline GetContactResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>A timestamp noting when the contact was created.</p>
     */
    inline GetContactResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline GetContactResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>A timestamp noting the last time the contact's information was updated.</p>
     */
    inline GetContactResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_contactListName;

    Aws::String m_emailAddress;

    Aws::Vector<TopicPreference> m_topicPreferences;

    Aws::Vector<TopicPreference> m_topicDefaultPreferences;

    bool m_unsubscribeAll;

    Aws::String m_attributesData;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
