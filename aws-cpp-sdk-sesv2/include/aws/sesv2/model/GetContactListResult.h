/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/Topic.h>
#include <aws/sesv2/model/Tag.h>
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
  class GetContactListResult
  {
  public:
    AWS_SESV2_API GetContactListResult();
    AWS_SESV2_API GetContactListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetContactListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(const Aws::String& value) { m_contactListName = value; }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(Aws::String&& value) { m_contactListName = std::move(value); }

    /**
     * <p>The name of the contact list.</p>
     */
    inline void SetContactListName(const char* value) { m_contactListName.assign(value); }

    /**
     * <p>The name of the contact list.</p>
     */
    inline GetContactListResult& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}

    /**
     * <p>The name of the contact list.</p>
     */
    inline GetContactListResult& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact list.</p>
     */
    inline GetContactListResult& WithContactListName(const char* value) { SetContactListName(value); return *this;}


    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline const Aws::Vector<Topic>& GetTopics() const{ return m_topics; }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline void SetTopics(const Aws::Vector<Topic>& value) { m_topics = value; }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline void SetTopics(Aws::Vector<Topic>&& value) { m_topics = std::move(value); }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline GetContactListResult& WithTopics(const Aws::Vector<Topic>& value) { SetTopics(value); return *this;}

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline GetContactListResult& WithTopics(Aws::Vector<Topic>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline GetContactListResult& AddTopics(const Topic& value) { m_topics.push_back(value); return *this; }

    /**
     * <p>An interest group, theme, or label within a list. A contact list can have
     * multiple topics.</p>
     */
    inline GetContactListResult& AddTopics(Topic&& value) { m_topics.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline GetContactListResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline GetContactListResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of what the contact list is about.</p>
     */
    inline GetContactListResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A timestamp noting when the contact list was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>A timestamp noting when the contact list was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>A timestamp noting when the contact list was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>A timestamp noting when the contact list was created.</p>
     */
    inline GetContactListResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>A timestamp noting when the contact list was created.</p>
     */
    inline GetContactListResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>A timestamp noting the last time the contact list was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>A timestamp noting the last time the contact list was updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }

    /**
     * <p>A timestamp noting the last time the contact list was updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>A timestamp noting the last time the contact list was updated.</p>
     */
    inline GetContactListResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>A timestamp noting the last time the contact list was updated.</p>
     */
    inline GetContactListResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline GetContactListResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline GetContactListResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline GetContactListResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with a contact list.</p>
     */
    inline GetContactListResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_contactListName;

    Aws::Vector<Topic> m_topics;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
