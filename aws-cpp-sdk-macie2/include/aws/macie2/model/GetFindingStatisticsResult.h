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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/GroupCount.h>
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
  class AWS_MACIE2_API GetFindingStatisticsResult
  {
  public:
    GetFindingStatisticsResult();
    GetFindingStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFindingStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each group of findings that meet the filter
     * criteria specified in the request.</p>
     */
    inline const Aws::Vector<GroupCount>& GetCountsByGroup() const{ return m_countsByGroup; }

    /**
     * <p>An array of objects, one for each group of findings that meet the filter
     * criteria specified in the request.</p>
     */
    inline void SetCountsByGroup(const Aws::Vector<GroupCount>& value) { m_countsByGroup = value; }

    /**
     * <p>An array of objects, one for each group of findings that meet the filter
     * criteria specified in the request.</p>
     */
    inline void SetCountsByGroup(Aws::Vector<GroupCount>&& value) { m_countsByGroup = std::move(value); }

    /**
     * <p>An array of objects, one for each group of findings that meet the filter
     * criteria specified in the request.</p>
     */
    inline GetFindingStatisticsResult& WithCountsByGroup(const Aws::Vector<GroupCount>& value) { SetCountsByGroup(value); return *this;}

    /**
     * <p>An array of objects, one for each group of findings that meet the filter
     * criteria specified in the request.</p>
     */
    inline GetFindingStatisticsResult& WithCountsByGroup(Aws::Vector<GroupCount>&& value) { SetCountsByGroup(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each group of findings that meet the filter
     * criteria specified in the request.</p>
     */
    inline GetFindingStatisticsResult& AddCountsByGroup(const GroupCount& value) { m_countsByGroup.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each group of findings that meet the filter
     * criteria specified in the request.</p>
     */
    inline GetFindingStatisticsResult& AddCountsByGroup(GroupCount&& value) { m_countsByGroup.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GroupCount> m_countsByGroup;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
