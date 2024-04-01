/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StepSearchSummary.h>
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
namespace deadline
{
namespace Model
{
  class SearchStepsResult
  {
  public:
    AWS_DEADLINE_API SearchStepsResult();
    AWS_DEADLINE_API SearchStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API SearchStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline int GetNextItemOffset() const{ return m_nextItemOffset; }

    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline void SetNextItemOffset(int value) { m_nextItemOffset = value; }

    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline SearchStepsResult& WithNextItemOffset(int value) { SetNextItemOffset(value); return *this;}


    /**
     * <p>The steps in the search.</p>
     */
    inline const Aws::Vector<StepSearchSummary>& GetSteps() const{ return m_steps; }

    /**
     * <p>The steps in the search.</p>
     */
    inline void SetSteps(const Aws::Vector<StepSearchSummary>& value) { m_steps = value; }

    /**
     * <p>The steps in the search.</p>
     */
    inline void SetSteps(Aws::Vector<StepSearchSummary>&& value) { m_steps = std::move(value); }

    /**
     * <p>The steps in the search.</p>
     */
    inline SearchStepsResult& WithSteps(const Aws::Vector<StepSearchSummary>& value) { SetSteps(value); return *this;}

    /**
     * <p>The steps in the search.</p>
     */
    inline SearchStepsResult& WithSteps(Aws::Vector<StepSearchSummary>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>The steps in the search.</p>
     */
    inline SearchStepsResult& AddSteps(const StepSearchSummary& value) { m_steps.push_back(value); return *this; }

    /**
     * <p>The steps in the search.</p>
     */
    inline SearchStepsResult& AddSteps(StepSearchSummary&& value) { m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of results in the search.</p>
     */
    inline int GetTotalResults() const{ return m_totalResults; }

    /**
     * <p>The total number of results in the search.</p>
     */
    inline void SetTotalResults(int value) { m_totalResults = value; }

    /**
     * <p>The total number of results in the search.</p>
     */
    inline SearchStepsResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchStepsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchStepsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchStepsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_nextItemOffset;

    Aws::Vector<StepSearchSummary> m_steps;

    int m_totalResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
