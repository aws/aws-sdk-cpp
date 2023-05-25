/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class TestMetricFilterResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API TestMetricFilterResult();
    AWS_CLOUDWATCHLOGS_API TestMetricFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API TestMetricFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TestMetricFilterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TestMetricFilterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TestMetricFilterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MetricFilterMatchRecord> m_matches;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
