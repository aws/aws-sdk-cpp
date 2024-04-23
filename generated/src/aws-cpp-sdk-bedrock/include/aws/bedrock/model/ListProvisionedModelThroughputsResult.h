/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ProvisionedModelSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListProvisionedModelThroughputsResult
  {
  public:
    AWS_BEDROCK_API ListProvisionedModelThroughputsResult();
    AWS_BEDROCK_API ListProvisionedModelThroughputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListProvisionedModelThroughputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, this value is returned. To see the next batch of
     * results, include this value in the <code>nextToken</code> field in another list
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, this value is returned. To see the next batch of
     * results, include this value in the <code>nextToken</code> field in another list
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, this value is returned. To see the next batch of
     * results, include this value in the <code>nextToken</code> field in another list
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, this value is returned. To see the next batch of
     * results, include this value in the <code>nextToken</code> field in another list
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, this value is returned. To see the next batch of
     * results, include this value in the <code>nextToken</code> field in another list
     * request.</p>
     */
    inline ListProvisionedModelThroughputsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, this value is returned. To see the next batch of
     * results, include this value in the <code>nextToken</code> field in another list
     * request.</p>
     */
    inline ListProvisionedModelThroughputsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, this value is returned. To see the next batch of
     * results, include this value in the <code>nextToken</code> field in another list
     * request.</p>
     */
    inline ListProvisionedModelThroughputsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of summaries, one for each Provisioned Throughput in the response.</p>
     */
    inline const Aws::Vector<ProvisionedModelSummary>& GetProvisionedModelSummaries() const{ return m_provisionedModelSummaries; }

    /**
     * <p>A list of summaries, one for each Provisioned Throughput in the response.</p>
     */
    inline void SetProvisionedModelSummaries(const Aws::Vector<ProvisionedModelSummary>& value) { m_provisionedModelSummaries = value; }

    /**
     * <p>A list of summaries, one for each Provisioned Throughput in the response.</p>
     */
    inline void SetProvisionedModelSummaries(Aws::Vector<ProvisionedModelSummary>&& value) { m_provisionedModelSummaries = std::move(value); }

    /**
     * <p>A list of summaries, one for each Provisioned Throughput in the response.</p>
     */
    inline ListProvisionedModelThroughputsResult& WithProvisionedModelSummaries(const Aws::Vector<ProvisionedModelSummary>& value) { SetProvisionedModelSummaries(value); return *this;}

    /**
     * <p>A list of summaries, one for each Provisioned Throughput in the response.</p>
     */
    inline ListProvisionedModelThroughputsResult& WithProvisionedModelSummaries(Aws::Vector<ProvisionedModelSummary>&& value) { SetProvisionedModelSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of summaries, one for each Provisioned Throughput in the response.</p>
     */
    inline ListProvisionedModelThroughputsResult& AddProvisionedModelSummaries(const ProvisionedModelSummary& value) { m_provisionedModelSummaries.push_back(value); return *this; }

    /**
     * <p>A list of summaries, one for each Provisioned Throughput in the response.</p>
     */
    inline ListProvisionedModelThroughputsResult& AddProvisionedModelSummaries(ProvisionedModelSummary&& value) { m_provisionedModelSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProvisionedModelThroughputsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProvisionedModelThroughputsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProvisionedModelThroughputsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProvisionedModelSummary> m_provisionedModelSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
