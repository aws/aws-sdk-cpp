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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/MetricFilterMatchRecord.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API TestMetricFilterResult
  {
  public:
    TestMetricFilterResult();
    TestMetricFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestMetricFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The matched events.</p>
     */
    inline const Aws::Vector<MetricFilterMatchRecord>& GetMatches() const{ return m_matches; }

    /**
     * <p>The matched events.</p>
     */
    inline void SetMatches(const Aws::Vector<MetricFilterMatchRecord>& value) { m_matches = value; }

    /**
     * <p>The matched events.</p>
     */
    inline void SetMatches(Aws::Vector<MetricFilterMatchRecord>&& value) { m_matches = std::move(value); }

    /**
     * <p>The matched events.</p>
     */
    inline TestMetricFilterResult& WithMatches(const Aws::Vector<MetricFilterMatchRecord>& value) { SetMatches(value); return *this;}

    /**
     * <p>The matched events.</p>
     */
    inline TestMetricFilterResult& WithMatches(Aws::Vector<MetricFilterMatchRecord>&& value) { SetMatches(std::move(value)); return *this;}

    /**
     * <p>The matched events.</p>
     */
    inline TestMetricFilterResult& AddMatches(const MetricFilterMatchRecord& value) { m_matches.push_back(value); return *this; }

    /**
     * <p>The matched events.</p>
     */
    inline TestMetricFilterResult& AddMatches(MetricFilterMatchRecord&& value) { m_matches.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MetricFilterMatchRecord> m_matches;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
