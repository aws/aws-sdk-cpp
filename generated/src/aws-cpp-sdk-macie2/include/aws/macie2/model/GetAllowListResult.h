/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/AllowListCriteria.h>
#include <aws/macie2/model/AllowListStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Macie2
{
namespace Model
{
  class GetAllowListResult
  {
  public:
    AWS_MACIE2_API GetAllowListResult();
    AWS_MACIE2_API GetAllowListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetAllowListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the allow list.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the allow list.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the allow list.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the allow list.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the allow list.</p>
     */
    inline GetAllowListResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the allow list.</p>
     */
    inline GetAllowListResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the allow list.</p>
     */
    inline GetAllowListResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list
     * was created in Amazon Macie.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list
     * was created in Amazon Macie.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list
     * was created in Amazon Macie.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list
     * was created in Amazon Macie.</p>
     */
    inline GetAllowListResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list
     * was created in Amazon Macie.</p>
     */
    inline GetAllowListResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline const AllowListCriteria& GetCriteria() const{ return m_criteria; }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline void SetCriteria(const AllowListCriteria& value) { m_criteria = value; }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline void SetCriteria(AllowListCriteria&& value) { m_criteria = std::move(value); }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline GetAllowListResult& WithCriteria(const AllowListCriteria& value) { SetCriteria(value); return *this;}

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression (regex) that defines a text pattern to
     * ignore.</p>
     */
    inline GetAllowListResult& WithCriteria(AllowListCriteria&& value) { SetCriteria(std::move(value)); return *this;}


    /**
     * <p>The custom description of the allow list.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The custom description of the allow list.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The custom description of the allow list.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The custom description of the allow list.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The custom description of the allow list.</p>
     */
    inline GetAllowListResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The custom description of the allow list.</p>
     */
    inline GetAllowListResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the allow list.</p>
     */
    inline GetAllowListResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for the allow list.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the allow list.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier for the allow list.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier for the allow list.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier for the allow list.</p>
     */
    inline GetAllowListResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the allow list.</p>
     */
    inline GetAllowListResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the allow list.</p>
     */
    inline GetAllowListResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The custom name of the allow list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The custom name of the allow list.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The custom name of the allow list.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The custom name of the allow list.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The custom name of the allow list.</p>
     */
    inline GetAllowListResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The custom name of the allow list.</p>
     */
    inline GetAllowListResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the allow list.</p>
     */
    inline GetAllowListResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the allow list, which indicates whether Amazon Macie
     * can access and use the list's criteria.</p>
     */
    inline const AllowListStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the allow list, which indicates whether Amazon Macie
     * can access and use the list's criteria.</p>
     */
    inline void SetStatus(const AllowListStatus& value) { m_status = value; }

    /**
     * <p>The current status of the allow list, which indicates whether Amazon Macie
     * can access and use the list's criteria.</p>
     */
    inline void SetStatus(AllowListStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the allow list, which indicates whether Amazon Macie
     * can access and use the list's criteria.</p>
     */
    inline GetAllowListResult& WithStatus(const AllowListStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the allow list, which indicates whether Amazon Macie
     * can access and use the list's criteria.</p>
     */
    inline GetAllowListResult& WithStatus(AllowListStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the allow list.</p>
     */
    inline GetAllowListResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list's
     * settings were most recently changed in Amazon Macie.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list's
     * settings were most recently changed in Amazon Macie.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list's
     * settings were most recently changed in Amazon Macie.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list's
     * settings were most recently changed in Amazon Macie.</p>
     */
    inline GetAllowListResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the allow list's
     * settings were most recently changed in Amazon Macie.</p>
     */
    inline GetAllowListResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    AllowListCriteria m_criteria;

    Aws::String m_description;

    Aws::String m_id;

    Aws::String m_name;

    AllowListStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updatedAt;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
