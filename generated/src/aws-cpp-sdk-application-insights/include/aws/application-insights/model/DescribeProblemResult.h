/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/Problem.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeProblemResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult();
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeProblemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the problem. </p>
     */
    inline const Problem& GetProblem() const{ return m_problem; }

    /**
     * <p>Information about the problem. </p>
     */
    inline void SetProblem(const Problem& value) { m_problem = value; }

    /**
     * <p>Information about the problem. </p>
     */
    inline void SetProblem(Problem&& value) { m_problem = std::move(value); }

    /**
     * <p>Information about the problem. </p>
     */
    inline DescribeProblemResult& WithProblem(const Problem& value) { SetProblem(value); return *this;}

    /**
     * <p>Information about the problem. </p>
     */
    inline DescribeProblemResult& WithProblem(Problem&& value) { SetProblem(std::move(value)); return *this;}

  private:

    Problem m_problem;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
