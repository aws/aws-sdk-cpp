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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FilterAction.h>
#include <aws/guardduty/model/FindingCriteria.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API GetFilterResult
  {
  public:
    GetFilterResult();
    GetFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline GetFilterResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline GetFilterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline GetFilterResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the filter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the filter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the filter.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the filter.</p>
     */
    inline GetFilterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the filter.</p>
     */
    inline GetFilterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the filter.</p>
     */
    inline GetFilterResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(const FilterAction& value) { m_action = value; }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline void SetAction(FilterAction&& value) { m_action = std::move(value); }

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline GetFilterResult& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the action that is to be applied to the findings that match the
     * filter.</p>
     */
    inline GetFilterResult& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline void SetRank(int value) { m_rank = value; }

    /**
     * <p>Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.</p>
     */
    inline GetFilterResult& WithRank(int value) { SetRank(value); return *this;}


    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteria = value; }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteria = std::move(value); }

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline GetFilterResult& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * <p>Represents the criteria to be used in the filter for querying findings.</p>
     */
    inline GetFilterResult& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * <p>The tags of the filter resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the filter resource.</p>
     */
    inline GetFilterResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;

    Aws::String m_description;

    FilterAction m_action;

    int m_rank;

    FindingCriteria m_findingCriteria;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
