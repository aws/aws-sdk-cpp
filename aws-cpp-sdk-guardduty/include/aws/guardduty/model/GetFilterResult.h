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
#include <aws/guardduty/model/FilterAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingCriteria.h>
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
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline void SetAction(const FilterAction& value) { m_action = value; }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline void SetAction(FilterAction&& value) { m_action = std::move(value); }

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline GetFilterResult& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * Specifies the action that is to be applied to the findings that match the
     * filter.
     */
    inline GetFilterResult& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * The description of the filter.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the filter.
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * The description of the filter.
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * The description of the filter.
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * The description of the filter.
     */
    inline GetFilterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the filter.
     */
    inline GetFilterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the filter.
     */
    inline GetFilterResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline const FindingCriteria& GetFindingCriteria() const{ return m_findingCriteria; }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline void SetFindingCriteria(const FindingCriteria& value) { m_findingCriteria = value; }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline void SetFindingCriteria(FindingCriteria&& value) { m_findingCriteria = std::move(value); }

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline GetFilterResult& WithFindingCriteria(const FindingCriteria& value) { SetFindingCriteria(value); return *this;}

    /**
     * Represents the criteria to be used in the filter for querying findings.
     */
    inline GetFilterResult& WithFindingCriteria(FindingCriteria&& value) { SetFindingCriteria(std::move(value)); return *this;}


    /**
     * The name of the filter.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the filter.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The name of the filter.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The name of the filter.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The name of the filter.
     */
    inline GetFilterResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the filter.
     */
    inline GetFilterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the filter.
     */
    inline GetFilterResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline void SetRank(int value) { m_rank = value; }

    /**
     * Specifies the position of the filter in the list of current filters. Also
     * specifies the order in which this filter is applied to the findings.
     */
    inline GetFilterResult& WithRank(int value) { SetRank(value); return *this;}

  private:

    FilterAction m_action;

    Aws::String m_description;

    FindingCriteria m_findingCriteria;

    Aws::String m_name;

    int m_rank;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
