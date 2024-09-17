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


    ///@{
    /**
     * <p>The action that's performed on findings that match the filter criteria
     * (findingCriteria). Possible values are: ARCHIVE, suppress (automatically
     * archive) the findings; and, NOOP, don't perform any action on the findings.</p>
     */
    inline const FindingsFilterAction& GetAction() const{ return m_action; }
    inline void SetAction(const FindingsFilterAction& value) { m_action = value; }
    inline void SetAction(FindingsFilterAction&& value) { m_action = std::move(value); }
    inline GetFindingsFilterResult& WithAction(const FindingsFilterAction& value) { SetAction(value); return *this;}
    inline GetFindingsFilterResult& WithAction(FindingsFilterAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetFindingsFilterResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetFindingsFilterResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetFindingsFilterResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetFindingsFilterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetFindingsFilterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetFindingsFilterResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that's used to filter findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteria = value; }
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteria = std::move(value); }
    inline GetFindingsFilterResult& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}
    inline GetFindingsFilterResult& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetFindingsFilterResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetFindingsFilterResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetFindingsFilterResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetFindingsFilterResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetFindingsFilterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetFindingsFilterResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the filter in the list of saved filters on the Amazon Macie
     * console. This value also determines the order in which the filter is applied to
     * findings, relative to other filters that are also applied to the findings.</p>
     */
    inline int GetPosition() const{ return m_position; }
    inline void SetPosition(int value) { m_position = value; }
    inline GetFindingsFilterResult& WithPosition(int value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetFindingsFilterResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetFindingsFilterResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetFindingsFilterResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetFindingsFilterResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetFindingsFilterResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetFindingsFilterResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetFindingsFilterResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetFindingsFilterResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetFindingsFilterResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFindingsFilterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFindingsFilterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFindingsFilterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FindingsFilterAction m_action;

    Aws::String m_arn;

    Aws::String m_description;

    FindingCriteria m_findingCriteria;

    Aws::String m_id;

    Aws::String m_name;

    int m_position;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
