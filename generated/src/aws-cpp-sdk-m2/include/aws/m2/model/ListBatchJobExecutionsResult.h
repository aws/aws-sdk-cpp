/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/BatchJobExecutionSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListBatchJobExecutionsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobExecutionsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of batch job executions for an application.</p>
     */
    inline const Aws::Vector<BatchJobExecutionSummary>& GetBatchJobExecutions() const{ return m_batchJobExecutions; }

    /**
     * <p>Returns a list of batch job executions for an application.</p>
     */
    inline void SetBatchJobExecutions(const Aws::Vector<BatchJobExecutionSummary>& value) { m_batchJobExecutions = value; }

    /**
     * <p>Returns a list of batch job executions for an application.</p>
     */
    inline void SetBatchJobExecutions(Aws::Vector<BatchJobExecutionSummary>&& value) { m_batchJobExecutions = std::move(value); }

    /**
     * <p>Returns a list of batch job executions for an application.</p>
     */
    inline ListBatchJobExecutionsResult& WithBatchJobExecutions(const Aws::Vector<BatchJobExecutionSummary>& value) { SetBatchJobExecutions(value); return *this;}

    /**
     * <p>Returns a list of batch job executions for an application.</p>
     */
    inline ListBatchJobExecutionsResult& WithBatchJobExecutions(Aws::Vector<BatchJobExecutionSummary>&& value) { SetBatchJobExecutions(std::move(value)); return *this;}

    /**
     * <p>Returns a list of batch job executions for an application.</p>
     */
    inline ListBatchJobExecutionsResult& AddBatchJobExecutions(const BatchJobExecutionSummary& value) { m_batchJobExecutions.push_back(value); return *this; }

    /**
     * <p>Returns a list of batch job executions for an application.</p>
     */
    inline ListBatchJobExecutionsResult& AddBatchJobExecutions(BatchJobExecutionSummary&& value) { m_batchJobExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * batch job executions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * batch job executions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * batch job executions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * batch job executions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * batch job executions.</p>
     */
    inline ListBatchJobExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * batch job executions.</p>
     */
    inline ListBatchJobExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's returned when the response doesn't contain all
     * batch job executions.</p>
     */
    inline ListBatchJobExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchJobExecutionSummary> m_batchJobExecutions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
