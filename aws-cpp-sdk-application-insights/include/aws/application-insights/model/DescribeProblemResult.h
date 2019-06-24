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
  class AWS_APPLICATIONINSIGHTS_API DescribeProblemResult
  {
  public:
    DescribeProblemResult();
    DescribeProblemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProblemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
