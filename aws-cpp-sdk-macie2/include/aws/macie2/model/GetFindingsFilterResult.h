/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/FindingsFilterAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/FindingCriteria.h>
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
  class GetFindingsFilterResult
  {
  public:
    AWS_MACIE2_API GetFindingsFilterResult();
    AWS_MACIE2_API GetFindingsFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetFindingsFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The action that's performed on findings that match the filter criteria
     * (findingCriteria). Possible values are: ARCHIVE, suppress (automatically
     * archive) the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline const FindingsFilterAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that's performed on findings that match the filter criteria
     * (findingCriteria). Possible values are: ARCHIVE, suppress (automatically
     * archive) the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline void SetAction(const FindingsFilterAction& value) { m_action = value; }

    /**
     * <p>The action that's performed on findings that match the filter criteria
     * (findingCriteria). Possible values are: ARCHIVE, suppress (automatically
     * archive) the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline void SetAction(FindingsFilterAction&& value) { m_action = std::move(value); }

    /**
     * <p>The action that's performed on findings that match the filter criteria
     * (findingCriteria). Possible values are: ARCHIVE, suppress (automatically
     * archive) the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline GetFindingsFilterResult& WithAction(const FindingsFilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that's performed on findings that match the filter criteria
     * (findingCriteria). Possible values are: ARCHIVE, suppress (automatically
     * archive) the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline GetFindingsFilterResult& WithAction(FindingsFilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline GetFindingsFilterResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline GetFindingsFilterResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline GetFindingsFilterResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The custom description of the filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The custom description of the filter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The custom description of the filter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The custom description of the filter.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The custom description of the filter.</p>
     */
    inline GetFindingsFilterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The custom description of the filter.</p>
     */
    inline GetFindingsFilterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the filter.</p>
     */
    inline GetFindingsFilterResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The criteria that's used to filter findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * <p>The criteria that's used to filter findings.</p>
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteria = value; }

    /**
     * <p>The criteria that's used to filter findings.</p>
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteria = std::move(value); }

    /**
     * <p>The criteria that's used to filter findings.</p>
     */
    inline GetFindingsFilterResult& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * <p>The criteria that's used to filter findings.</p>
     */
    inline GetFindingsFilterResult& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline GetFindingsFilterResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline GetFindingsFilterResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline GetFindingsFilterResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The custom name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline GetFindingsFilterResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The custom name of the filter.</p>
     */
    inline GetFindingsFilterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the filter.</p>
     */
    inline GetFindingsFilterResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline int GetPosition() const{ return m_position; }

    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline void SetPosition(int value) { m_position = value; }

    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline GetFindingsFilterResult& WithPosition(int value) { SetPosition(value); return *this;}


    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline GetFindingsFilterResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    FindingsFilterAction m_action;

    Aws::String m_arn;

    Aws::String m_description;

    FindingCriteria m_findingCriteria;

    Aws::String m_id;

    Aws::String m_name;

    int m_position;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
