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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/Evaluation.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the query results from a <code>DescribeEvaluations</code>
   * operation. The content is essentially a list of
   * <code>Evaluation</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeEvaluationsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API DescribeEvaluationsResult
  {
  public:
    DescribeEvaluationsResult();
    DescribeEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>Evaluation</code> that meet the search criteria. </p>
     */
    inline const Aws::Vector<Evaluation>& GetResults() const{ return m_results; }

    /**
     * <p>A list of <code>Evaluation</code> that meet the search criteria. </p>
     */
    inline void SetResults(const Aws::Vector<Evaluation>& value) { m_results = value; }

    /**
     * <p>A list of <code>Evaluation</code> that meet the search criteria. </p>
     */
    inline void SetResults(Aws::Vector<Evaluation>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of <code>Evaluation</code> that meet the search criteria. </p>
     */
    inline DescribeEvaluationsResult& WithResults(const Aws::Vector<Evaluation>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of <code>Evaluation</code> that meet the search criteria. </p>
     */
    inline DescribeEvaluationsResult& WithResults(Aws::Vector<Evaluation>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Evaluation</code> that meet the search criteria. </p>
     */
    inline DescribeEvaluationsResult& AddResults(const Evaluation& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of <code>Evaluation</code> that meet the search criteria. </p>
     */
    inline DescribeEvaluationsResult& AddResults(Evaluation&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeEvaluationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeEvaluationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The ID of the next page in the paginated results that indicates at least one
     * more page follows.</p>
     */
    inline DescribeEvaluationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Evaluation> m_results;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
