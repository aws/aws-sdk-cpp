/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/PipelineSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class ListPipelinesResult
  {
  public:
    AWS_IOTANALYTICS_API ListPipelinesResult();
    AWS_IOTANALYTICS_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>PipelineSummary</code> objects.</p>
     */
    inline const Aws::Vector<PipelineSummary>& GetPipelineSummaries() const{ return m_pipelineSummaries; }

    /**
     * <p>A list of <code>PipelineSummary</code> objects.</p>
     */
    inline void SetPipelineSummaries(const Aws::Vector<PipelineSummary>& value) { m_pipelineSummaries = value; }

    /**
     * <p>A list of <code>PipelineSummary</code> objects.</p>
     */
    inline void SetPipelineSummaries(Aws::Vector<PipelineSummary>&& value) { m_pipelineSummaries = std::move(value); }

    /**
     * <p>A list of <code>PipelineSummary</code> objects.</p>
     */
    inline ListPipelinesResult& WithPipelineSummaries(const Aws::Vector<PipelineSummary>& value) { SetPipelineSummaries(value); return *this;}

    /**
     * <p>A list of <code>PipelineSummary</code> objects.</p>
     */
    inline ListPipelinesResult& WithPipelineSummaries(Aws::Vector<PipelineSummary>&& value) { SetPipelineSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PipelineSummary</code> objects.</p>
     */
    inline ListPipelinesResult& AddPipelineSummaries(const PipelineSummary& value) { m_pipelineSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>PipelineSummary</code> objects.</p>
     */
    inline ListPipelinesResult& AddPipelineSummaries(PipelineSummary&& value) { m_pipelineSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListPipelinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListPipelinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListPipelinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PipelineSummary> m_pipelineSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
