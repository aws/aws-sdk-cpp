/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/ResourceMetrics.h>
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
namespace DataSync
{
namespace Model
{
  class DescribeStorageSystemResourceMetricsResult
  {
  public:
    AWS_DATASYNC_API DescribeStorageSystemResourceMetricsResult();
    AWS_DATASYNC_API DescribeStorageSystemResourceMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeStorageSystemResourceMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details that your discovery job collected about your storage system
     * resource.</p>
     */
    inline const Aws::Vector<ResourceMetrics>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The details that your discovery job collected about your storage system
     * resource.</p>
     */
    inline void SetMetrics(const Aws::Vector<ResourceMetrics>& value) { m_metrics = value; }

    /**
     * <p>The details that your discovery job collected about your storage system
     * resource.</p>
     */
    inline void SetMetrics(Aws::Vector<ResourceMetrics>&& value) { m_metrics = std::move(value); }

    /**
     * <p>The details that your discovery job collected about your storage system
     * resource.</p>
     */
    inline DescribeStorageSystemResourceMetricsResult& WithMetrics(const Aws::Vector<ResourceMetrics>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The details that your discovery job collected about your storage system
     * resource.</p>
     */
    inline DescribeStorageSystemResourceMetricsResult& WithMetrics(Aws::Vector<ResourceMetrics>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The details that your discovery job collected about your storage system
     * resource.</p>
     */
    inline DescribeStorageSystemResourceMetricsResult& AddMetrics(const ResourceMetrics& value) { m_metrics.push_back(value); return *this; }

    /**
     * <p>The details that your discovery job collected about your storage system
     * resource.</p>
     */
    inline DescribeStorageSystemResourceMetricsResult& AddMetrics(ResourceMetrics&& value) { m_metrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline DescribeStorageSystemResourceMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline DescribeStorageSystemResourceMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline DescribeStorageSystemResourceMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeStorageSystemResourceMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeStorageSystemResourceMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeStorageSystemResourceMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResourceMetrics> m_metrics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
