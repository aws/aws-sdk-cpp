/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLJobSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListAutoMLJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListAutoMLJobsResult();
    AWS_SAGEMAKER_API ListAutoMLJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAutoMLJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a summary list of jobs.</p>
     */
    inline const Aws::Vector<AutoMLJobSummary>& GetAutoMLJobSummaries() const{ return m_autoMLJobSummaries; }

    /**
     * <p>Returns a summary list of jobs.</p>
     */
    inline void SetAutoMLJobSummaries(const Aws::Vector<AutoMLJobSummary>& value) { m_autoMLJobSummaries = value; }

    /**
     * <p>Returns a summary list of jobs.</p>
     */
    inline void SetAutoMLJobSummaries(Aws::Vector<AutoMLJobSummary>&& value) { m_autoMLJobSummaries = std::move(value); }

    /**
     * <p>Returns a summary list of jobs.</p>
     */
    inline ListAutoMLJobsResult& WithAutoMLJobSummaries(const Aws::Vector<AutoMLJobSummary>& value) { SetAutoMLJobSummaries(value); return *this;}

    /**
     * <p>Returns a summary list of jobs.</p>
     */
    inline ListAutoMLJobsResult& WithAutoMLJobSummaries(Aws::Vector<AutoMLJobSummary>&& value) { SetAutoMLJobSummaries(std::move(value)); return *this;}

    /**
     * <p>Returns a summary list of jobs.</p>
     */
    inline ListAutoMLJobsResult& AddAutoMLJobSummaries(const AutoMLJobSummary& value) { m_autoMLJobSummaries.push_back(value); return *this; }

    /**
     * <p>Returns a summary list of jobs.</p>
     */
    inline ListAutoMLJobsResult& AddAutoMLJobSummaries(AutoMLJobSummary&& value) { m_autoMLJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListAutoMLJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListAutoMLJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListAutoMLJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AutoMLJobSummary> m_autoMLJobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
