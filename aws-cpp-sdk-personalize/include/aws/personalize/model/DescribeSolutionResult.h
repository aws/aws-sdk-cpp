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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Solution.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API DescribeSolutionResult
  {
  public:
    DescribeSolutionResult();
    DescribeSolutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSolutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the solution.</p>
     */
    inline const Solution& GetSolution() const{ return m_solution; }

    /**
     * <p>An object that describes the solution.</p>
     */
    inline void SetSolution(const Solution& value) { m_solution = value; }

    /**
     * <p>An object that describes the solution.</p>
     */
    inline void SetSolution(Solution&& value) { m_solution = std::move(value); }

    /**
     * <p>An object that describes the solution.</p>
     */
    inline DescribeSolutionResult& WithSolution(const Solution& value) { SetSolution(value); return *this;}

    /**
     * <p>An object that describes the solution.</p>
     */
    inline DescribeSolutionResult& WithSolution(Solution&& value) { SetSolution(std::move(value)); return *this;}

  private:

    Solution m_solution;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
