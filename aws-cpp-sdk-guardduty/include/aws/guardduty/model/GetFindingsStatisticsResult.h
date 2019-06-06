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
#include <aws/guardduty/model/FindingStatistics.h>
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
  class AWS_GUARDDUTY_API GetFindingsStatisticsResult
  {
  public:
    GetFindingsStatisticsResult();
    GetFindingsStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFindingsStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Finding statistics object.</p>
     */
    inline const FindingStatistics& GetFindingStatistics() const{ return m_findingStatistics; }

    /**
     * <p>Finding statistics object.</p>
     */
    inline void SetFindingStatistics(const FindingStatistics& value) { m_findingStatistics = value; }

    /**
     * <p>Finding statistics object.</p>
     */
    inline void SetFindingStatistics(FindingStatistics&& value) { m_findingStatistics = std::move(value); }

    /**
     * <p>Finding statistics object.</p>
     */
    inline GetFindingsStatisticsResult& WithFindingStatistics(const FindingStatistics& value) { SetFindingStatistics(value); return *this;}

    /**
     * <p>Finding statistics object.</p>
     */
    inline GetFindingsStatisticsResult& WithFindingStatistics(FindingStatistics&& value) { SetFindingStatistics(std::move(value)); return *this;}

  private:

    FindingStatistics m_findingStatistics;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
