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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/GroupDefinition.h>
#include <aws/ce/model/ResultByTime.h>
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
namespace CostExplorer
{
namespace Model
{
  class AWS_COSTEXPLORER_API GetCostAndUsageResult
  {
  public:
    GetCostAndUsageResult();
    GetCostAndUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCostAndUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetCostAndUsageResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetCostAndUsageResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetCostAndUsageResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupDefinitions() const{ return m_groupDefinitions; }

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline void SetGroupDefinitions(const Aws::Vector<GroupDefinition>& value) { m_groupDefinitions = value; }

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline void SetGroupDefinitions(Aws::Vector<GroupDefinition>&& value) { m_groupDefinitions = std::move(value); }

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline GetCostAndUsageResult& WithGroupDefinitions(const Aws::Vector<GroupDefinition>& value) { SetGroupDefinitions(value); return *this;}

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline GetCostAndUsageResult& WithGroupDefinitions(Aws::Vector<GroupDefinition>&& value) { SetGroupDefinitions(std::move(value)); return *this;}

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline GetCostAndUsageResult& AddGroupDefinitions(const GroupDefinition& value) { m_groupDefinitions.push_back(value); return *this; }

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline GetCostAndUsageResult& AddGroupDefinitions(GroupDefinition&& value) { m_groupDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time period that is covered by the results in the response.</p>
     */
    inline const Aws::Vector<ResultByTime>& GetResultsByTime() const{ return m_resultsByTime; }

    /**
     * <p>The time period that is covered by the results in the response.</p>
     */
    inline void SetResultsByTime(const Aws::Vector<ResultByTime>& value) { m_resultsByTime = value; }

    /**
     * <p>The time period that is covered by the results in the response.</p>
     */
    inline void SetResultsByTime(Aws::Vector<ResultByTime>&& value) { m_resultsByTime = std::move(value); }

    /**
     * <p>The time period that is covered by the results in the response.</p>
     */
    inline GetCostAndUsageResult& WithResultsByTime(const Aws::Vector<ResultByTime>& value) { SetResultsByTime(value); return *this;}

    /**
     * <p>The time period that is covered by the results in the response.</p>
     */
    inline GetCostAndUsageResult& WithResultsByTime(Aws::Vector<ResultByTime>&& value) { SetResultsByTime(std::move(value)); return *this;}

    /**
     * <p>The time period that is covered by the results in the response.</p>
     */
    inline GetCostAndUsageResult& AddResultsByTime(const ResultByTime& value) { m_resultsByTime.push_back(value); return *this; }

    /**
     * <p>The time period that is covered by the results in the response.</p>
     */
    inline GetCostAndUsageResult& AddResultsByTime(ResultByTime&& value) { m_resultsByTime.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextPageToken;

    Aws::Vector<GroupDefinition> m_groupDefinitions;

    Aws::Vector<ResultByTime> m_resultsByTime;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
