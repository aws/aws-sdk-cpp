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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/StepSummary.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p>This output contains the list of steps returned in reverse order. This means
   * that the last step is the first element in the list.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStepsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ListStepsResult
  {
  public:
    ListStepsResult();
    ListStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The filtered list of steps for the cluster.</p>
     */
    inline const Aws::Vector<StepSummary>& GetSteps() const{ return m_steps; }

    /**
     * <p>The filtered list of steps for the cluster.</p>
     */
    inline void SetSteps(const Aws::Vector<StepSummary>& value) { m_steps = value; }

    /**
     * <p>The filtered list of steps for the cluster.</p>
     */
    inline void SetSteps(Aws::Vector<StepSummary>&& value) { m_steps = std::move(value); }

    /**
     * <p>The filtered list of steps for the cluster.</p>
     */
    inline ListStepsResult& WithSteps(const Aws::Vector<StepSummary>& value) { SetSteps(value); return *this;}

    /**
     * <p>The filtered list of steps for the cluster.</p>
     */
    inline ListStepsResult& WithSteps(Aws::Vector<StepSummary>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>The filtered list of steps for the cluster.</p>
     */
    inline ListStepsResult& AddSteps(const StepSummary& value) { m_steps.push_back(value); return *this; }

    /**
     * <p>The filtered list of steps for the cluster.</p>
     */
    inline ListStepsResult& AddSteps(StepSummary&& value) { m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStepsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStepsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStepsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<StepSummary> m_steps;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
